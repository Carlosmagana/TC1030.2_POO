#ifndef GALAXY_H
#define GALAXY_H

#include "Usuario.h"

class Galaxy: public Usuario{
					
	private:
		//tiene un atributo de una lista, pero se añadirá después de la clase de apuntadores y polimorfismo
		
	public:
		Galaxy(string use, string id, string mai, string pass, string pai, 
		string clav): Usuario(use, id, mai, pass, true, pai, clav){
		}
		
		//tiene mas metodos esta clase, pero para ello son necesarios los apuntadores y polimorfismo
};
#endif
