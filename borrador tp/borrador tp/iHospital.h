#pragma once
//#include "cEdificio.h"
#include "iGimnasio.h"
class iHospital : public cEdificio
{
public:
	iHospital(string nombrecin, int capa, int costo);

	void aumentar(cJinete* jinete);
	void subir_nivel();

	~iHospital() {};
};

