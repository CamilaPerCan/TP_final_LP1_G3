#include "iHospital.h"

iHospital::iHospital(string nombrecin, int capa, int costo) : cEdificio(nombrecin, capa, costo) {};

void iHospital::aumentar(cJinete* jinete) {
	int algo = 100 - jinete->get_vida();
	while (algo>0 && jinete->get_vida() < 100) {
		jinete->set_vida(1);
		algo--;
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

void iHospital::bajar_nivel()
{
	this->nivel--;
	cout << "Te han bajado el nivel del hospital! Ahora esta en el nivel " << this->nivel << endl;
	this->capacidad = this->capacidad - 5;
	cout << "Ha bajado la capacidad de regenerar vida del hospital. Ahora la capacidad es " << this->capacidad << endl;
	this->precio = this->precio - 15;
	cout << "Ahora se necesitan " << this->precio << " para aumentar esta capacidad del hospital." << endl;
}
