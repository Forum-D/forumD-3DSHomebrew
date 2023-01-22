#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(const std::string &name);
    void show();
    void registerUser();
    void loginUser();

private:
    std::string name;
};

#endif