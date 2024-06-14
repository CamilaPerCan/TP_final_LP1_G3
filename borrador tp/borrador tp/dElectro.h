#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "cVikingo.h"

class dElectro : public cDragon
{
	int corriente;
	int energia; //cantidad de descargas que tiene acumuladas ¿?
	int maxEnergia; //cant maxima de descargas q puede hacer
public:
	dElectro(int corriente1, int energia1, int max, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida);
	void atacar(cVikingo* victima);
	
	~dElectro() {};
};

