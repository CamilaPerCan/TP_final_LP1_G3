#include "iComedor.h"

iComedor::iComedor(string nombrecin, int capa, int costo) : cEdificio(nombrecin, capa, costo) {};

void iComedor::subir_nivel()
{
	this->nivel++;
	this->capacidad = this->capacidad + 5;
	this->precio = this->precio + 15;
	cout << "Has subido el nivel del comedor! Ahora esta en el nivel " << this->nivel << " Has aumentado la capacidad de entregar energia del comedor! Ahora es " 
		<< this->capacidad << " Ahora se necesitan " << this->precio << " para aumentar esta capacidad." << endl;
}

void iComedor::bajar_nivel()
{
	this->nivel--;
	cout << "Te han bajado el nivel del comedor! Ahora esta en el nivel " << this->nivel << endl;
	this->capacidad = this->capacidad - 5;
	cout << "Ha bajado la capacidad de entregar energia del comedor. Ahora la capacidad es " << this->capacidad << endl;
	this->precio = this->precio - 15;
	cout << "Ahora se necesitan " << this->precio << " para aumentar la capacidad del comedor." << endl;
}

void iComedor::aumentar(cJinete* jinete) {
	jinete->get_Dragon()->comer(this->capacidad);
}
