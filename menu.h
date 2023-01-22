#ifndef MENU_H
#define MENU_H

#include <string>

class Menu {
public:
    Menu(const std::string &name);
    void show();
    void connectToServer();

private:
    std::string name;
};

#endif