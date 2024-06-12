#include "cJinete.h"

/*cJinete::cJinete(string cumple, string caracteristicas, int nuevoNivel, cDragon nuevoDragon) {
	fechaNac = cumple; 
	caracFisicas = caracteristicas;
	nivel = nuevoNivel;
	*dragoncito = nuevoDragon;
}*/
int cJinete::cant = 0;

void cJinete::domar_Dragon(list<cDragon*>* dragones, int cantD)
{
	list<cDragon*>::iterator it = dragones->begin();
	srand(time(NULL));
	int dragoncin = rand() % cantD + 1; // dragon random de la lista
	advance(it, dragoncin); // advance(it, n) : Advances the iterator it by n element positions.
	int prob = rand() % 100 + 1; // probabilidades de q pueda domar ese dragon
	if ((*it)->get_nivel() > 10 && this->nivel > 10 && prob > 25) {
		this->dragoncito = (*it);
	}
}
