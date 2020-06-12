/*
* Proyecto Bear Reserve - clase Reserva
* Carlos Emilio Magana Arias
* A01701466
* 11/06/2020
*
* Esta clase define objeto de tipo Reserva que contiene todas las operaciones
* para registrar los animales que habiten en la reserva y consultar los registros, ya sean
* generales, por especie o por tipo y pra calcular el presupuesto anual según el tipo y 
* cantidad de los animales, esta clase es utilizada por la funcion principal del prgrama
* y es parte del proyecto Bear Reserve.
*/
#ifndef RESERVA_H
#define RESERVA_H

#include <string>
#include <iostream>
#include <sstream>
#include "Animal.h"//biblioteca con mis objetos a usar //Se incluye Animal.h
#include "Oso.h"//Se incluye Oso.h
#include "Ave.h"//Se incluye Ave.h

using namespace std;

const int CUPO = 10000; //Cupo maximo de 10000 animales en la reserva, es una constante

class Reserva {

	//Declaro las variables privadas de instancia
    private:

        Animal *ani[CUPO]; //se define como apuntador para usar polimorfismo
        int id;
	//Declaro constructor por default y metodos publicos
    public:

        Reserva(): id(0){};//constructor por defualt

		void intro();
		void get_registro();
        void get_registro_e(string especie);
        void get_registro_t(string tipo);
        void nuevo_animal(string especie);
};

/**
 * intro imprime el menu principal
 *
 * Imprime con cout la bienvenida del programa, el menu principal,
 * las opciones que ofrece el programa con su numero de acceso cada una
 * e informacion importante para un mejor entendimiento del programa
 * y pregunta al usuario por la opcion que desee elegir. Esto
 * se repetira al finalizar la ejecucion de cada opcion hasta que el 
 * ususario decida salir del programa
 *
 * @param
 * @return
 */
void Reserva::intro(){
	cout<<"\n\n--- Bienvenido a Bear Reserve ---\n\n"<<"MENU PRINCIPAL\n"
	<<"(1) Registro General\n"<<"(2) Registro por tipo de animal y su presupuesto estimado anual\n"
	<<"(3) Registro por especie\n"<<"(4) Agregar nuevo animal\n"
	<<"(5) Salir\n"<<"(Info) Todos los nombres y datos deben ser introducidos con exactitud y ortografia correcta\n"
	<<"       La especie del Pajaro Carpintero se escribe: Pajaro_carpintero\n" 
	<<"       El resto de especies es solo la palabra de su especie, por ejemplo, 'Oso Kodiak' es 'Kodiak'\n"
	<<"       En los datos, los valores con 1 singinfican verdaderos y los 0 son falsos\n"
	<<"\n\nIntroduzca al numero de la opcion que desee ejecutar: ";
}

/**
 * nuevo_animal genera objetos en ani[]
 *
 * genera objetos de tipo Kodiak, Panda, Negro, Carpintero y Lechuza y los
 * guarda en la varibale de instancia en ani[] (arreglo de animales en la reserva)
 * según el ususario introduzca el nombre de la clase de dicho objeto a crear
 *
 * @param string especie debe ser: 'Kodiak', 'Panda', 'Negro', 'Carpintero' o 'Lechuza'
 * @return
 */
void Reserva::nuevo_animal(string especie){
	//declaro la variables para crear el objeto y usarlas para usar polimorfismo
	string nombre;
	int edad;
	double altura;
	double peso;
	bool pico;
	bool vista;
	bool garras;
	
	//new crea el objeto en tiempo de ejecucion para usar polimorfismo
	
	if (especie=="Kodiak"){
		cout<<"Nombre: ";
		cin>>nombre;//string nombre, el usuario intriduce el texto del nombre
		cout<<"Edad(anios): ";
		cin>>edad;//int edad, el usuario intriduce el valor entero de la edad
		cout<<"Altura(m): ";
		cin>>altura;//double altura, el usuario intriduce el valor double de la altura
		cout<<"Peso(kg): ";
		cin>>peso;//double peso, el usuario intriduce el valor double del peso
		
		ani[id] = new Kodiak(id,nombre,edad,altura,peso);
  		id++;
  	}
  	
	if (especie=="Panda"){
		cout<<"Nombre: ";
		cin>>nombre;//string nombre, el usuario intriduce el texto del nombre
		cout<<"Edad(anios): ";
		cin>>edad;//int edad, el usuario intriduce el valor entero de la edad
		cout<<"Altura(m): ";
		cin>>altura;//double altura, el usuario intriduce el valor double de la altura
		cout<<"Peso(kg): ";
		cin>>peso;//double peso, el usuario intriduce el valor double del peso
		
		ani[id] = new Panda(id,nombre,edad,altura,peso);
  		id++;
  	}
	  
	if (especie=="Negro"){
		cout<<"Nombre: ";
		cin>>nombre;//string nombre, el usuario intriduce el texto del nombre
		cout<<"Edad(anios): ";
		cin>>edad;//int edad, el usuario intriduce el valor entero de la edad
		cout<<"Altura(m): ";
		cin>>altura;//double altura, el usuario intriduce el valor double de la altura
		cout<<"Peso(kg): ";
		cin>>peso;//double peso, el usuario intriduce el valor double del peso
		
		ani[id] = new Negro(id,nombre,edad,altura,peso);
  		id++;
  	}
	
	if (especie=="Pajaro_carpintero"){
		cout<<"Nombre: ";
		cin>>nombre;//string nombre, el usuario intriduce el texto del nombre
		cout<<"Edad(meses): ";
		cin>>edad;//int edad, el usuario intriduce el valor entero de la edad
		cout<<"Pico sano(introduzca 1 si el pico esta sano o 0 si no lo esta): ";
		cin>>pico;//bool pico, el ususario introduce el valor 1/0 del estado de salud del pico
		
		ani[id] = new Carpintero(id,nombre,edad,pico);
  		id++;
  	}
	  
	if (especie=="Lechuza"){
		cout<<"Nombre: ";
		cin>>nombre;//string nombre, el usuario intriduce el texto del nombre
		cout<<"Edad(meses): ";
		cin>>edad;//int edad, el usuario intriduce el valor entero de la edad
		cout<<"Vista sana(introduzca 1 si la vista esta sana o 0 si no lo esta): ";
		cin>>vista;//bool vista, el ususario introduce el valor 1/0 del estado de salud de la vista
		cout<<"Garras sanas(introduzca 1 si las garras estan sanas o 0 si no lo estan): ";
		cin>>garras;//bool garras, el ususario introduce el valor 1/0 del estado de salud de las garras
		
		ani[id] = new Lechuza(id,nombre,edad,vista,garras);
  		id++;
  	}  	

}

/**
 * get_registro imprime Animales
 *
 * utiliza el arreglo ani[] y el numero de las id, para recorrer todo el
 * arreglo imprimiendo cada uno de los objetos con su metodo resumen()
 *
 * @param
 * @return
 */
void Reserva::get_registro(){
	
	//Ciclo que recorre el arreglo ani[] e imprime cada objeto con sus atributos y resultados de operaciones
	for(int i=0; i<id ;i++)
		  cout << ani[i]->resumen();
}


/**
 * get_registro_t imprime animales que coinciden con tipo, la cantidad de animales que coinciden 
 * con tipo y el presupuesto anual aproximado por tipo
 *
 * utiliza el arreglo ani[] y el numero de las id, para recorrer todo el
 * arreglo imprimiendo cada uno de los objetos  que coinciden con el
 * string tipo ("Oso o Ave"), cont funciona como contador empezando de 0
 * que aumenta en 1 cada vez que algún objeto coincide con el string tipo
 * e imprime la cantidad total de animales que coincidieron  y calcula el 
 * presupuesto anual estimado por tipo, multiplicando cont por 250000 con 
 * el string tipo "Oso" y por 110000 con el string tipo "Ave".
 *
 * @param string tipo debe ser: 'Oso' o 'Ave'
 * @return
 */
void Reserva::get_registro_t(string tipo){
	
	int cont;//variable que funciona como contador y guarda la cantidad de coincidencias con string tipo
	cont = 0;
	//Ciclo que recorre el arreglo ani[] e imprime cada objeto con sus atributos y resultados de operaciones
	for(int i=0; i<id ;i++){
    if(ani[i]->get_tipo() == tipo){
		cont++;
		cout << ani[i]->resumen();
	}
  }
  cout << "Total de " << tipo << " en la reserva: " << cont << endl;//Imprime el total de animales que coincidieron con string tipo
  cout << "Presupuesto anual estimado: ";
  if(tipo=="Oso"){
  	cout << cont*250000 <<" MXN"<< endl;//Presupuesto total de "Oso"
  }
  if(tipo=="Ave"){
  	cout << cont*110000 <<" MXN"<< endl;//Presupuesto total de "Ave"
  } 
}


/**
 * get_registro_e imprime animales que coinciden con especie y la cantidad de animales que coinciden con especie
 *
 * utiliza el arreglo ani[] y el numero de las id, para recorrer todo el
 * arreglo imprimiendo cada uno de los objetos  que coinciden con el
 * string especie ("Kodiak, Panda, Negro, Pajaro_carpintero o Lechuza"), 
 * cont funciona como contador empezando de 0 que aumenta en 1 cada vez 
 * que algún objeto coincide con el string especie e imprime la cantidad 
 * total de animales que coincidieron
 *
 * @param string especie debe ser: 'Kodiak', 'Panda', 'Negro', 'Pajaro_carpintero' o 'Lechuza'
 * @return
 */
void Reserva::get_registro_e(string especie){
	
	int cont;//variable que funciona como contador y guarda la cantidad de coincidencias con string especie
	cont = 0;
	//Ciclo que recorre el arreglo ani[] e imprime cada objeto con sus atributos y resultados de operaciones
	for(int i=0; i<id ;i++){
    if(ani[i]->get_especie() == especie){
		cont++;
		cout << ani[i]->resumen();
	}
  }
  cout << "Total de " << especie << " en la reserva: " << cont << endl;//Imprime el total de animales que coincidieron con string especie
}
#endif
