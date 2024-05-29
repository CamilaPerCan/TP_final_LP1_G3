#include "cJinete.h"

cJinete::cJinete(string apodin, string cumple, string caracteristicas, string puesto, int nuevaVida, int nuevoNivel, cDragon nuevoDragon) {
	apodo = apodin;
	fechaNac = apodin;
	caracFisicas = caracteristicas;
	puestoGuerra = puesto;
	vida = nuevaVida;
	nivel = nuevoNivel;
	*dragoncito = nuevoDragon;
}

bool cJinete::baja()
{
    if (vida == 0)
        return false; // false = 0 : jinete muerto
    else
        return true; // true = 1 : jinete vivo
}
