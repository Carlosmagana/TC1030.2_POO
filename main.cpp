/*
* Bear Reserve - main.cpp
* Carlos Emilio Magana Arias
* A01701466
* 11/06/2020
*/
#include <iostream> 
#include "Animal.h"//Incluyo las clases a usar 
#include "Oso.h"
#include "Ave.h"
#include "Reserva.h"

using namespace std;
string especie;//Instancio las variables para el funcionamiento principal
string tipo;
int op;
bool sal;

int main(int argc, char* argv[]){
	
	sal=true;
	//Se crea el objeto reserva de la clase Reserva para iniciar el programa
	Reserva reserva;
	//Ciclo para mantener al programa corriendo hasta que sal sea igual a false
	while(sal==true) {
		//Mensaje de bienvenida, menu principal e informacion
  		reserva.intro();
  		//Espera por la respuesta del usuario sobre su opcion a ejecutar
  		cin>>op;
  		//Ciclo para evitar errores en caso de recibir valores enteros no validos
  		while(op<1 or op>5) {
  			cout<<"\nValor no valido, intente de nuevo: ";
  			cin>>op;
		  }
  		//Opcion para mostrar el registro general
		  if(op==1) {
 		 	cout<<"-----Aviso: La edad de los OSOS se toma en ANIOS enteros y la edad de las AVES en MESES-----\n\n";
		  	reserva.get_registro();	
		  }
	  	//Opcion para mostrar el registro por tipo y los presupuestos anuales estimados
		  if(op==2) {
 		 	cout<<"-----Aviso: La edad de los OSOS se toma en ANIOS enteros y la edad de las AVES en MESES-----\n\n";
		  	cout<<"\n De que tipo de animal quiere el registro?\n";
  			cin>>tipo;
 		 	reserva.get_registro_t(tipo);
 		 }
  		//Opcion para mostrar el registro por especie
		  if(op==3) {
 		 	cout<<"-----Aviso: La edad de los OSOS se toma en ANIOS enteros y la edad de las AVES en MESES-----\n\n";
 		 	cout<<"\n De que especie quiere el registro?\n";
 		 	cin>>especie;
 		 	reserva.get_registro_e(especie);
 		 }
  		//Opcion para agregar animales al registro
 		 if(op==4) {
 		 	cout<<"Especie del animal:";
 		 	cin>>especie;
 		 	reserva.nuevo_animal(especie);
 		 }
 		//Opcion para salir del programa
 		 if(op==5) {
 		 	sal=false;
 		 }  
	}
}
