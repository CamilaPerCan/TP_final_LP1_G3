#pragma once
#include <iostream>
#include <string>
#include "cDragon.h"
using namespace std;

class cJinete
{
	string apodo;
	string fechaNac;
	string caracFisicas;
	int nivel;
	cDragon* dragoncito; 
public: 
	cJinete(string apodin, string cumple, string caracteristicas,
		int nuevoNivel, cDragon nuevoDragon) ;
	string get_apodo() { return apodo; };
	void set_apodo(string apodin) { apodo = apodin; };
	string get_fechaNac() { return fechaNac; };
	void set_fechaNac(string cumple) { fechaNac = cumple; };
	string get_caracFisicas() { return caracFisicas; };
	void set_caracFisicas(string caracteristicas) { caracFisicas = caracteristicas; };
	int get_nivel() { return nivel; };
	int entrenar(int nuevoNivel) { nivel = nuevoNivel; }; // set_nivel
	~cJinete() {};
};