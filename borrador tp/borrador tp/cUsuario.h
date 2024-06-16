#pragma once
#include <iostream>
#include <string>
#include <list>
#include "comunales.h"
using namespace std;
class cJinete;
class cVikingo;
class cDragon;

class cUsuario
{
	int puntos;
	int cont_combate;
	list<cJinete*> jinetes;
	list<cDragon*> dragones;
	list<cVikingo*> vikingos;
	list<cDragon*> dragones_salvajes;
	list<cDragon*> dragones_domados;

public:
	cUsuario(list<cDragon*> &dragoncitos, list<cJinete*> &jinetitos, list<cVikingo*> &vikingitos);

	void combate();
	void no_combate() {};
	void atraco();

	int get_puntos() { return puntos; };
	void set_puntos(int puntitos) { puntos = puntos + puntitos; };
	int get_cant() { return cont_combate; };
	void set_cant(int n_cant) { cont_combate = n_cant; };
	list<cJinete*> get_jinetes() { return this->jinetes; };
	list<cDragon*> get_dragones() { return dragones; };
	list<cVikingo*> get_vikingos() { return vikingos; };
	list<cDragon*> get_salvajes() { return dragones_salvajes; };
	void operator-(cDragon* domado) {
		dragones_salvajes.pop_front();
		dragones_domados.push_back(domado);
	}

	void domar_Dragon(cJinete *jinetin);

	friend ostream& operator<<(ostream& datito, cVikingo& vikinguito);
	friend ostream& operator<<(ostream& datito, cJinete& jinetito);

	~cUsuario() {};
};

