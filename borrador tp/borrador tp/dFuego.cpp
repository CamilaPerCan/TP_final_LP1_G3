#include "dFuego.h"

dFuego::dFuego(int fuegos, int max, int intensa, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida) : cDragon(nomb, carac, tam, nuevoEstado, nuevaVida) {
	this->fueguitos = fuegos;
	this->maxFueguitos = max;
	this->intensidad = intensa;
}

int dFuego::atacar(cVikingo* victima) {
	int puntosGanados = 0;
	if (this->fueguitos < victima->get_vida()) {
		if (this->intensidad < victima->get_vida()) {
			victima->set_vida(victima->get_vida() - this->intensidad);
			cout << RED_BG << ORANGE_TEXT << this->nombre << " le ha tirado un bola de fuego a " << victima->get_nombre() << "! Ahora tiene " << victima->get_vida() << " de vida." << RESET << endl;
			puntosGanados = 20;
		}
		else {
			victima->set_vida(0);
			cout << RED_BG << ORANGE_TEXT << this->nombre << " ha tirado un bola de fuego!" << RESET << endl;
			cout << "Has asesinado a " << victima->get_nombre() << "!!" << endl << RED_TEXT << " FUERZA BARBIE, GUERRERA." << RESET << endl;
			puntosGanados = 50;
		}
		this->fueguitos = this->fueguitos - 1;
		cout << "A " << this->nombre << " Le quedan " << this->fueguitos << " fueguitos." << endl;
	}
	else cout << "Oh no, " << this->nombre << " no tiene suficientes bolas de fuego." << endl;
	return puntosGanados;
}

void dFuego::comer(int comidita) {
	while (this->fueguitos < this->maxFueguitos && comidita != 0) {
		this->fueguitos++;
		comidita--;
	}
	cout << this->nombre << " ha comido y llenado su tanque de energia. Ahora tiene " << this->fueguitos << " bolas de fuego para acabar con sus enemigos" << endl;

}

void dFuego::entrenar(int numero) {
	this->maxFueguitos = this->maxFueguitos + numero;
	this->nivel = this->nivel + 1;
}