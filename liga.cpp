#include "liga.hpp"
	liga::liga(){
		
	}; 
liga::liga(string,vector<equipo*> lista_equipo,vector<partido*> jornada,vector<tabla*> tabla_posi){
	this->lista_equipo = lista_equipo; 
	this->jornada = jornada; 
	this->tabla_posi = tabla_posi; 
};
	liga::~liga(){
		
	}; 
	
	void liga::set_equipo(equipo* x ){
		lista_equipo.push_back(x); 
	};
	vector<equipo*>  liga::retorne_equipos(){
		return this->lista_equipo; 
	}; 
	
	void liga::set_partido(partido* x){
		jornada.push_back(x); 
	};
	vector<partido*> liga::retorne_partidos(){
		return this->jornada; 
	};
	
	void liga::set_tabla(tabla* x){
		tabla_posi.push_back(x);
	}; 
	vector<tabla*> liga::retorne_tabla(){
		return this->tabla_posi; 
	}; 
	void liga::eliminar(int po){
		lista_equipo.erase(begin(lista_equipo)+po);
	};