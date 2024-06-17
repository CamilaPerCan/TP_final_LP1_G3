#include "iHospital.h"

iHospital::iHospital(string nombrecin, int capa, int costo) : cEdificio(nombrecin, capa, costo) {};

void iHospital::aumentar(cJinete* jinete) {
	while (jinete->get_vida() < 100) {
		jinete->set_vida(this->capacidad);
	}
}

void iHospital::subir_nivel()
{
	this->nivel++;
	cout << "Has subido el nivel del hospital! Ahora esta en el nivel " << this->nivel << endl;
	this->capacidad = this->capacidad + 5;
	cout << "Has aumentado la capacidad de regenerar vida del hospital! Ahora la capacidad es " << this->capacidad << endl;
	this->precio = this->precio + 15;
	cout << "Ahora se necesitan " << this->precio << " para aumentar esta capacidad del hospital." << endl;
}
