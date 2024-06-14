#include "iHospital.h"

void iHospital:: aumentar(cJinete* jinete) {
	while (jinete->get_vida() < 100) {
		jinete->set_vida(this->capacidad);
	}
}