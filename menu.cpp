#include "menu.h"

char* menuOption1;
char* menuOption2;
char* menuOption3;

void initMenu() {
    // initialisation des options de menu
    menuOption1 = "Option 1";
    menuOption2 = "Option 2";
    menuOption3 = "Option 3";
}

void drawMenu() {
    // dessin du menu
    printf("Menu principal: \n");
    printf("1. %s\n", menuOption1);
    printf("2. %s\n", menuOption2);
    printf("3. %s\n", menuOption3);
    printf("Veuillez sélectionner une option: ");
}
