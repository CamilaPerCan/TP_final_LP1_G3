#include "dVeneno.h"
#include <list>

//hacer get de cant en jinete y vikingo
//combate es para que los vikingos se peleen con los jinetes y sus respectivos jinetes
//atraco se encarga de que los vikingos ataquen a los edificios y saca puntos al usuario

ostream& operator<<(ostream &datito, cVikingo& vikinguito) {
	datito << vikinguito.nombre << ", " <<  vikinguito.danio << ", " << vikinguito.cant << ", " << vikinguito.vida << ", " << vikinguito.trabajar() << endl;
	return datito;
}

ostream& operator<<(ostream& datito, cJinete& jinetito)
{
	datito << jinetito.nombre << ", " << jinetito.dragoncito->get_nombre() << ", " << jinetito.caracFisicas << ", " << jinetito.cant << ", " << jinetito.puestoGuerra << endl;
	return datito;
}

/*void combate(cUsusario &jugador) {
	
	int vidaV = 0;
	list<cVikingo*>::iterator it = vikingos->begin();
	for (it = vikingos->begin(); it != vikingos->end(); it++) {
		vidaV = vidaV + (*it)->get_vida();
	}

	int vidaJ = 0;
	list<cJinete*>::iterator it1 = jinetes->begin();
	for (it1 = jinetes->begin(); it1 != jinetes->end(); it1++) {
		vidaJ = vidaJ + (*it1)->get_vida();
	}//por si queremos considerar la vida de los personajes
	
	return 0;
}*/


/* std::cout << "   \\\\|||//    " << std::endl;
    std::cout << "  (  o o  )   " << std::endl;
    std::cout << "ooO--(_)--Ooo " << std::endl;


	std::cout << "                 _______________    " << std::endl;
	std::cout << "          ,===:'.,            `-._ " << std::endl;
	std::cout << "               `:.`---.__         `-._ " << std::endl;
	std::cout << "                 `:.     `--.         `-. " << std::endl;
	std::cout << "                   \\.        `.         `-. " << std::endl;
	std::cout << "           (,,(,    \\.         `.   ____,-`.," << std::endl;
	std::cout << "        (,'     `/   \\.   ,--.___`.' " << std::endl;
	std::cout << "    ,  ,'  ,--.  `,   \\.;'         ` " << std::endl;
	std::cout << "     `{D, {    \\  :    \\;" << std::endl;
	std::cout << "       V,,'    /  /    //" << std::endl;
	std::cout << "       j;;    /  ,' ,-//.    ,---.      ," << std::endl;
	std::cout << "       \\;'   /  ,' /  _  \\  /  _  \\   ,'/" << std::endl;
	std::cout << "             \\   `'  / \\  `'  / \\  `.' /" << std::endl;
	std::cout << "              `.___,'   `.__,'   `.__,'" << std::endl;
*/