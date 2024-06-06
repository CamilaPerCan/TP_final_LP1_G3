#include "comunales.h"
#include <list>

//hacer get de cant en jinete y vikingo
//combate es para que los vikingos se peleen con los jinetes y sus respectivos jinetes
//atraco se encarga de que los vikingos ataquen a los edificios y saca puntos al usuario

ostream& operator<<(ostream &datito, cVikingo& vikingito) {
	datito << vikingito.nombre << ", " <<  vikingito.danio << ", " << vikingito.cant << ", " << vikingito.vida << ", " << vikingito.trabajar() << endl;
	return datito;
}

ostream& operator<<(ostream& datito, cJinete& jinetito)
{
	datito << jinetito.nombre << ", " << jinetito.caracFisicas << ", " << jinetito.cant << ", " << jinetito.nivel << ", " << jinetito.puestoGuerra << endl;
	return datito;
}

int combate(cVikingo* vikingos, cJinete* jinetes) {
	int movimientos=0;
	int primero=0;
	while (movimientos==0) {
			
	}
	return 0;
}
