#ifndef tabla_hpp
#define tabla_hpp
#include <vector>
#include "puntos_equipo.hpp"
class tabla{
	
	private: 
	vector<puntos_equipo*> puntos; 
	public: 
	tabla(); 
	tabla(vector<puntos_equipo*>);
	~tabla(); 
	
	void set_puntos(puntos_equipo*);
    vector<puntos_equipo*> retorno_puntos(); 	
	
	
};

#endif /*tabla_hpp*/