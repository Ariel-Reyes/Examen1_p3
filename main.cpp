#include <iostream>
#include "equipo.hpp"
#include "partido.hpp"
#include "liga.hpp"
#include "puntos_equipo.hpp"
#include "tabla.hpp"
#include <time.h>
#include <random>
#include <string>
using namespace std; 

int main() {
	srand(time(NULL));
		liga *a = new liga();
 
	int opc = 2; 
	while(opc!=5){
		cout<<"...........Menu Soccer.........."<<endl; 
		cout<<"1.................Mantenimiento de equipo"<<endl; 
		cout<<"2............................Generar Jornada de partido"<<endl; 
		cout<<"3................................Simular Partido"<<endl; 
		cout<<"4................................Imprimir tabla de posiciones y resultados"<<endl; 
		cout<<"5.....................................Salir"<<endl; 
		cout<<"Ingrese la opcion que desea: "<<endl; 
		cin>>opc; 
		
		switch(opc){
			case 1: {
				if(a->retorne_partidos().size()>0){
					cout<<"Esta opcion es invalidada"<<endl; 
				} else{
					
					int op; 
					cout<<"........Mantenimientos de equipo............"<<endl; 
					cout<<"1...................Crear Equipo"<<endl; 
					cout<<"2...................Modificar Equipo"<<endl; 
					cout<<"3...................Eliminar Equipos"<<endl; 
					cout<<"4....................Listar Equipos"<<endl; 
					cout<<"Ingrese la opcion que desea: "<<endl; 
					cin>>op;
					/*switch opcion 1*/
					switch(op){
						case 1:{
							string nombre;
							int skill =  1+ rand()%99;  
						
							cout<<"Ingrese el nombre del equipo: "<<endl; 
							cin>>nombre; 
							cout<<"El skill del equipo: "<< nombre << " es: " << skill<<endl;
							equipo x(nombre,skill);
							a->set_equipo(new equipo(nombre, skill)); 
						  cout<<"Ingrese los goles a favor: "<<endl;
						  int g_favor,g_contra,p_gana,p_per,p_empa; 
						  cin>>g_favor; 
						  cout<<"Ingrese los goles en contra: "<<endl; 
						  cin>>g_contra; 
						  cout<<"Ingrese los partidos ganados: "<<endl; 
						  cin>>p_gana; 
						  cout<<"Ingrese los partidos perdidos: "<<endl;
						  cin>>p_per; 
						  cout<<"Ingrese los partidos empatados: "<<endl; 
						  cin>>p_empa; 
						
							puntos_equipo* v = new puntos_equipo(x,g_favor,g_contra,p_gana,p_per,p_empa);
					      tabla* s = new tabla(); 
						  s->set_puntos(v);	
						  a->set_tabla(s); 
						
							
							break;
						}
						case 2:{
							equipo* eq; 
							cout<<".........Modificar.........."<<endl; 
							for(int i=0;i<a->retorne_equipos().size();i++){
								eq = a->retorne_equipos()[i]; 
								cout<<i<<")"<<".............."<<eq->getnombre()<<endl; 
							}
							cout<<"Ingrese el indice a modificar: "<<endl; 
							int indice; 
							cin>>indice; 
							eq = a->retorne_equipos()[indice]; 
							
							cout<<"---Que Modificara---"<<endl; 
							cout<<"1)........Nombre"<<endl; 
							cout<<"2)........Skill"<<endl; 
							int ide; 
							cin>>ide; 
							
							
							switch(ide){
								case 1:{
									cout<<"Ingrese el nuevo nombre: "<<endl; 
									string name; 
									cin>>name; 
								   eq->setnombre(name); 
								   
									break;
								}
								case 2:{
									cout<<"Ingrese el nuevo skill"<<endl; 
									int sk; 
									cin>>sk; 
									eq->setskill(sk);
									
									break;
								}
									
							}
							
							
							
							
							
							break;
						}
						case 3:{
								equipo* eq; 
							cout<<".........Eliminar.........."<<endl; 
							for(int i=0;i<a->retorne_equipos().size();i++){
								eq = a->retorne_equipos()[i]; 
								cout<<i<<")"<<".............."<<eq->getnombre()<<endl; 
							}
							cout<<"Ingrese el indice a eliminar: "<<endl; 
							int indice; 
							cin>>indice; 
							eq=a->retorne_equipos()[indice];
						a->eliminar(indice);
							
						
					 
	
							break;
						}
						
						case 4:
								equipo* eq; 
							cout<<".........LISTAR.........."<<endl; 
							for(int i=0;i<a->retorne_equipos().size();i++){
								eq = a->retorne_equipos()[i]; 
								cout<<i<<")"<<".............."<<eq->getnombre()<<endl; 
							}
							break; 
						
					} // fin switch opcion 1 

				}
	
				break;
			}
			// ejercicio 2 
			case 2:{
		if(a->retorne_equipos().size()==0){
		} else{
		

			equipo* eq;
			equipo* qe;  
		    vector<equipo*> x = a->retorne_equipos(); 
		    if(x.size()%2!=0){
		    	cout<<"TIENE QUE HABER EQUIPOS PARES"<<endl; 
		} else{
		
		    while(x.size()>0){
			
		    
			cout<<".........LISTAR EQUIPOS DISPONIBLES.........."<<endl; 
			for(int i=0;i<x.size();i++){
			eq = x[i];
		
	      cout<<i<<")"<<".............."<<eq->getnombre()<<endl; 
			}
				
			
			int indice_uno = rand()%x.size(); 
			int indice_dos=  rand()%x.size(); 
			cout<<indice_uno<<endl;
			cout<<indice_dos<<endl;  
			
			
			eq = x[indice_uno]; 
			qe= x[indice_dos]; 
				
		
			while(eq->getnombre()==qe->getnombre()){
				indice_uno = rand()%x.size(); 
			indice_dos=rand()%x.size(); 	
		     eq = x[indice_uno]; 
			qe= x[indice_dos];
			}
				
			cout<<x.size(); 
			
			cout<<"El Equipo dos es: "<<qe->getnombre()<<endl; 
			cout<<"El Equipo uno es: "<<eq->getnombre()<<endl; 
		
		 partido* pa = new partido(*eq,*qe,indice_uno,indice_dos,false); 
			
			a->set_partido(pa);
			
			x.erase(begin(x)+indice_uno);
			x.erase(begin(x)+indice_dos);	
	
		}
	}
	} 
	
				break;
			}
			case 3:{
				
				
				
				
				break;
			}
			case 4:{
				
				break;
			}
			case 5:{
				cout<<"QUE VIVA LA INTENSIDAD DEL FUTBALL!!!!!!"<<endl; 
				break;
				default: cout<<"Ingreso una opcion incorrecta"<<endl; 
			}
		}
		
		
		
	}
	
	return 0;
}