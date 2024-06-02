#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "cCiudadano.h"

enum etamanio {MINI=1, CHICO=2, MEDIANO=3, GRANDE=4, ENORME=5}; 

class cDragon
{
	string nombre;
	string caracteristica; // caracteristicas fisicas del dragon
	etamanio tamanio;
	bool estado; // si el dragon esta domado o no
	int vida; // 0-100
	int nivel; 
public:
	cDragon(string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida,
		int nivelcito) ;
	string get_nombre() { return nombre; };
	void alta_nombre(string nuevoNombre) { nombre = nuevoNombre; };
	string get_caracteristica() { return caracteristica; };
	void set_caracteristica(string carac) { caracteristica = carac; };
	etamanio get_tamanio() { return tamanio; };
	void set_tamanio(etamanio formita) { tamanio = formita; };
	bool domado() {	return estado; }; //get estado
	void set_estado(bool);
	int get_vida() { return vida; };
	void set_vida(int nuevaVida) { vida = nuevaVida; };
	int get_nivel() { return nivel; };
	void set_nivel(int nivelcito) { nivel = nivelcito; };
	bool baja(); 
	virtual ~cDragon() {};
};
