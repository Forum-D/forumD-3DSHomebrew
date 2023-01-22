#include <iostream>
#include "menu.h"

int main() {
    Menu menu("Forum D");
    menu.show();
    menu.connectToServer();
    return 0;
}

Gfx.h:

#ifndef GFX_H
#define GFX_H

#include <string>

class Gfx {
public:
    Gfx(const std::string &name);
    void show();

private:
    std::string name;
};

#endif

Gfx.cpp:

#include "gfx.h"

Gfx::Gfx(const std::string &name) : name(name) {}

void Gfx::show() {
    std::cout << "Displaying graphics for " << name << std::endl;
}