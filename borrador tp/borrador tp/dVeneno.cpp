#include "dVeneno.h"
dVeneno::dVeneno(int toxica, int litritos, int max, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida) : cDragon(nomb, carac, tam, nuevoEstado, nuevaVida) {
	this->toxicidad = toxica;
	this->litros = litritos;
	this->max_litros = max;
}

int dVeneno::atacar(cVikingo* victima) {//bajar y poner un if
	int puntosGanados = 0;
	if (this->toxicidad < victima->get_vida()) {
		victima->set_vida(victima->get_vida() - this->toxicidad);
		cout << GREEN_BG << BLACK_TEXT << this->nombre << " esta envenenando a " << victima->get_nombre() << "! Ahora tiene " << victima->get_vida() << " de vida." << RESET << endl;
		puntosGanados = 20;
	}
	else {
		victima->set_vida(0);
		cout << GREEN_BG << BLACK_TEXT << this->nombre << " esta envenenando a " << victima->get_nombre() << RESET << endl;
		cout << RED_TEXT << "Has asesinado a " << victima->get_nombre() << "!!" << RESET << endl << RED_TEXT << " FUERZA BARBIE, GUERRERA." << RESET<<endl;
		puntosGanados = 50;
	}
	this->litros = this->litros - 1;
	cout << "A " << this->nombre << " Le quedan " << this->litros << " litros de veneno." << endl;
	return puntosGanados;
}

void dVeneno::comer(int comidita) {
	while (this->litros < this->max_litros && comidita != 0) {
		this->litros++;
		comidita--;
	}
	cout << this->nombre << " ha comido y llenado su tanque de energia. Ahora tiene " << this->litros << " litros de veneno para acabar con sus enemigos." << endl;

}

void dVeneno::entrenar(int numero) {
	this->max_litros = this->max_litros + numero;
	this->nivel = this->nivel + 1;
}