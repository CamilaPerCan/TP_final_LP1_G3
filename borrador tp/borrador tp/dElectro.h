#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "cVikingo.h"

class dElectro : public cDragon
{
	int corriente;
public:
	dElectro(int corriente1, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida, int nivelcito);
	void atacar(cVikingo* victima);
	
	~dElectro() {};
};

