#ifndef _GFX_H_
#define _GFX_H_

#include <3ds.h>

// initialise le système gfx
void gfxInitDefault();

// nettoie le système gfx
void gfxExit();

// rafraîchit l'écran
void gfxFlushBuffers();

// échange les buffers
void gfxSwapBuffers();

#endif // _GFX_H_