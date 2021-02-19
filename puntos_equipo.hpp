#ifndef puntos_equipo_hpp 
#define puntos_equipo_hpp 
#include "equipo.hpp"
class puntos_equipo{ 
private: 
equipo team; 
int goles_favor; 
int goles_contra; 
int part_ganado; 
int part_perdido; 
int part_empatado; 

public: 
puntos_equipo(); 
puntos_equipo(equipo,int,int,int,int,int);
~puntos_equipo();

void setEquipo(equipo); 
equipo getEquipo(); 

void setgoles_favor(int); 
int getgoles_favor(); 

void setgoles_contra(int); 
int getgoles_contra();


void setpart_ganados(int); 
int getpart_ganados(); 

void setpart_perdidos(int); 
int getpart_perdidos(); 

void setpart_empatado(int); 
int getpart_empatados(); 

}; 
#endif /*puntos_equipo_hpp*/



