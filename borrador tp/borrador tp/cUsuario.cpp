#include "dVeneno.h"

cUsuario::cUsuario (list<cDragon*> &dragoncitos, list<cJinete*>& jinetitos, list<cVikingo*>& vikingitos) {
	
	this->jinetes = jinetitos;
	this->vikingos = vikingitos;
	this->dragones_salvajes = dragoncitos;
	this->dragones = dragoncitos;

	this->cont_combate = 0;
	this->puntos = 100;

}

void cUsuario::domar_Dragon( cJinete * jinetito)
{
	list<cDragon*>::iterator it = this->dragones.begin();

	srand(time(NULL));

	int cant = 0;
	while (cant == 0 && it != dragones.end()) {
		if ((*it)->estado == false){
			jinetito->dragoncito = (*it);
			(*it)->estado = 1;
			(*it)->nivel = rand() % 27 + 1;
			cant++;
			(*this) - (*it);
	}
		it++;
	}
	if (cant == 0) {
		throw new exception("No hay dragones no domados :( ");
	}
}

void cUsuario::combate() {
	list<cJinete*>::iterator it = this->jinetes.begin();
	this->domar_Dragon((*it));
	cout << *(*it) << endl;
}
void cUsuario::atraco()
{
	srand(time(NULL));

	int robados = rand() % this->puntos + 1;

	if (robados < puntos) {
		this->puntos = this->puntos - robados;
		cout << "Oh no, un grupo de vikingos ataco la aldea cuando estaba desprotegida y se robaron " << robados << " puntos." << endl
			<< "Le quedan " << this->puntos << " puntos." << endl;
	}

}
;
