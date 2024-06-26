#pragma once
#include <iostream>
#include <string>
#include "cDragon.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

class cJinete : public cCiudadano
{
	string caracFisicas;
	static int cant;
	cDragon* dragoncito; 
public: 
	cJinete(string caracteristicas, int vidaa, string laburo, string nombrecin) : cCiudadano(vidaa, laburo, nombrecin) {
		caracFisicas = caracteristicas;
		dragoncito = NULL;
		cant++;
	};
	string get_caracFisicas() { return caracFisicas; };
	void set_caracFisicas(string caracteristicas) { caracFisicas = caracteristicas; };
	cDragon* get_Dragon() { return dragoncito; };
	
	~cJinete() {};

	friend ostream& operator<<(ostream& datito, cJinete& jinetito);
	friend void cUsuario::combate();
	friend void cUsuario::domar_Dragon(cJinete* jinetin);
};