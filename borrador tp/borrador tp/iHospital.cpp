#include "iHospital.h"

iHospital::iHospital(string nombrecin, int capa, int costo) : cEdificio(nombrecin, capa, costo) {};

void iHospital::aumentar(cJinete* jinete) {
	while (jinete->get_vida() < 100) {
		jinete->set_vida(this->capacidad);
	}
}