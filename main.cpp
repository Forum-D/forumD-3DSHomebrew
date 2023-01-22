#include "gfx.h"
#include "menu.h"
#include "user.h"

int main() {
    gfxInitDefault();
    initMenu();
    initUser();

    // boucle principale
    while (aptMainLoop()) {
        // on dessine le menu
        drawMenu();

        // on attend l'interaction de l'utilisateur
        userInput();

        // on met à jour l'écran
        gfxFlushBuffers();
        gfxSwapBuffers();

        // on gère les erreurs
        aptMainLoop();
    }
    gfxExit();
    return 0;
}
