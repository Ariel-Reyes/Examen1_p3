#ifndef liga_hpp 
#define liga_hpp
#include <string>
#include <iostream>
#include <vector>
#include "equipo.hpp"
#include "partido.hpp"
#include "tabla.hpp"
using namespace std; 
class liga{
	private: 
	string nombre; 
	vector<equipo*> lista_equipo; 
	vector<partido*> jornada; 
	vector<tabla*> tabla_posi; 
	
	public: 
	liga(); 
	liga(string,vector<equipo*>,vector<partido*>,vector<tabla*>);
	~liga(); 
	
	void set_equipo(equipo*);
	vector<equipo*>  retorne_equipos(); 
	
	void set_partido(partido*);
	vector<partido*> retorne_partidos();
	
	void set_tabla(tabla*); 
	vector<tabla*> retorne_tabla(); 
	void eliminar(int); 	
};

#endif /*liga_hpp*/