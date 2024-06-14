#include "dElectro.h"
dElectro::dElectro(int corriente1, int energia1, int max, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida) : cDragon(nomb, carac, tam, nuevoEstado, nuevaVida) {
	this->corriente = corriente1;
	this->energia = energia1;
	this->maxEnergia = max;
}

void dElectro::atacar(cVikingo* victima) {
	if (this->energia)
	{
		cout << this->nombre << " está electrocutando a " << victima->get_nombre() << endl;
		if (this->corriente < victima->get_vida()) {
			victima->set_vida(victima->get_vida() - this->corriente);
		}
		else {
			victima->set_vida(0);
			cout << "Has asesinado a " << victima->get_nombre() << "!!" << endl << "FUERZA BARBIE, GUERRERA." << endl;
		}
		this->energia = this->energia - 1;
	}
	else cout << "Oh no, " << this->nombre << " no tiene suficientes descargas." << endl;
}
