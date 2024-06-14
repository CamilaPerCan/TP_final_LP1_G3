#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "dFuego.h"

class dVeneno : public cDragon
{
	int toxicidad;
	int litros;
	int max_litros;

public:

	dVeneno(int toxica, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida);
	void comer(int comidita);

	void atacar(cVikingo* victima);

};

