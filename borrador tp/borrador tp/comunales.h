#pragma once
#include <iostream>
#include<ostream>
#include <string>
using namespace std;
#include "dVeneno.h"

ostream& operator<<(ostream& datito, cVikingo& vikinguito);
ostream& operator<<(ostream& datito, cJinete& jinetito);

int combate(cVikingo *vikingos, cJinete *jinetes);
