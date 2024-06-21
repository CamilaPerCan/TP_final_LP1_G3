//#include "dVeneno.h"
#include "iHospital.h"

cUsuario::cUsuario (list<cDragon*> &dragoncitos, list<cJinete*>& jinetitos, list<cVikingo*>& vikingitos, list<cEdificio*> &infraestructuras) {
	
	this->jinetes = jinetitos;
	this->vikingos = vikingitos;
	this->dragones_salvajes = dragoncitos;
	this->dragones = dragoncitos;
	this->edificios = infraestructuras;

	this->puntos = 100;

}

void cUsuario::domar_Dragon( cJinete * jinetito)
{
	list<cDragon*>::iterator it = this->dragones.begin();

	srand(time(NULL));

	int cant = 0;
	while (cant == 0 && it != dragones.end()) {
		if ((*it)->estado == false){
			jinetito->dragoncito = (*it);
			(*it)->estado = 1;
			(*it)->nivel = rand() % 27 + 1;
			cant++;
			(*this) - (*it);
	}
		it++;
	}
	if (cant == 0) {
		throw exception("No hay dragones no domados :( ");
	}
}


bool cUsuario::verificar_domados() {
	if (this->dragones.size() == this->dragones_salvajes.size())
		return false;
	return true;
}

bool cUsuario::verificar_vida_domados() {
	list<cDragon*>::iterator it = this->dragones_domados.begin();
	for (int i = 0; i < this->dragones_domados.size(); i++) {
		if ((*it)->get_vida() > 0)
			return true;
		it++;
	}
	return false;

}

void cUsuario::simulacion()
{
	srand(time(NULL));
	int accion = rand() % 5 + 1;

	switch (accion)
	{
	case 1: //subir de nivel edificio
	{
		int random = rand() % this->edificios.size();
		list<cEdificio*>::iterator it = this->edificios.begin();
		advance(it, random);
		if (this->puntos <= (*it)->precio)
			(*it)->subir_nivel();
		else
			cout << "no tienes suficientes puntos para subir este edificio de nivel." << endl;
		break;
	}
	case 2: //entrenar dragon (en gimnasio, sube de nivel)
	{
		if (this->verificar_domados() && this->verificar_vida_domados()) {
			int random1 = rand() % this->jinetes.size();
			list<cJinete*>::iterator it2 = this->jinetes.begin();
			advance(it2, random1);
			while ((*it2)->get_Dragon()==NULL) {
				int random1 = rand() % this->jinetes.size();
				random1 = 0;
				it2 = this->jinetes.begin();
				advance(it2, random1);
			}
			iGimnasio* gimnasio = NULL;
			list<cEdificio*>::iterator it1 = this->edificios.begin();
			while (gimnasio == NULL) {
				gimnasio = dynamic_cast<iGimnasio*>(*it1);
				it1++;
			}
				gimnasio->aumentar(*it2);
		}
		else {
			int random1 = rand() % this->jinetes.size();
			list<cJinete*>::iterator it2 = this->jinetes.begin();
			advance(it2, random1);
			try {
				this->domar_Dragon(*it2);
			}
			catch (const exception& e) {
				cout << e.what();
			}
		}
		break;
	}
	
	case 3: //comer dragon (en comedor, sube energia, y vida)
	{
		if (this->verificar_domados() && this->verificar_vida_domados()) {
			int random1 = rand() % this->jinetes.size();
			list<cJinete*>::iterator it3 = this->jinetes.begin();
			advance(it3, random1);
			while ((*it3)->get_Dragon() == NULL) {
				int random1 = rand() % this->jinetes.size();
				random1 = 0;
				it3 = this->jinetes.begin();
				advance(it3, random1);
			}
			iComedor* comedor = NULL;
			list<cEdificio*>::iterator it4 = this->edificios.begin();
			while (comedor == NULL) {
				comedor = dynamic_cast<iComedor*>(*it4);
				it4++;
			}
			comedor->aumentar(*it3);
		}
		else {
			int random1 = rand() % this->jinetes.size();
			list<cJinete*>::iterator it3 = this->jinetes.begin();
			advance(it3, random1);
			try {
				this->domar_Dragon(*it3);
			}
			catch (const exception& e) {
				cout << e.what();
			}
		}
		break;
	}
	
	case 4:	//subir vida jinete (en hospital, se cura jinete)
	{
		int random1 = rand() % this->jinetes.size();
		list<cJinete*>::iterator it5 = this->jinetes.begin();
		advance(it5, random1);
		if ((*it5)->get_vida()!=100) {
			iHospital* hospital = NULL;
			list<cEdificio*>::iterator it6 = this->edificios.begin();
			while (hospital == NULL) {
				hospital = dynamic_cast<iHospital*>(*it6);
				it6++;
			}
			hospital->aumentar(*it5);
		}
		break;
	}
	
	case 5: //comprar clases
	{

	}
	
	case 6: //se hace el combate
	{
		int cont = 0;
		int random1 = rand() % 15+1;

		while (cont < random1) {
			auto start_time = chrono::steady_clock::now();
			this->combate();
			auto end_time = chrono::steady_clock::now();
			auto duration = chrono::duration_cast<chrono::milliseconds>(end_time - start_time);
			cout << "Tiempo transcurrido: " << duration.count() << " milisegundos" << endl;
			cont = cont + duration.count();
		}
	}

	default:
		break;
		
	}
}



void cUsuario::atraco()
{
	srand(time(NULL));

	int robados = rand() % 100 + 1;

	if (robados <= puntos) {
		this->puntos = this->puntos - robados;
		cout << "Oh no, un grupo de vikingos ataco la aldea cuando estaba desprotegida y se robaron " << robados << " puntos." << endl
			<< "Le quedan " << this->puntos << " puntos." << endl;
	}
	else {
		int atraco = rand() % this->edificios.size() ;
		list<cEdificio*>::iterator it = this->edificios.begin();
		for (int i = 0; i < atraco; i++) {
			it++;
		}
		(*it)->bajar_nivel();
	}
}

void cUsuario::combate() {

	if (!this->verificar_domados()) //si no dome a ningún dragón
	{
		this->atraco();
	}
	else {

		list<cDragon*>::iterator it3 = this->dragones_domados.begin();
		int vidas = 0;
		for (int j = 0; j < this->dragones_domados.size(); j++) {
			vidas = vidas + (*it3)->vida;
		}
		//como no tengo dragones domados que tengan vida, no me protegen, también me atracan
		if (this->dragones_domados.size() < this->dragones.size() && vidas == 0) {
			this->atraco();
		}
		else {


			int random1 = rand() % 100 + 1;
			if (random1 < 50) //atacan los vikingos
			{
				list<cVikingo*>::iterator it = this->vikingos.begin();
				int i = 0;
				while (i == 0) //busco vikingo que tenga vida>0, (no es posible no tener porque sino ya estaría terminado el juego :)
				{
					if ((*it)->vida > 0) {
						int random1 = rand() % this->jinetes.size();
						list<cJinete*>::iterator it2 = this->jinetes.begin();
						advance(it2, random1);
						try {
							(*it)->atacarDragon(*it2);
						}
						catch (const exception& e) {
							cout << e.what();
						}
						//ataco al dragon de este jinete random, si el dragon está muerto, ataco al jinete, si no tiene dragon, salta exception
						i++;
					}

					it++;//si el vikingo está muerto, no va a atacar
				}

			}
			else {
				//ataca dragon a vikingo, dragon tiene que tener vida>0 (sí o sí alguno tiene porque vidas>0 para llegar a acá)
				list<cDragon*>::iterator it = this->dragones_domados.begin();
				int random1 = rand() % this->dragones_domados.size();
				advance(it, random1);
				//elijo un dragon random
				int i = 0;
				while (i == 0) //busco dragón que tenga vida>0
				{
					if ((*it)->vida > 0) {
						int cont = 0;
						list<cVikingo*>::iterator it2 = this->vikingos.begin();
						while (cont == 0) {
							if ((*it2)->vida > 0) {
								(*it)->atacar((*it2));
								cont++;
								it2++;
							}//ataco a un vikingo que tenga vida>0
						}
						i++;
					}
					else {
						//si el dragón está muerto, no va a atacar, pido otro random, e intento de nuevo
						it = this->dragones_domados.begin();
						int random1 = rand() % this->dragones_domados.size();
						advance(it, random1);
					}
				}

			}
			this->endgame();
		}
	}
}

int cUsuario::endgame() {

	int vidaV = 0;
	list<cVikingo*>::iterator it = this->vikingos.begin();
	for (it = this->vikingos.begin(); it != this->vikingos.end(); it++) {
		vidaV = vidaV + (*it)->get_vida();
	}
	if (vidaV == 0)
		return 2;//ganaste el juego

	int vidaJ = 0;
	list<cJinete*>::iterator it1 = this->jinetes.begin();
	for (it1 = this->jinetes.begin(); it1 != this->jinetes.end(); it1++) {
		vidaJ = vidaJ + (*it1)->get_vida();
	}

	int vidaD = 0;
	list<cDragon*>::iterator it2 = this->dragones.begin();
	for (int k=0; k<this->dragones.size(); k++) {
		vidaD = vidaD + (*it2)->get_vida();
		it2++;
	}
	if (vidaJ == this->jinetes.size() && vidaD == 0)
		return 1; //perdiste el juego

	return 0; //seguir jugando
}