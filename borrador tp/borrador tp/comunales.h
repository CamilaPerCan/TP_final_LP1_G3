#pragma once
#include <iostream>
#include<ostream>
#include <string>
using namespace std;
#include "dVeneno.h"
//lo sacamos de google para poder colorear :)
#define RESET       "\033[0m"
#define RED_TEXT    "\033[31m"
#define GREEN_TEXT  "\033[32m"
#define BLUE_TEXT   "\033[34m"
#define BLACK_BG    "\033[40m"
#define RED_BG      "\033[41m"
#define GREEN_BG    "\033[42m"
#define BLUE_BG     "\033[44m"

ostream& operator<<(ostream& datito, cVikingo& vikinguito);
ostream& operator<<(ostream& datito, cJinete& jinetito);

int combate(cVikingo *vikingos, cJinete *jinetes);
void domar_Dragon(list<cDragon*>* dragones, int cantD);