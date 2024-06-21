#pragma once
#include <iostream>
#include <string>
#include <list>
#include "comunales.h"
using namespace std;
class cJinete;
class cVikingo;
class cDragon;
class cEdificio;

class cUsuario
{
	int puntos;
	list<cJinete*> jinetes;
	list<cDragon*> dragones;
	list<cVikingo*> vikingos;
	list<cDragon*> dragones_salvajes;
	list<cDragon*> dragones_domados;
	list<cEdificio*> edificios;
	

public:
	cUsuario(list<cDragon*> &dragoncitos, list<cJinete*> &jinetitos, list<cVikingo*> &vikingitos, list<cEdificio*> &infraestructuras);

	void combate();
	int simulacion();
	void atraco();

	int get_puntos() { return puntos; };
	void set_puntos(int puntitos) { puntos = puntos + puntitos; };
	list<cJinete*> get_jinetes() { return this->jinetes; };
	list<cDragon*> get_dragones() { return dragones; };
	list<cVikingo*> get_vikingos() { return vikingos; };
	list<cDragon*> get_salvajes() { return dragones_salvajes; };
	void operator-(cDragon* domado) {
		dragones_salvajes.pop_front();
		dragones_domados.push_back(domado);
	}

	void domar_Dragon(cJinete *jinetin);
	bool verificar_domados();
	bool verificar_vida_domados();

	int endgame();

	friend ostream& operator<<(ostream& datito, cVikingo& vikinguito);
	friend ostream& operator<<(ostream& datito, cJinete& jinetito);

	~cUsuario() {};
};

