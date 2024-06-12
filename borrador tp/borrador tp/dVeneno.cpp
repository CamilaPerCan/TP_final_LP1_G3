#include "dVeneno.h"
dVeneno::dVeneno(int toxica, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida, int nivelcito) : cDragon(nomb, carac, tam, nuevoEstado, nuevaVida, nivelcito) {
	this->toxicidad = toxica;
}

void dVeneno::atacar(cVikingo* victima) {
	cout << this->nombre << "está envenenando a " << victima->get_nombre() << endl;
	if (this->toxicidad < victima->get_vida()) {
		victima->set_vida(victima->get_vida() - this->toxicidad);
	}
	else {
		victima->set_vida(0);
		cout << "Has asesinado a " << victima->get_nombre() << "!!" << endl << "FUERZA BARBIE, GUERRERA." << endl;
	}
}