#include "iComedor.h"

iComedor::iComedor(string nombrecin, int capa, int costo) : cEdificio(nombrecin, capa, costo) {};

void iComedor::subir_nivel()
{
	this->nivel++;
	cout << "Has subido el nivel del comedor! Ahora esta en el nivel " << this->nivel << endl;
	this->capacidad = this->capacidad + 5;
	cout << "Has aumentado la capacidad de entregar energia del comedor! Ahora la capacidad es " << this->capacidad << endl;
	this->precio = this->precio + 15;
	cout << "Ahora se necesitan " << this->precio << " para aumentar la capacidad del comedor." << endl;
}

void iComedor::aumentar(cJinete* jinete) {
	jinete->get_Dragon()->comer(this->capacidad);
}
