#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;
enum etamanio { MINI = 1, CHICO = 2, MEDIANO = 3, GRANDE = 4, ENORME = 5 };

#include "cDragon.h"
class dElectro : public cDragon
{

public:
	dElectro(string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida, int nivelcito);

};

