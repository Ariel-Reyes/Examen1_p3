#ifndef partido_hpp 
#define partido_hpp 
#include "equipo.hpp"
#include <string>
#include <iostream>
using namespace std; 


class partido{
	private: 
	equipo uno; 
	equipo dos; 
	int gol_uno; 
	int gol_dos; 
	bool se_juega; 
	
	public: 
	
	partido(); 
	partido(equipo,equipo,int,int,bool);
	~partido(); 
	
	void setEquipo_uno(equipo); 
	equipo getEquipo_uno(); 
	
	void setEquipo_dos(equipo); 
	equipo getEquipo_dos(); 
	
	void setgol_uno(int); 
	int getgol_uno(); 
	
	void setgol_dos(int); 
	int getgol_dos(); 
	
	void set_sejuega(bool); 
	bool get_sejuega(); 
	
	
	
	
 };

#endif /*partido_hpp*/