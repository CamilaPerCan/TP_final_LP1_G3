#pragma once
#include <iostream>
#include <string>
#include <list>
#include "dVeneno.h"
using namespace std;

class cUsuario
{
	int puntos;
	int cont_combate;
	list<cJinete*> jinetes;
	list<cDragon*> dragones;
	list<cVikingo*> vikingos;
};

