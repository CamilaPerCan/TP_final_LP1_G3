#include "comunales.h"

//hacer get de cant en jinete y vikingo

ostream& operator<<(ostream &datito, cVikingo& vikingito) {
	datito << vikingito.nombre << ", " <<  vikingito.danio << ", " << vikingito.cant << ", " << vikingito.vida << ", " << vikingito.trabajar() << endl;
	return datito;
}

ostream& operator<<(ostream& datito, cJinete& jinetito)
{
	datito << jinetito.nombre << ", " << jinetito.caracFisicas << ", " << jinetito.cant << ", " << jinetito.vida << ", " << jinetito.puestoGuerra << endl;
	return datito;
}