#pragma once
#include <iostream>
#include <string>
#include "cJinete.h"
#include "cCiudadano.h"
using namespace std;

class cVikingo : public cCiudadano
{
	string nombre;
	string apellido;
	string puestoGuerra;
	int danio;
	int vida;
	//list <cDragon*> muertitos; // lista dragones muertos
public:
	cCiudadano::cCiudadano(int vidaa, string laburo) : cVikingo(string nombrecin, string apellidin, int danioataque);
	string trabajar() { return puestoGuerra; }; // get de puesto de guerra
	void set_puestoGuerra(string puestito) { puestoGuerra = puestito; };
	void atacarDragones(cDragon* victima); // ataca un dragon, le baja la vida con el daño, si la vida de este se vuelve cero va a muertito
	bool baja();
	string get_nombre() { return nombre; };
	void set_nombre(string nombrecito) { nombre = nombrecito; };
	string get_apellido() { return apellido; };
	void set_apellido(string apellidito) { apellido = apellidito; };
	int get_danio() { return danio; };
	void set_danio(int ataque) { danio = ataque; };
	int get_vida() { return vida; };
	void set_vida(int nuevaVida) { vida = nuevaVida; };	
};

