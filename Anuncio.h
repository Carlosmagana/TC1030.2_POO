#ifndef ANUNCIO_H
#define ANUNCIO_H

#include<iostream>

using namespace std;

class Anuncio{

	private:
		
		string mensaje;
		string empresa;
		string time;
	
	public:
		Anuncio(string men, string em, string ti){
			
			mensaje=men;
			empresa=em;
			time=ti;
		}
		
		string reproduceAnuncio(){
			
			return "\nAnuncio: " + mensaje;
		}
		
		string getInfo(){
			return "\nEmpresa: " + empresa + "\nDuracion: " + time;
		}
		
};

#endif
