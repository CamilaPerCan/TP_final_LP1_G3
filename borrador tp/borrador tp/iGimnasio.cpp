#include "iGimnasio.h"

iGimnasio::iGimnasio(int dispo, string nombrecin, int capa, int costo) : cEdificio(nombrecin, capa, costo)
{
	clases_disp = dispo;
}

void iGimnasio::aumentar(cJinete* jinete) {
	if (this->clases_disp > 0) {
		jinete->get_Dragon()->entrenar(this->capacidad);
		this->clases_disp--;
		cout << jinete->get_Dragon()->get_nombre() << " ha subido de nivel a: " << jinete->get_Dragon()->get_nivel() << "." << endl;
	}
	else {
		cout << "Ya has usado todas tus sesiones de entrenamiento, para entrenar a tu dragon tienes que comprar nuevas."<<endl;
	}
}

void iGimnasio::subir_nivel()
{
	this->nivel++;
	this->capacidad = this->capacidad + 5;
	this->precio = this->precio + 15;
	cout << GREEN_TEXT << "Has subido el nivel del gimnasio! Ahora esta en el nivel " << this->nivel << RESET << endl;
	cout << "Has aumentado la capacidad de entregar energia! Ahora la capacidad es " << this->capacidad << endl; 
	cout << "Ahora se necesitan " << this->precio << " para aumentar esta capacidad del gimnasio." << endl;
}

void iGimnasio::bajar_nivel()
{
	this->nivel--;
	cout << "Te han bajado el nivel del gimnasio! Ahora esta en el nivel " << this->nivel << endl;
	this->capacidad = this->capacidad - 5;
	cout << "Ha perdido capacidad de entregar energia del gimnasio. Ahora es " << this->capacidad << endl;
	this->precio = this->precio - 15;
	cout << "Ahora se necesitan " << this->precio << " para aumentar esta capacidad." << endl;
}

void iGimnasio::comprar_clase(int puntos) {
	this->clases_disp = this->clases_disp + (puntos/5);
	cout << "Has comprado una clase para tus dragoncitos!" << endl;
}