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
	string puestoGuerra;
	int vida; // 0-100
	int nivel;
	cDragon* dragoncito; 
public: 
	cJinete(string apodin, string cumple, string caracteristicas, string puesto, int nuevaVida, int nuevoNivel, cDragon nuevoDragon) {
		apodo = apodin;
		fechaNac = apodin;
		caracFisicas = caracteristicas;
		puestoGuerra = puesto;
		vida = nuevaVida;
		nivel = nuevoNivel;
		*dragoncito = nuevoDragon;
	};
	//cJinete() { apodo = ""; fechaNac = ""; caracFisicas = ""; puestoGuerra = ""; vida = 0; nivel = 0; }
	bool baja();
	string get_apodo() { return apodo; };
	void set_apodo(string apodin) { apodo = apodin; };
	string get_fechaNac() { return fechaNac; };
	void set_fechaNac(string cumple) { fechaNac = cumple; };
	string get_caracFisicas() { return caracFisicas; };
	void set_caracFisicas(string caracteristicas) { caracFisicas = caracteristicas; };
	string get_puestoGuerra() { return puestoGuerra; };
	void set_puestoGuerra(string puesto) { puestoGuerra = puesto; };
	int get_vida() { return vida; };
	void set_vida(int nuevaVida) { vida = nuevaVida; };
	int get_nivel() { return nivel; };
	int entrenar(int nuevoNivel) { nivel = nuevoNivel; }; // set_nivel
	~cJinete() {};
};