#ifndef USUARIO_H
#define USUARIO_H

#include<iostream>

using namespace std;

class Usuario{

	protected:
		bool galaxy;
		
		string user;
		string idUser;
		string mail;
		string password;
		string pais;
		string clave;
		
		
	public:
		Usuario(string use, string id, string mai, string pass, bool status, string pai, string clav){
			user = use;
			idUser = id;
			mail = mai;
			password = pass;
			galaxy = status;
			pais = pai;
			clave = clav;
		}
		
		string getCuenta(){
			return "Usuario: " + user + "\nID: " + idUser + 
			"\nMail: " + mail + "\nPassword: " + password + 
			"\nPais: " + pais + "\nPalabra clave: " + clave;
		}
		
		string getUser(){
			return user;
		}
		
		void cambiaUser(string n_use){
			user=n_use;
		}
		
		string getPass(){
			return password;
		}
		
		void cambiaPass(string n_pass){
			password=n_pass;
		}
		
		string getClave(){
			return clave;
		}
		
		void cambiaClave(string n_clave){
			clave=n_clave;
		}
		
		bool getStatus(){
			return galaxy;
		}	
};
#endif
