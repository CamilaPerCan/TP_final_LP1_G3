#include "cDragon.h"

cDragon::cDragon(string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida, int nivelcito)
{
	nombre = nomb;
	caracteristica = carac;
	tamanio = tam;
	estado = nuevoEstado;
	vida = nuevaVida;
	nivel = nivelcito;
}

bool cDragon::baja()
{
    if (vida == 0)
        return false; // false = 0 : dragon muerto
    else
        return true; // true = 1 : dragon vivo
}
