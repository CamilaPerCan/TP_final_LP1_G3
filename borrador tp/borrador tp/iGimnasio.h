#pragma once
#include "cEdificio.h"
class iGimnasio : public cEdificio
{
	int clases_disp; //para que el usuario no pueda subir todo de nivel de una, se tiene que ir comprando "sesiones de entrenamiento"
public:
	void aumentar(cJinete* jinete);
};

