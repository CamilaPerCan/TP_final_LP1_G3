#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "dElectro.h"

class dFuego :public cDragon
{
	int fueguitos;

	int intensidad;

public:
	dFuego(int fuegos, int intensa, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida, int nivelcito);

	void atacar(cVikingo* victima);

	~dFuego() {};

};

