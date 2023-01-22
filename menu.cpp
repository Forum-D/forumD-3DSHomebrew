#include "menu.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <sys/socket.h>
#include <netdb.h>

Menu::Menu(const std::string &name) : name(name) {}

void Menu::show() {
    std::cout << "Welcome to " << name << " Menu!" << std::endl;
}

void Menu::connectToServer() {
    int sockfd, portno = 80;
    struct sockaddr_in serv_addr;
    struct hostent *server;
    char buffer[256];
    
    // Create a socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        std::cerr << "ERROR opening socket" << std::endl;
        exit(1);
    }
    
    // Get the server
    server = gethostbyname("localhost");
    if (server == NULL) {
        std::cerr << "ERROR, no such host" << std::endl;
        exit(1);
    }
    
    // Setup the server address
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    bcopy((char *)server->h_addr, 
          (char *)&serv_addr.sin_addr.s_addr,
          server->h_length);
    serv_addr.sin_port = htons(portno);

    // Connect to the server
    if (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0) {
        std::cerr << "ERROR connecting" << std::endl;
        exit(1);
    }
    
    // Send a message to the server
    bzero(buffer,256);
    strcpy(buffer, "Hello from ForumD!");
    int n = write(sockfd,buffer,strlen(buffer));
    if (n < 0) {
        std::cerr << "ERROR writing to socket" << std::endl;
        exit(1);
    }
    
    // Read the response
    bzero(buffer,256);
    n = read(sockfd,buffer,255);
    if (n < 0) {
        std::cerr << "ERROR reading from socket" << std::endl;
        exit(1);
    }
    
    std::cout << "Server response: " << buffer << std::endl;
    close(sockfd);
}