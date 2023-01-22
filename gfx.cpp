#include "gfx.h"

void gfxInitDefault() {
    // Initialisation des fonctionnalités graphiques
    gfxInit(GSP_RGB5_A1_LP, GSP_RGB5_A1_LP, false);
    gfxSetDoubleBuffering(GFX_TOP, true);
    gfxSetDoubleBuffering(GFX_BOTTOM, false);
}

void gfxExit() {
    // Nettoyage des fonctionnalités graphiques
    gfxExit();
}

void gfxFlushBuffers() {
    // Rafraîchit l'écran
    gfxFlushBuffers();
}

void gfxSwapBuffers() {
    // Échange les buffers
    gfxSwapBuffers();
}