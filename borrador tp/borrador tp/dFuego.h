#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "cDragon.h"
class dFuego :public cDragon
{

public:
	dFuego(string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida, int nivelcito) ;
	~dFuego() {};

};

