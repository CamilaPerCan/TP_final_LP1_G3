#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "dVeneno.h"
class cEdificio
{
protected:
	string nombre;
	int nivel;
	int capacidad;
	int precio; //puntos necesarios para subir el nivel, va aumentando
public:
	cEdificio(string nombrecin, int capa, int costo);

	virtual void aumentar(cJinete* jinete)=0;
	
	virtual ~cEdificio() {};
};

