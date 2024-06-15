#include "dFuego.h"

dFuego::dFuego(int fuegos, int max, int intensa, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida) : cDragon(nomb, carac, tam, nuevoEstado, nuevaVida) {
	this->fueguitos = fuegos;
	this->maxFueguitos = max;
	this->intensidad = intensa;
}

void dFuego::atacar(cVikingo* victima) {
	if (this->fueguitos) {
		cout << RED_BG << ORANGE_TEXT << this->nombre << " ha tirado un bola de fuego!" << victima->get_nombre() << RESET << endl;
		if (this->intensidad < victima->get_vida()) {
			victima->set_vida(victima->get_vida() - this->intensidad);
		}
		else {
			victima->set_vida(0);
			cout << victima->get_nombre() << " ha muerto:(." << endl;
		}
		this->fueguitos = this->fueguitos - 1;
		cout << "Has asesinado a " << victima->get_nombre() << "!!" << endl << RED_TEXT << "FUERZA BARBIE, GUERRERA." << RESET << endl;
	}
	else cout << "Oh no, " << this->nombre << " no tiene suficientes bolas de fuego." << endl;
}

void dFuego::comer(int comidita) {
	while (this->fueguitos < this->fueguitos && comidita != 0) {
		this->fueguitos++;
		comidita--;
	}
	cout << this->nombre << "ha comido y llenado su tanque de energía. Ahora tiene " << this->fueguitos << "bolas de fuego para acabar con sus enemigos" << endl;

}

void dFuego::entrenar(int numero) {
	this->maxFueguitos = this->maxFueguitos + numero;
}