#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "cDragon.h"
class dVeneno : public cDragon
{
	
public:
	dVeneno(string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida, int nivelcito);
};

