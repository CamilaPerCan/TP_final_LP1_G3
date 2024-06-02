#include "cVikingo.h"

void cVikingo::atacarDragon(cJinete* victima) {
	if (victima->get_Dragon()->get_vida() == 0)
		cVikingo::atacarJinete;
	if (this->danio < victima->get_Dragon()->get_vida()) {
		victima->get_Dragon()->set_vida(victima->get_Dragon()->get_vida() - this->danio);
	}
	else {
		victima->get_Dragon()->set_vida(0);
		cout << victima->get_Dragon()->get_nombre() << "ha muerto:(." << endl;
		cout << victima->get_nombre() << "está desprotegido";
	}
}

void cVikingo::atacarJinete(cJinete* victima) {
	if (this->danio < victima->get_vida()) {
		victima->set_vida(victima->get_vida() - this->danio);
	}
	else {
		victima->set_vida(0);
		cout << victima->get_nombre() << "ha muerto:(." << endl;
	}
}