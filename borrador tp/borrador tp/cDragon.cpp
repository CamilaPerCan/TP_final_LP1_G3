#include "cDragon.h"

cDragon::cDragon(string nomb, string carac, string ejemplar, string tam, bool nuevoEstado, int nuevaVida, int ofensiva, nformaAtaque
    formula1) {
	nombre = nomb;
	caracteristica = carac;
	tipo = ejemplar;
	tamanio = tam;
	estado = nuevoEstado;
	vida = nuevaVida;
	ataque = ofensiva;
	formaAtaque = formula1;
}

bool cDragon::baja()
{
    if (vida == 0)
        return false; // false = 0 : dragon muerto
    else
        return true; // true = 1 : dragon vivo
}
