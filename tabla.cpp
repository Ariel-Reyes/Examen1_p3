#include "tabla.hpp"
	tabla::tabla(){
		
	}; 
	tabla::tabla(vector<puntos_equipo*> puntos){
		this->puntos = puntos; 
	};
	tabla::~tabla(){
		
	}; 
	
	void tabla::set_puntos(puntos_equipo* x){
		puntos.push_back(x);
	};
    vector<puntos_equipo*> tabla::retorno_puntos(){
    	return this->puntos; 
	}; 	
	