#include "dElectro.h"
dElectro::dElectro(int corriente1, int energia1, int max, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida) : cDragon(nomb, carac, tam, nuevoEstado, nuevaVida) {
	this->corriente = corriente1;
	this->energia = energia1;
	this->maxEnergia = max;
}

void dElectro::atacar(cVikingo* victima) {
	if (this->energia)
	{
		cout <<BLUE_BG << this->nombre << " esta electrocutando a " << victima->get_nombre() << RESET <<endl;
		if (this->corriente < victima->get_vida()) {
			victima->set_vida(victima->get_vida() - this->corriente);
		}
		else {
			victima->set_vida(0);
			cout << "Has asesinado a " << victima->get_nombre() << "!!" << endl << RED_TEXT<< "FUERZA BARBIE, GUERRERA." << RESET << endl;
		}
		this->energia = this->energia - 1;
	}
	else cout << "Oh no, " << this->nombre << " no tiene suficientes descargas." << endl;
}
 
void dElectro::comer(int comidita) {
	while (this->energia<this->maxEnergia && comidita!=0 ) {
		this->energia++;
		comidita--;
	}
	cout << this->nombre << "ha comido y llenado su tanque de energía. Ahora tiene " << this->energia << " energias de corriente para acabar con sus enemigos" << endl;

}

void dElectro::entrenar(int numero) {
	this->maxEnergia = this->maxEnergia + numero;
	this->nivel = this->nivel + 1;
}