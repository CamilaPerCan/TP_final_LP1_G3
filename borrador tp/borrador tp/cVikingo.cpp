#include "cVikingo.h"

int cVikingo::cant = 0;

void cVikingo::atacarDragon(cJinete* victima) {//si el jinete no tiene dragon vivo o domado, se ataca al jinete

	if (victima->get_Dragon() == NULL) {
		this->atacarJinete(victima);
		throw exception("Este jinete no tiene dragon domado");
	}

	if (victima->get_Dragon()->get_vida() == 0)
		atacarJinete(victima);

	if (this->danio < victima->get_Dragon()->get_vida()) {
		victima->get_Dragon()->set_vida(victima->get_Dragon()->get_vida() - this->danio);
		cout << "El vikingo "<<this->nombre<<" ha atacado a "<< victima->get_Dragon()->get_nombre() << endl;
		cout << "Ahora tiene " << victima->get_Dragon()->get_vida() << "de vida"<<endl;
	}
	else {
		victima->get_Dragon()->set_vida(0);
		cout << victima->get_Dragon()->get_nombre() << " ha muerto:(." << endl;
		*this + victima->get_Dragon();
		cout << victima->get_nombre() << " está desprotegido";
	}
}

void cVikingo::atacarJinete(cJinete* victima) {
	if (this->danio < victima->get_vida()) {
		victima->set_vida(victima->get_vida() - this->danio);
	}
	else {
		victima->set_vida(1);
		cout << victima->get_nombre() << " tiene 1 de vida, se ha ido al hospital en ambulancia. IUIUIUIUIU" << endl;
	}
}