/*
* Proyecto Bear Reserve - clase Animal
* Carlos Emilio Magana Arias
* A01701466
* 11/06/2020
*
* Clase padre Animal de la que heredan Oso y Ave
*/
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <sstream>

using namespace std;
//Declaracion de clase Animal que es abstracta
class  Animal{

    //Declaro variables de instancia
    protected:
        int num;
        int vida;
        int edad;
        string nombre;
        string tipo;
        string especie;
        
    //Declaro los metodos que va a tener el objeto
    public:
        Animal(): num(0),nombre(""),tipo(""),especie(""),edad(0),vida(0){}; //constructor por defualt
        Animal(int t_num, string nom, string tip, string esp, int ed, int vid):
          num(t_num),nombre(nom),tipo(tip),especie(esp),edad(ed),vida(vid){};

        int get_num() { return num; }
        string get_nombre() { return nombre; }
        string get_tipo() { return tipo; }
        string get_especie() { return especie; }
        int get_edad() { return edad; }
        int get_vida() { return vida; }
        virtual string come() = 0;//Metodos abstractos para ser sobreesritos
        virtual int r_vida() = 0;
        virtual string resumen() = 0;
};
#endif
