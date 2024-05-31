#include "cJinete.h"

cJinete::cJinete(string apodin, string cumple, string caracteristicas, int nuevoNivel, cDragon nuevoDragon) {
	apodo = apodin;
	fechaNac = cumple; 
	caracFisicas = caracteristicas;
	nivel = nuevoNivel;
	*dragoncito = nuevoDragon;
}
