#include "puntos_equipo.hpp"
puntos_equipo::puntos_equipo(){
	
}; 
puntos_equipo::puntos_equipo(equipo team,int goles_favor,int goles_contra,int part_ganado,int part_perdido,int part_empatado){
this->team = team; 
this->goles_favor = goles_favor; 
this->goles_contra = goles_contra; 
this->part_ganado = part_ganado;
this->part_perdido = part_perdido; 
this->part_empatado = part_empatado; 
};
puntos_equipo::~puntos_equipo(){
	
};

void puntos_equipo::setEquipo(equipo team){
	this->team = team; 
}; 
equipo puntos_equipo::getEquipo(){
	return this->team; 
}; 

void puntos_equipo::setgoles_favor(int goles_favor){
	this->goles_favor = goles_favor; 
}; 
int puntos_equipo::getgoles_favor(){
	return this->goles_favor; 
}; 

void puntos_equipo::setgoles_contra(int goles_contra){
	this->goles_contra; 
}; 

void puntos_equipo::setpart_ganados(int part_ganado){
	this->part_ganado; 
}; 
int puntos_equipo::getpart_ganados(){
	return this->part_ganado; 
}; 

void puntos_equipo::setpart_perdidos(int part_perdido){
	this->part_perdido = part_perdido; 
}; 
int puntos_equipo::getpart_perdidos(){
	return this->part_perdido; 
}; 

void puntos_equipo::setpart_empatado(int part_empatado){
	this->part_empatado; 
}; 
int puntos_equipo::getpart_empatados(){
	return this->part_empatado; 
}; 
