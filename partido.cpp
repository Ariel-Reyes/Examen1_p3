#include "partido.hpp"
    partido::partido(){
    	
	}; 
	partido::partido(equipo uno,equipo dos,int gol_uno,int gol_dos,bool se_juega){
		this->uno = uno; 
		this->dos = dos; 
		this->gol_uno = gol_uno; 
		this->gol_dos = gol_dos; 
		this->se_juega = se_juega; 
	};
	partido::~partido(){
		
	}; 
	
	void partido::setEquipo_uno(equipo uno ){
		this->uno = uno; 
	}; 
	equipo partido::getEquipo_uno(){
		return this->uno; 
	}; 
	
	void partido::setEquipo_dos(equipo dos){
		this->dos = dos; 
	}; 
	equipo partido::getEquipo_dos(){
		return this->dos; 
	}; 
	
	void partido::setgol_uno(int gol_uno){
		this->gol_uno = gol_uno; 
	}; 
	int partido::getgol_uno(){
		return this->gol_uno; 
	}; 
	
	void partido::setgol_dos(int gol_dos){
		this->gol_dos = gol_dos; 
		
	}; 
	int partido::getgol_dos(){
		return this->gol_dos; 
	}; 
	
	void partido::set_sejuega(bool se_juega){
	this->se_juega = se_juega; 
	}; 
	bool partido::get_sejuega(){
		return this->se_juega; 
	}; 