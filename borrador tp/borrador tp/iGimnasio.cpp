#include "iGimnasio.h"

void iGimnasio::aumentar(cJinete* jinete) {
	if (this->clases_disp > 0) {
		jinete->get_Dragon()->entrenar(this->capacidad);
		this->clases_disp--;
		cout << jinete->get_Dragon()->get_nombre() << "ha subido de nivel a: " << jinete->get_Dragon()->get_nivel() << "." << endl;
	}
	else {
		cout << "Ya has usado todas tus sesiones de entrenamiento, para entrenar a tu dragon tienes que comprar nuevas."<<endl;
	}
}