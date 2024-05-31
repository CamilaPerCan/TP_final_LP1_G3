#include "cCiudadano.h"

cCiudadano::cCiudadano(int vidaa, string laburin) {
    vida = vidaa;
    puestoGuerra = laburin;
}

bool cCiudadano::baja()
{
    if (vida == 0)
        return false; // false = 0 : jinete muerto
    else
        return true; // true = 1 : jinete vivo
}