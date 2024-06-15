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
#define ORANGE_TEXT "\033[33m"

#include "dElectro.h"

class dFuego :public cDragon
{
	int fueguitos; //cantidad de fueguitos q tiene el dragon para tirar
	int maxFueguitos; //cantidad maxima de fueguitos q puede tener el dragon
	int intensidad;

public:
	dFuego(int fuegos, int max, int intensa, string nomb, string carac, etamanio tam, bool nuevoEstado, int nuevaVida);

	void atacar(cVikingo* victima);
	void comer(int comidita);
	void entrenar(int numero);

	~dFuego() {};

};

