#include "cVikingo.h"

cVikingo::cVikingo(string nombrecin, string apellidin, int danioataque)
{
    nombre = nombrecin;
    apellido = apellidin;
    danio = danioataque;
}

void cVikingo::atacarDragones(cDragon* victima)
{
}

bool cVikingo::baja()
{
    if (vida == 0)
        return false; // false = 0 : vikingo muerto
    else
        return true; // true = 1 : vikingo vivo
}