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
	int danio;
	//list <cDragon*> muertitos; // lista dragones muertos
public:
	cVikingo(string nombrecin, string apellidin, int danioataque);
	void atacarDragones(cDragon* victima); // ataca un dragon, le baja la vida con el da�o, si la vida de este se vuelve cero va a muertito
	string get_nombre() { return nombre; };
	void set_nombre(string nombrecito) { nombre = nombrecito; };
	string get_apellido() { return apellido; };
	void set_apellido(string apellidito) { apellido = apellidito; };
	int get_danio() { return danio; };
	void set_danio(int ataque) { danio = ataque; };
};

