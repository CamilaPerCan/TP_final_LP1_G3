
#include <iostream>
#include <string>
#include <list>
#include <chrono>
#include <thread>
//#include "dVeneno.h"
#include "iHospital.h"
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
// "\033[35m" texto violeta
// "\033[36m" texto celeste

using namespace std;
class cJinete;

int main()
{ 
    list<cDragon*> dragones;
    list<cJinete*> jinetitos;
    list<cVikingo*> vikingitos;
    list<cEdificio*> aldea;

    cDragon* dragoncito1 = new dElectro(24, 4, 5, "Chimuelo", " carac", MINI, 0, 100);
    cDragon* dragoncito2 = new dVeneno(24, 4, 5, "El sapo Pepe", " carac", MINI, 0, 100);
    cDragon* dragoncito3 = new dFuego(24, 4, 5, "Albondiga", " carac", MINI, 0, 100);
    cDragon* dragoncito4 = new dFuego(24, 4, 5, "La vaca Lola", " carac", MINI, 0, 100);
    cDragon* dragoncito5 = new dElectro(24, 4, 5, "Tormenta", " carac", MINI, 0, 100);

    dragones.push_back(dragoncito1);
    dragones.push_back(dragoncito2);
    dragones.push_back(dragoncito3);
    dragones.push_back(dragoncito4);
    dragones.push_back(dragoncito5);

    cVikingo vikingo1(15, 100, "chef", "Remy");
    cVikingo vikingo2(14, 100, "souchef", "Colette");
    cVikingo vikingo3(18, 100, "cajero", "Emile");
    cVikingo vikingo4(20, 100, "mesero", "Skinner");
    cVikingo vikingo5(30, 100, "jefe", "Linguini");
    cVikingo vikingo6(11, 100, "inspector de sanidad", "Inspector de sanidad");

    cJinete jinete1("lindo", 100, "corredor", "McQueen");
    cJinete jinete2("alto", 100, "grua", "Mate");
    cJinete jinete3("bajo", 100, "excorredor", "Doc Hudson");
    cJinete jinete4("pelirrojo", 100, "camionero", "Mack");
    cJinete jinete5("guapeton", 100, "mecanico", "Guido");

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

    cEdificio* comedor=new iComedor("comedor", 3, 15);
    cEdificio* gimnasio=new iGimnasio(3, "gymnasio", 5, 15);
    cEdificio* hospital=new iHospital("hospital", 5, 15);

    aldea.push_back(comedor);
    aldea.push_back(gimnasio);
    aldea.push_back(hospital);

    cUsuario YO(dragones, jinetitos, vikingitos, aldea);
    
    int estado = 0;
    
    while (estado == 0) {
        estado=YO.simulacion();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    

    delete dragoncito1;
    delete dragoncito2;
    delete dragoncito3;
    delete dragoncito4;
    delete dragoncito5;

    delete comedor;
    delete gimnasio;
    delete hospital;

    return 0;
}

