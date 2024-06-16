
#include <iostream>
#include <string>
#include <list>
#include <chrono>
#include "dVeneno.h"
#include <exception>
#define RESET       "\033[0m"
#define RED_TEXT    "\033[31m"
#define GREEN_TEXT  "\033[32m"
#define BLUE_TEXT   "\033[34m"
#define BLACK_BG    "\033[40m"
#define RED_BG      "\033[41m"
#define GREEN_BG    "\033[42m"
#define BLUE_BG     "\033[44m"
#define ORANGE_TEXT "\033[33m"

using namespace std;
class cJinete;

int main()
{ 
    list<cDragon*> dragones;
    list<cJinete*> jinetitos;
    list<cVikingo*> vikingitos;

    cDragon* dragoncito1 = new dElectro(24, 4, 5, "a", " carac", MINI, 0, 100);
    cDragon* dragoncito2 = new dVeneno(24, "a", " carac", MINI, 0, 100);
    cDragon* dragoncito3 = new dFuego(24, 4, 5, "a", " carac", MINI, 0, 100);
    cDragon* dragoncito4 = new dFuego(24, 4, 5, "a", " carac", MINI, 0, 100);
    cDragon* dragoncito5 = new dElectro(24, 4, 5, "a", " carac", MINI, 0, 100);

    dragones.push_back(dragoncito1);
    dragones.push_back(dragoncito2);
    dragones.push_back(dragoncito3);
    dragones.push_back(dragoncito4);
    dragones.push_back(dragoncito5);

    cVikingo vikingo1(12, 100, "chef", "remy");
    cVikingo vikingo2(14, 100, "souchef", "colette");
    cVikingo vikingo3(8, 100, "cajero", "emile");
    cVikingo vikingo4(10, 100, "mesero", "skinner");
    cVikingo vikingo5(30, 100, "jefe", "linguini");
    cVikingo vikingo6(11, 100, "inspector de sanidad", "inspector de sanidad");

    cJinete jinete1("lindo", 100, "corredor", "mcqueen");
    cJinete jinete2("alto", 100, "grua", "mate");
    cJinete jinete3("bajo", 100, "excorredor", "doc hudson");
    cJinete jinete4("pelirrojo", 100, "camionero", "mack");
    cJinete jinete5("guapeton", 100, "mecanico", "guido");

    jinetitos.push_back(&jinete1);
    jinetitos.push_back(&jinete2);
    jinetitos.push_back(&jinete3);
    jinetitos.push_back(&jinete4);
    jinetitos.push_back(&jinete5);

    vikingitos.push_back(&vikingo1);
    vikingitos.push_back(&vikingo2);
    vikingitos.push_back(&vikingo3);
    vikingitos.push_back(&vikingo4);
    vikingitos.push_back(&vikingo5);
    vikingitos.push_back(&vikingo6);
    
    cUsuario YO(dragones, jinetitos, vikingitos);

    auto start_time = chrono::steady_clock::now();
    YO.combate();

    /*try {
        domar_Dragon(&dragones, jinete1);
        cout << jinete1;
    }
    catch(const exception *e){
        cout << e->what();
        delete e;
    }*/

    auto end_time = chrono::steady_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Tiempo transcurrido: " << duration.count() << " milisegundos" << endl;

    delete dragoncito1;
    delete dragoncito2;
    delete dragoncito3;
    delete dragoncito4;
    delete dragoncito5;

    return 0;
}

