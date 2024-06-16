#pragma once
#include <iostream>
#include <string>
#include "cJinete.h"
#include "list"

using namespace std;

class cVikingo : public cCiudadano
{

	int danio;
	static int cant;
	list <cDragon*> muertitos; // lista dragones muertos
public:
	cVikingo(int danioataque, int vidaa, string laburo, string nombrecin) : cCiudadano(vidaa, laburo, nombrecin) {
		this->danio = danioataque;
		cant++;
	};
	int get_danio() { return danio; };
	void set_danio(int ataque) { danio = ataque; };

	void operator+(cDragon* cadaver) {
		muertitos.push_back(cadaver);
	}
	void atacarDragon(cJinete* victima); // ataca un dragon, le baja la vida con el daño, si la vida de este se vuelve cero va a muertito
	void atacarJinete(cJinete* victima); 

	~cVikingo() {};

	friend ostream& operator<<(ostream& datito, cVikingo& vikingito);
	friend void cUsuario::combate();
	
};

