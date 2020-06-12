/*
* Proyecto Bear Reserve - clase Oso
* Carlos Emilio Magana Arias
* A01701466
* 11/06/2020
*
* Clase padre Oso de la que heredan Panda, Kodiak y Negro
*/
#ifndef OSO_H
#define OSO_H

#include <string>
#include <sstream>
#include "Animal.h"

using namespace std;

//Declaro la clase Oso que hereda de Animal
class Oso: public Animal{

    //Variables de instancia del objeto
    protected:
        double altura;
        double peso;

    //Metodos del objeto
    public:

        Oso():Animal(0,"","Oso","",0,0){};//constructor por defualt
        Oso (int num, string nombre, string especie, int edad, int vida, double alt, double pes):
          Animal(num,nombre,"Oso",especie,edad,vida), altura(alt), peso(pes){};

        int get_num() { return num; }
        string get_nombre() { return nombre; }
        string get_especie() { return especie; }
        string get_tipo() { return tipo; }
        int get_edad() { return edad; }
        int get_vida() { return vida; }
        double get_altura() { return altura; }
        double get_peso() { return peso; }
};



//Declaro objeto Panda que hereda de Oso
class Panda: public Oso{

    //Metodos del objeto
    public:

        Panda():Oso(0,"","Panda",0,20,0,0){};//constructor por defualt
        Panda (int num, string nombre, int edad, double altura, double peso):
          Oso(num,nombre,"Panda",edad,20,altura,peso){};
		
        int get_num() { return num; }
        string get_nombre() { return nombre; }
        int get_edad() { return edad; }
        double get_altura() { return altura; }
        double get_peso() { return peso; }
        string come();
        int r_vida() { return vida - edad;}
        string trepa();
        string resumen();
};

/**
 * come imprime de que se alimenta Panda
 *
 * imprime un mensaje guardado en com sobre
 * la base alimenticia del Panda
 *
 * @param
 * @return string sobre la base alimenticia del Panda
 */
string Panda::come(){

    string com;
	com = "el oso panda come bambu y fruta";
	return com;
}

/**
 * trepa imprime si puede o no trepar Panda segun el valor de edad
 *
 * imprime un mensaje guardado en trep sobre
 * si Panda puede o no trepar arboles según el valor de su edad
 * si es mayor o igual a 3, ya puede trepar, de lo contrario imprimira que no
 *
 * @param
 * @return string con el resultado segun el valor de edad
 */
string Panda::trepa(){
    string trep;
	if (edad>=3){
        		trep=" ya puede trepar arboles";
			}
			else{
				trep="aun no puede trepar arboles";
			}
	return trep;
}

/**
 * resumen convierte a atributos y metodos a string.
 *
 * concatena todos los valores de los atributos y resultados de los metodos 
 * en un string para ser impreso
 *
 * @param
 * @return string con los valores y texto concatenado.
 */
string Panda::resumen(){

    stringstream res;
    res << "ID: " << num << ", " << nombre << ", " << tipo << " " << especie << ", " 
	<< edad << " anios de " << vida << ", le quedan " << r_vida() << " anios de vida aproximadamente, " 
	<< altura << " m., " << peso << "kg." << ", " << trepa() << ", " << come() << "\n";
    return res.str();
}



//Declaro objeto Kodiak que hereda de Oso
class Kodiak: public Oso{

	//Metodos del objeto
    public:

        Kodiak():Oso(0,"","Kodiak",0,28,0,0){};//constructor por defualt
        Kodiak (int num, string nombre, int edad, double altura, double peso):
          Oso(num,nombre,"Kodiak",edad,28,altura,peso){};

        int get_num() { return num; }
        string get_nombre() { return nombre; }
        int get_edad() { return edad; }
        double get_altura() { return altura; }
        double get_peso() { return peso; }
        string come();
        int r_vida() { return vida - edad;}
        string hiberna();
        string resumen();

};

/**
 * come imprime de que se alimenta Kodiak
 *
 * imprime un mensaje guardado en com sobre
 * la base alimenticia del Kodiak
 *
 * @param
 * @return string sobre la base alimenticia del Kodiak
 */
string Kodiak::come(){

    string com;
	com = "el oso kodiak come salmon";
	return com;
}

/**
 * hiberna imprime los meses dehibernacion de Kodiak
 *
 * imprime un mensaje guardado en hib sobre
 * el periodo de hibernacion del Kodiak
 *
 * @param
 * @return string sobre el periodo de hibernacion
 */
string Kodiak::hiberna(){
    string hib;
	hib = "Periodo de hibernacion: Noviembre, Diciembre, Enero, Febrero y Marzo";
	return hib;
}

/**
 * resumen convierte a atributos y metodos a string.
 *
 * concatena todos los valores de los atributos y resultados de los metodos 
 * en un string para ser impreso
 *
 * @param
 * @return string con los valores y texto concatenado.
 */
string Kodiak::resumen(){

    stringstream res;
    res << "ID: " << num << ", " << nombre << ", " << tipo << " " << especie << ", " 
	<< edad << " anios de " << vida << ", le quedan " << r_vida() << " anios de vida aproximadamente, " 
	<< altura << " m., " << peso << "kg." << ", " << hiberna() << ", " << come() << "\n";
    return res.str();
}



//Declaro objeto Negro que hereda de Oso
class Negro: public Oso{

    //Metodos del objeto
    public:

        Negro():Oso(0,"","Negro",0,18,0,0){};//Costructor default
        Negro (int num, string nombre, int edad, double altura, double peso):
          Oso(num,nombre,"Negro",edad,18,altura,peso){};

        int get_num() { return num; }
        string get_nombre() { return nombre; }
        int get_edad() { return edad; }
        double get_altura() { return altura; }
        double get_peso() { return peso; }
        string come();
        int r_vida() { return vida - edad;}
        string nada();
        string resumen();

};

/**
 * come imprime de que se alimenta Negro
 *
 * imprime un mensaje guardado en com sobre
 * la base alimenticia de Negro
 *
 * @param
 * @return string sobre la base alimenticia de Negro
 */
string Negro::come(){

    string com;
	com = "el oso negro come fruta y bayas";
	return com;
}

/**
 * nada imprime si puede o no nadar Negro segun el valor de edad
 *
 * imprime un mensaje guardado en nad sobre
 * si Negro puede o no nadar en corrientes fuertes según el valor de su edad
 * si es mayor o igual a 4, ya puede nadar, de lo contrario imprimira que no
 *
 * @param
 * @return string con el resultado segun el valor de edad
 */
string Negro::nada(){
    string nad;
	if (edad>=4){
        		nad="ya puede nadar en corrientes fuertes";
			}
			else{
				nad="solo puede nadar en corrientes debiles";
			}
	return nad;
}

/**
 * resumen convierte a atributos y metodos a string.
 *
 * concatena todos los valores de los atributos y resultados de los metodos 
 * en un string para ser impreso
 *
 * @param
 * @return string con los valores y texto concatenado.
 */
string Negro::resumen(){

    stringstream res;
    res << "ID: " << num << ", " << nombre << ", " << tipo << " " << especie << ", " 
	<< edad << " anios de " << vida << ", le quedan " << r_vida() << " anios de vida aproximadamente, " 
	<< altura << " m., " << peso << "kg." << ", " << nada() << ", " << come() << "\n";
    return res.str();
}

#endif
