#include "iComedor.h"

void iComedor::aumentar(cJinete* jinete) {
	jinete->get_Dragon()->comer(this->capacidad);
}