#include "dVeneno.h"
dVeneno::dVeneno(int toxica, int litritos, int max, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida) : cDragon(nomb, carac, tam, nuevoEstado, nuevaVida) {
	this->toxicidad = toxica;
	this->litros = litritos;
	this->max_litros = max;
}

void dVeneno::atacar(cVikingo* victima) {//bajar y poner un if
	cout <<GREEN_BG<<BLACK_TEXT<< this->nombre << "está envenenando a " << victima->get_nombre() << RESET<< endl;
	if (this->toxicidad < victima->get_vida()) {
		victima->set_vida(victima->get_vida() - this->toxicidad);
	}
	else {
		victima->set_vida(0);
		cout << "Has asesinado a " << victima->get_nombre() << "!!" << endl << RED_TEXT << "FUERZA BARBIE, GUERRERA." << RESET<<endl;
	}
}

void dVeneno::comer(int comidita) {
	while (this->litros < this->max_litros && comidita != 0) {
		this->litros++;
		comidita--;
	}
	cout << this->nombre << "ha comido y llenado su tanque de energía. Ahora tiene " << this->litros << "litros de veneno para acabar con sus enemigos" << endl;

}

void dVeneno::entrenar(int numero) {
	this->max_litros = this->max_litros + numero;
}