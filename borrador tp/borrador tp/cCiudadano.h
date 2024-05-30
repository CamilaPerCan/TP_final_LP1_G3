#pragma once
#include <iostream>
#include <string>
using namespace std;

class cCiudadano
{
protected:
	int vida;
	string puestoGuerra;
public:
	cCiudadano() {};
	cCiudadano(int vidaa, string laburin);
	int get_vida() { return vida; };
	void set_vida(int nuevaVida) { vida = nuevaVida; };
	string trabajar() { return puestoGuerra; }; // get de puesto de guerra
	void set_puestoGuerra(string puestito) { puestoGuerra = puestito; };
	~cCiudadano() {};
};

