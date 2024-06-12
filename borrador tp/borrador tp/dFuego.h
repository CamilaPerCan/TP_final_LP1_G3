#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "dElectro.h"

class dFuego :public cDragon
{
	int fueguitos; //cantidad de fueguitos q tiene el dragon para tirar
	int maxFueguitos; //cantidad maxima de fueguitos q puede tener el dragon
	int intensidad;

public:
	dFuego(int fuegos, int max, int intensa, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida, int nivelcito);

	void atacar(cVikingo* victima);

	~dFuego() {};

};

