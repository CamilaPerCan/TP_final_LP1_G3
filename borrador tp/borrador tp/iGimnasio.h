#pragma once
//#include "cEdificio.h"
#include "iComedor.h"
class iGimnasio : public cEdificio
{
	int clases_disp; //para que el usuario no pueda subir todo de nivel de una, se tiene que ir comprando "sesiones de entrenamiento"
public:
	iGimnasio(int dispo, string nombrecin, int capa, int costo);

	void aumentar(cJinete* jinete);

	~iGimnasio() {};
};

