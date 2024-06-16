#include "iComedor.h"

iComedor::iComedor(string nombrecin, int capa, int costo) : cEdificio(nombrecin, capa, costo) {};

void iComedor::subir_nivel()
{
	this->nivel++;
}

void iComedor::aumentar(cJinete* jinete) {
	jinete->get_Dragon()->comer(this->capacidad);
}
