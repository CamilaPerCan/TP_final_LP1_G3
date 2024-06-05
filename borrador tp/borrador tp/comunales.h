#pragma once
#include <iostream>
#include<ostream>
#include <string>
using namespace std;
#include "dVeneno.h"

ostream& operator<<(ostream& datito, cVikingo& vikingito);
ostream& operator<<(ostream& datito, cJinete& jinetito);

int combate(cVikingo *vikingos, cDragon *dragones, cJinete *jinetes);
