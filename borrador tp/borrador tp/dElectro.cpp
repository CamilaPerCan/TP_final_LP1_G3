#include "dElectro.h"
dElectro::dElectro(int corriente1, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida, int nivelcito) : cDragon(nomb, carac, tam, nuevoEstado, nuevaVida, nivelcito) {
	this->corriente = corriente1;
}

void dElectro::atacar(cVikingo* victima) {
	cout << this->nombre << "está electrocutando a" << victima->get_nombre() << endl;
	if (this->corriente < victima->get_vida()) {
		victima->set_vida(victima->get_vida() - this->corriente);
	}
	else {
		victima->set_vida(0);
		cout << victima->get_nombre() << "ha muerto:(." << endl;
	}
}
