#include "comunales.h"
#include <list>

//hacer get de cant en jinete y vikingo
//combate es para que los vikingos se peleen con los jinetes y sus respectivos jinetes
//atraco se encarga de que los vikingos ataquen a los edificios y saca puntos al usuario

ostream& operator<<(ostream &datito, cVikingo& vikinguito) {
	datito << vikinguito.nombre << ", " <<  vikinguito.danio << ", " << vikinguito.cant << ", " << vikinguito.vida << ", " << vikinguito.trabajar() << endl;
	return datito;
}

ostream& operator<<(ostream& datito, cJinete& jinetito)
{
	datito << jinetito.nombre << ", " << jinetito.dragoncito->get_nombre() << jinetito.caracFisicas << ", " << jinetito.cant << ", " << jinetito.nivel << ", " << jinetito.puestoGuerra << endl;
	return datito;
}

int combate(list<cVikingo*>* vikingos, int cantV, list <cJinete*>* jinetes, int cantJ) {
	
	int vidaV = 0;
	list<cVikingo*>::iterator it = vikingos->begin();
	for (it = vikingos->begin(); it != vikingos->end(); it++) {
		vidaV = vidaV + (*it)->get_vida();
	}

	int vidaJ = 0;
	list<cJinete*>::iterator it1 = jinetes->begin();
	for (it1 = jinetes->begin(); it1 != jinetes->end(); it1++) {
		vidaJ = vidaJ + (*it1)->get_vida();
	}

	while (vidaV!=0 && vidaJ!=0) {
			
	}
	return 0;
}

void domar_Dragon(list<cDragon*>* dragones, cJinete &jinetin)
{
	list<cDragon*>::iterator it = dragones->begin();
	
	srand(time(NULL));
	
	int cant = 0;
	while (cant==0&&it!=dragones->end()) {
		if (!(*it)->estado) {
			jinetin.dragoncito = (*it);
			(*it)->estado = 1;
			(*it)->nivel = rand() % 27 + 1;
			cant++;
		}
		it++;
	}
	if (cant == 0) {
		throw new exception("No hay dragones no domados :( ");
	}
}
