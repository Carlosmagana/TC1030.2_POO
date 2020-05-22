/*
Beat.Verse.cpp
Plataforma de streaming de música
Carlos Emilio Magaña Arias
A01701466
===============================================================
2do avance de proyecto integrador, en le uqe estoy realizando
una plataforma de streaming de musica llamada Beat-Verse, debido a que 
es aún una 2da etapa, no ha incluido las canciones, artistas ni playlists,
pero ya esta integrado el usuario, los estatus galaxy y no galaxy 
y sus interacciones, enfocandose en herencia, metodos y modificadores de acceso.
*/
#include<iostream>

using namespace std;

#include "Usuario.h"
#include "Anuncio.h"
#include "Nogalaxy.h"
#include "Galaxy.h"
#include "Pago.h"

int main(){
//Creacion del usuario gratuito
	Nogalaxy carlos("Carlos Magana", "#0", "carloks46@gmail.com", "fifaemilio45", "Mexico", "verde");
//Creacion del anuncio 1
	Anuncio an1("Compra Beat-Verse Galaxy ahora y crea tus propias listas con tu nuevo estado galactico,"
	" por solo 99MXN al mes","Beat-Verse","00:00:10");
	

//Muestra usuario gratuito registrado	
	cout<<"Registro \n"; 
	cout << carlos.getCuenta() << "\nStatus Galaxy: " << carlos.getStatus() << endl;
	
//Cambio de nombre del usuario
	cout <<	"\nCambio de nombre \n" << "Nombre anterior:" << carlos.getUser() << endl;
	carlos.cambiaUser("EggBlade");
	cout << "Nombre actual:" << carlos.getUser() << endl;

//Cambio de password
	cout <<	"\nCambio de password \n" << "Password anterior:" << carlos.getPass() << endl;
	carlos.cambiaPass("Fif@emilio45");
	cout << "Password actual:" << carlos.getPass() << endl;

//Cambio de palabra clave
	cout <<	"\nCambio de clave \n" << "Clave anterior:" << carlos.getClave() << endl;
	carlos.cambiaClave("pizza");
	cout << "Clave actual:" << carlos.getClave() << endl;
	
//Muestra usuario con sus datos actualizados y sus estado galaxy (si es usuario gratuito o de paga)
	cout <<"\nInfo de la cuenta" <<endl;
	cout << carlos.getCuenta() << "\nStatus Galaxy: " << carlos.getStatus() << endl;
	
//Muestra anuncio si no es Galaxy (si no tiene estatus Galaxy, de paga)
	if (carlos.getStatus() == false){
		cout <<"\nInterrupcion de anuncio" << an1.reproduceAnuncio() <<an1.getInfo() <<endl;
	}

//Cambiar a Galaxy, al acabar el anuncio pregunta si desea contratar, 
//por default contesta que no, para cambiarlo, cambia false por true
	carlos.cambiaStatus(false);

//Muestra el estatus actual del usuario, gratis o de paga
	cout << "\nStatus Galaxy: " << carlos.getStatus() << endl;
	
//Resumen de la informacion de la cuenta hasta ahora
	cout <<"\nInfo de la cuenta" <<endl;
	cout << carlos.getCuenta() << "\nStatus Galaxy: " << carlos.getStatus() << endl;
	
//Pago de status Galaxy con las 3 opciones, ejemplo de los 3 casos al intentar realizar el pago por la membresía, 
//con tarjeta, con el nombre y un caso de prueba
	Pago n_carlos(45676,7468);
	n_carlos.mensualidad();	
	Pago c_carlos("Carlos Emilio Magana Arias",746);
	c_carlos.mensualidad();	
	Pago p_carlos(4567,746);
	p_carlos.mensualidad();	

//Cambio a usuario de paga, se transfiere la cuenta de Nogalaxy a Galaxy y se borra la anterior cuenta.
	if (carlos.getStatus() == true){
		Galaxy g_carlos(carlos.getUser(), "#0", "carloks46@gmail.com", carlos.getPass(), "Mexico", carlos.getClave());
		cout << "\n" << g_carlos.getCuenta() << "\nStatus Galaxy: " << g_carlos.getStatus() << endl;
		/* en este punto tambien se eliminaría la cuenta del usuario que era gratis, pero para 
		ello se requieren apuntadores, así que se añadirá en el siguiente avance */
	}
}
