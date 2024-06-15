#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;
#define RESET       "\033[0m"
#define RED_TEXT    "\033[31m"
#define GREEN_TEXT  "\033[32m"
#define BLUE_TEXT   "\033[34m"
#define BLACK_BG    "\033[40m"
#define RED_BG      "\033[41m"
#define GREEN_BG    "\033[42m"
#define BLUE_BG     "\033[44m"
#include "cVikingo.h"

class dElectro : public cDragon
{
	int corriente;
	int energia; //cantidad de descargas que tiene acumuladas ¿?
	int maxEnergia; //cant maxima de descargas q puede hacer

public:
	dElectro(int corriente1, int energia1, int max, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida);
	
	void atacar(cVikingo* victima);
	void comer(int comidita);
	void entrenar(int numero);
	
	~dElectro() {};
};

