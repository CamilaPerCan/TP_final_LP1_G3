#include "dFuego.h"

dFuego::dFuego(int fuegos, int intensa, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida, int nivelcito) : cDragon(nomb, carac, tam, nuevoEstado, nuevaVida, nivelcito) {
	this->fueguitos = fuegos;
	this->intensidad = intensa;
}

void dFuego::atacar(cVikingo* victima) {
	if (this->fueguitos) {
		cout << this->nombre << "ha tirado un bola de fuego!" << victima->get_nombre() << endl;
		if (this->intensidad < victima->get_vida()) {
			victima->set_vida(victima->get_vida() - this->intensidad);
		}
		else {
			victima->set_vida(0);
			cout << victima->get_nombre() << "ha muerto:(." << endl;
		}
		this->fueguitos = this->fueguitos - 1;
		cout << "Has asesinado a" << victima->get_nombre() << "!!" << endl << "FUERZA BARBIE, GUERRERA." << endl;
	}
	else cout << "Oh no, " << this->nombre << " no tiene suficientes bolas de fuego." << endl;
}