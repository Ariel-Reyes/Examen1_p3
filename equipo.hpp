#ifndef equipo_hpp 
#define equipo_hpp 
#include <string>
#include <iostream>
using namespace std; 

class equipo{ 


 private: 
 string nombre; 
 int skill; 

 public: 
 equipo();
 equipo(string, int);
 ~equipo(); 
 void setnombre(string); 
 void setskill(int);
 string getnombre();
 int getskill(); 
};


#endif /*equipo_hpp*/