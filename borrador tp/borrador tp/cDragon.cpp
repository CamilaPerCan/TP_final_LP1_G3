#include "cDragon.h"

bool cDragon::baja()
{
    if (vida == 0)
        return false; // false = 0 : dragon muerto
    else
        return true; // true = 1 : dragon vivo
}
