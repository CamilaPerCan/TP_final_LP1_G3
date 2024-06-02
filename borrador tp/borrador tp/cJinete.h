#pragma once
#include <iostream>
#include <string>
#include "cDragon.h"
using namespace std;

class cJinete : public cCiudadano
{
	string caracFisicas;
	int nivel;
	static int cant;
	cDragon* dragoncito; 
public: 
	cJinete(string caracteristicas, int nuevoNivel, cDragon *nuevoDragon, int vidaa, string laburo, string nombrecin) : cCiudadano(vidaa, laburo, nombrecin) {
		caracFisicas = caracteristicas;
		nivel = nuevoNivel;
		dragoncito = nuevoDragon;
		cant++;
	};
	string get_caracFisicas() { return caracFisicas; };
	void set_caracFisicas(string caracteristicas) { caracFisicas = caracteristicas; };
	int get_nivel() { return nivel; };
	cDragon* get_Dragon() { return dragoncito; };
	int entrenar(int nuevoNivel) { nivel = nuevoNivel; }; // set_nivel
	friend ostream& operator<<(ostream& datito, cJinete& jinetito);
	~cJinete() {};
};