#include "iHospital.h"

iHospital::iHospital(string nombrecin, int capa, int costo) : cEdificio(nombrecin, capa, costo) {};

void iHospital::aumentar(cJinete* jinete) {
	jinete->set_vida(100);
	cout << jinete->get_nombre() << " estuvo en el hospital. Ahora tiene " << jinete->get_vida() << " de vida." << endl;
}

void iHospital::subir_nivel()
{
	this->nivel++;
	this->capacidad = this->capacidad + 5;
	this->precio = this->precio + 15;
	cout << GREEN_TEXT << "Has subido el nivel del hospital! Ahora esta en el nivel " << this->nivel << RESET << endl;
	cout << "Has aumentado la capacidad de regenerar vida del hospital! Ahora es " << this->capacidad << endl; 
	cout << " Ahora se necesitan " << this->precio << " para aumentar esta capacidad." << endl;
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
