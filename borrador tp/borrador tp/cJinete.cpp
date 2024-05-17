#include "cJinete.h"

bool cJinete::baja()
{
    if (vida == 0)
        return false; // false = 0 : jinete muerto
    else
        return true; // true = 1 : jinete vivo
}
