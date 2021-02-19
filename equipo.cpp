#include "equipo.hpp"

 equipo::equipo(){
 	
 };
 equipo::equipo(string nombre, int skill){
 	this->nombre = nombre; 
 	this->skill = skill; 
 };
 equipo::~equipo(){
 	
 }; 
 void equipo::setnombre(string nombre){
 	this->nombre = nombre; 
 }; 
 void equipo::setskill(int skill){
 	this->skill = skill; 
 };
 string equipo::getnombre(){
 	return this->nombre; 
 };
 int equipo::getskill(){
 	return this->skill; 
 }; 