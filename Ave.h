/*
* Proyecto Bear Reserve - clase Ave
* Carlos Emilio Magana Arias
* A01701466
* 11/06/2020
*
* Clase padre Ave de la que heredan Carpintero y Lechuza
*/
#ifndef AVE_H
#define AVE_H

#include <string>
#include <sstream>
#include "Animal.h"

using namespace std;

//Declaro la clase abstracta Ave que hereda de Animal
class Ave: public Animal{

    //Variables de instancia del objeto
    protected:
        string t_nido;
        string arbol;

    //Metodos del objeto
    public:

        Ave():Animal(0,"","Ave","",0,0){};//constructor por defualt
        Ave (int num, string nombre, string especie, int edad, int vida, string nido, string ar):
          Animal(num,nombre,"Ave",especie,edad,vida), t_nido(nido), arbol(ar){};

        int get_num() { return num; }
        string get_nombre() { return nombre; }
        string get_especie() { return especie; }
        string get_tipo() { return tipo; }
        int get_edad() { return edad; }
        int get_vida() { return vida; }
        string get_nido() { return t_nido; }
        string get_arbol() { return arbol; }
        virtual string caza() = 0;//Metodos abstractos para ser sobreesritos
        virtual bool volar() = 0;
};


//Declaro objeto Carpintero que hereda de Ave
class Carpintero: public Ave{
	//Variables de instancia del objeto
    private:
    	bool pico;
	//Metodos del objeto
    public:

        Carpintero():Ave(0,"","Pajaro_carpintero",0,96,"Dentro del arbol","Abeto"){};//constructor por default
        Carpintero (int num, string nombre, int edad, bool pic):
          Ave(num,nombre,"Pajaro_carpintero",edad,96,"Dentro del arbol","Abeto"), pico(pic){};

        string caza();
        string come();
        int r_vida() { return vida - edad;}
        bool volar();
        string resumen();

};

/**
 * come imprime de que se alimenta Carpintero
 *
 * imprime un mensaje guardado en com sobre
 * la base alimenticia del Carpintero
 *
 * @param
 * @return string sobre la base alimenticia del Carpintero
 */
string Carpintero::come(){

    string com;
	com = "Come gusanos y larvas";
	return com;
}

/**
 * volar imprime si puede o no volar Carpintero segun el valor de edad
 *
 * regresa 0 o 1 dependiendo si es false o true respectivamente sobre
 * si Carpintero puede o no volar según el valor de su edad
 * si es menor o igual a 2, devolvera false, de lo contrario devolvera true
 *
 * @param
 * @return bool con el resultado segun el valor de edad
 */
bool Carpintero::volar(){

    bool vol;
	if (edad<=2){
    	vol = false;
	}
	else{
		vol = true;
	}
	return vol;
}

/**
 * caza imprime si puede o no cazar Carpintero segun el estado de pico
 *
 * imprime un mensaje dependiendo si pico es false o true, es decir, si
 * tiene algun problema o esta sano respectivamente, si es true imprimira
 * que esta sano, de lo contrario imprimira que requiere atencion medica
 *
 * @param
 * @return string con el resultado segun el valor de pico
 */
string Carpintero::caza(){
    string caz;
	if (pico==true){
        		caz="Sano";
			}
			else{
				caz="Necesita atencion medica";
			}
	return caz;
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
string Carpintero::resumen(){

    stringstream res;
    res << "ID: " << num << ", " << nombre << ", " << tipo << " " << especie << ", " 
	<< edad << " meses de " << vida << ", le quedan " << r_vida() << " meses de vida aproximadamente, Nido: " 
	<< t_nido << " en un " << arbol << ", Vuela: " << volar() << ", " << caza() << ", " << come() << "\n";
    return res.str();
}


//Declaro objeto Lechuza que hereda de Ave
class Lechuza: public Ave{
	//Variables de instancia del objeto
    private:
    	bool vista;
    	bool garras;
	//Metodos del objeto
    public:

        Lechuza():Ave(0,"","Lechuza",0,156,"Fuera del arbol","Pino y picea"){};//constructor por default
        Lechuza (int num, string nombre, int edad, bool vis, bool gar):
          Ave(num,nombre,"Lechuza",edad,156,"Fuera del arbol","Pino y picea"), vista(vis), garras(gar){};

        string caza();
        string come();
        int r_vida() { return vida - edad;}
        bool volar();
        string resumen();

};

/**
 * come imprime de que se alimenta Lechuza
 *
 * imprime un mensaje guardado en com sobre
 * la base alimenticia de Lechuza
 *
 * @param
 * @return string sobre la base alimenticia de Lechuza
 */
string Lechuza::come(){

    string com;
	com = "Come pequenias aves y mamiferos";
	return com;
}

/**
 * volar imprime si puede o no volar Lechuza segun el valor de edad
 *
 * regresa 0 o 1 dependiendo si es false o true respectivamente sobre
 * si Lechuza puede o no volar según el valor de su edad
 * si es menor o igual a 3, devolvera false, de lo contrario devolvera true
 *
 * @param
 * @return bool con el resultado segun el valor de edad
 */
bool Lechuza::volar(){

    bool vol;
	if (edad<=3){
    	vol = false;
	}
	else{
		vol = true;
	}
	return vol;
}

/**
 * caza imprime si puede o no cazar Lechuza segun el estado de vista y garras
 *
 * imprime un mensaje dependiendo si vista y garras son false o true, es decir, si
 * tienen algun problema o estan sanos respectivamente, si es true imprimira
 * que esta sano, si es un true y un false imprimira que necesita vigilacnia
 * y si es false imprimira que requiere atencion medica
 *
 * @param
 * @return string con el resultado segun el valor de vista y garras
 */
string Lechuza::caza(){
    string caz;
	if (vista==true and garras==true){
        		caz="Sano";
	}
	if (vista==true and garras==false){
		caz="Necesita vigilancia";
	}
	if (vista==false and garras==true){
		caz="Necesita vigilancia";
	}
	if (vista==false and garras==false){
		caz="Necesita atencion medica";
	}
	return caz;
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
string Lechuza::resumen(){

    stringstream res;
    res << "ID: " << num << ", " << nombre << ", " << tipo << " " << especie << ", " 
	<< edad << " meses de " << vida << ", le quedan " << r_vida() << " meses de vida aproximadamente, Nido: " 
	<< t_nido << " en un " << arbol << ", Vuela: " << volar() << ", " << caza() << ", " << come() << "\n";
    return res.str();
}
#endif
