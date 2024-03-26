#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {

	private : string nit;
	
	
	public : 
	cliente (){
	}
	
	Cliente (string nom,string ape,string dir,int tel, string n) : Persona(nom,ape,dir,tel) {
		nit = n;
		
	}
	
};
