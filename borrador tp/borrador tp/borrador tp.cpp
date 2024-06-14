
#include <iostream>
#include <string>
#include <list>
#include "dVeneno.h"
#include <exception>


using namespace std;
class cJinete;
int main()
{
    cVikingo vikingo1(12, 100, "chef", "remy");
    cVikingo vikingo2(14, 100, "souchef", "colette");
    cVikingo vikingo3(8, 100, "cajero", "emile");
    cVikingo vikingo4(10, 100, "mesero", "skinner");
    cVikingo vikingo5(30, 100, "jefe", "linguini");
    cVikingo vikingo6(11, 100, "inspector de sanidad", "inspector de sanidad");
    
    cDragon* dragoncito= new dElectro(24, 4, 5, "a", " carac", MINI, 0, 100);
    cDragon* dragoncito2 = new dVeneno(24, "a", " carac", MINI, 0, 100);
    cDragon* dragoncito3 = new dFuego(24, 4, 5, "a", " carac", MINI, 0, 100);
    cDragon* dragoncito4 = new dFuego(24, 4, 5, "a", " carac", MINI, 0, 100);
    cDragon* dragoncito5 = new dElectro(24, 4, 5, "a", " carac", MINI, 0, 100);
    
    cJinete jinete1("lindo", 100, "corredor", "mcqueen");
    cJinete jinete2("alto", 100, "grua", "mate");
    cJinete jinete3("bajo", 100, "excorredor", "doc hudson");
    cJinete jinete4("pelirrojo", 100, "camionero", "mack");
    cJinete jinete5("guapeton", 100, "mecanico", "guido");
    
    list<cJinete*> jinetes;
    list<cDragon*> dragones;
    list<cVikingo*> vikingos;

    vikingos.push_back(&vikingo1);
    vikingos.push_back(&vikingo2);
    vikingos.push_back(&vikingo3);
    vikingos.push_back(&vikingo4);
    vikingos.push_back(&vikingo5);
    vikingos.push_back(&vikingo6);
    
    dragones.push_back(dragoncito);
    dragones.push_back(dragoncito2);
    dragones.push_back(dragoncito3);
    dragones.push_back(dragoncito4);
    dragones.push_back(dragoncito5);

    jinetes.push_back(&jinete1);
    jinetes.push_back(&jinete2);
    jinetes.push_back(&jinete3);
    jinetes.push_back(&jinete4);
    jinetes.push_back(&jinete5);
    
    try {
        domar_Dragon(&dragones, jinete1);
        cout << jinete1;
    }
    catch(const exception *e){
        cout << e->what();
        delete e;
    }
    


    delete dragoncito;
    delete dragoncito2;
    delete dragoncito3;
    delete dragoncito4;
    delete dragoncito5;

    return 0;
}

