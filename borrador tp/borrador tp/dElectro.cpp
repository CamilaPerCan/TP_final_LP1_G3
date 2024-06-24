#include "dElectro.h"
dElectro::dElectro(int corriente1, int energia1, int max, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida) : cDragon(nomb, carac, tam, nuevoEstado, nuevaVida) {
	this->corriente = corriente1;
	this->energia = energia1;
	this->maxEnergia = max;
}

int dElectro::atacar(cVikingo* victima) {
	int puntosGanados = 0;
	if (this->energia < victima->get_vida())
	{
		if (this->corriente < victima->get_vida()) {
			victima->set_vida(victima->get_vida() - this->corriente);
			cout << BLUE_BG << this->nombre << " esta electrocutando a " << victima->get_nombre() << "! Ahora tiene " << victima->get_vida() << " de vida." << RESET << endl;
			puntosGanados = 20;
		}
		else {
			victima->set_vida(0);
			cout << BLUE_BG << this->nombre << " esta electrocutando a " << victima->get_nombre() << RESET <<endl;
			cout << RED_TEXT << "Has asesinado a " << victima->get_nombre() << "!!" << RESET << endl << RED_TEXT<< " FUERZA BARBIE, GUERRERA." << RESET << endl;
			puntosGanados = 50;
		}
		this->energia = this->energia - 1;
		cout << "A " << this->nombre << " Le quedan " << this->energia << " descargas." << endl;
	}
	else cout << "Oh no, " << this->nombre << " no tiene suficientes descargas." << endl;
	return puntosGanados;
}
 
void dElectro::comer(int comidita) {
	while (this->energia<this->maxEnergia && comidita!=0 ) {
		this->energia++;
		comidita--;
	}
	cout << "\033[35m" << this->nombre << " ha comido y llenado su tanque de energia. Ahora tiene " << this->energia << " energias de corriente para acabar con sus enemigos" << RESET << endl;

}

void dElectro::entrenar(int numero) {
	this->maxEnergia = this->maxEnergia + numero;
	this->nivel = this->nivel + 1;
}