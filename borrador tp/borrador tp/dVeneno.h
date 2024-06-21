#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;
#define RESET       "\033[0m"
#define RED_TEXT    "\033[31m"
#define GREEN_TEXT  "\033[32m"
#define BLUE_TEXT   "\033[34m"
#define BLACK_TEXT  "\033[30m"
#define BLACK_BG    "\033[40m"
#define RED_BG      "\033[41m"
#define GREEN_BG    "\033[42m"
#define BLUE_BG     "\033[44m"

#include "dFuego.h"

class dVeneno : public cDragon
{
	int toxicidad;
	int litros;
	int max_litros;

public:
	dVeneno(int toxica, int litritos, int max, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida);
	
	void comer(int comidita);
	int atacar(cVikingo* victima);
	void entrenar(int numero);

	~dVeneno() {};

};

