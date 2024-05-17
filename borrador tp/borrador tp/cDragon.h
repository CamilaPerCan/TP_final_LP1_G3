#pragma once
#include <iostream>
#include <string>
using namespace std;
//AHHHHHHHHAHAHHAHA
enum nformaAtaque {FUEGO=1, AGUA=2, AIRE=3, TIERRA=4, VENENO=5}; 

class cDragon
{
	string nombre;
	string caracteristica; // caracteristicas fisicas del dragon
	string tipo; // los distintos tipos de dragones pueden entrenar ciertas habilidades hasta cierto nivel, no todos pueden tener fuerza max, velocidad max, etc.
	string tamanio;
	bool estado; // si el dragon esta domado o no
	int vida; // 0-100
	int ataque; // 0-50
	nformaAtaque formaAtaque; 
public:
	cDragon(string nomb, string carac, string ejemplar, string tam, bool nuevoEstado, int nuevaVida, int ofensiva, nformaAtaque
	 formula1) {
		nombre = nomb;
		caracteristica = carac;
		tipo = ejemplar;
		tamanio = tam;
		estado = nuevoEstado;
		vida = nuevaVida;
		ataque = ofensiva;
		formaAtaque = formula1;
	};
	string get_nombre() { return nombre; };
	void alta_nombre(string nuevoNombre) { nombre = nuevoNombre; };
	string get_caracteristica() { return caracteristica; };
	void set_caracteristica(string carac) { caracteristica = carac; };
	string get_tipo() { return tipo; };
	void set_tipo(string ejemplar) { tipo = ejemplar; };
	string get_tamanio() { return tamanio; };
	void set_tamanio(string tam) { tamanio = tam; };
	nformaAtaque get_formaAtaque() { return formaAtaque; };
	void set_formaAtaque(nformaAtaque formita) { formaAtaque = formita; };
	bool domado() {	return estado; };
	void set_estado(bool);
	bool baja();
	int get_vida() { return vida; };
	void set_vida(int nuevaVida) { vida = nuevaVida; };
	int get_ataque() { return ataque; };
	void set_ataque(int danio) { ataque = danio; };
	~cDragon() {};
};
