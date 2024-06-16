#pragma once
#include "cEdificio.h"
class iComedor : public cEdificio
{
public:
	iComedor(string nombrecin, int capa, int costo);
	
	void subir_nivel();
	void aumentar(cJinete* jinete);

	~iComedor() {};
};

