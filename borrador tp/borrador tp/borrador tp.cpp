
#include <iostream>
#include <string>
#include "dVeneno.h"

using namespace std;
class cJinete;
int main()
{
    cVikingo vikingo1(12, 100, "chef", "remy");
    cout << vikingo1;
    
    cDragon* dragoncito= new dElectro(24, "a", " carac", MINI, 0, 1, 1);
    cJinete jinete1("lindo", dragoncito, 100, "corredor", "mcqueen");
    //cJinete j("a", 2, 2, "a", "a");
    cout << jinete1;
    delete dragoncito;
    return 0;
}

