#ifndef NOGALAXY_H
#define NOGALAXY_H

#include "Usuario.h"

class Nogalaxy: public Usuario{
					
	public:
		Nogalaxy(string use, string id, string mai, string pass, string pai, 
		string clav): Usuario(use, id, mai, pass, false, pai, clav){
		}

		void cambiaStatus(bool n_galaxy){
			cout<<"\nDesea obtener el staus Galaxy por solo 99 pesos al mes?\n"<< endl;
			galaxy=n_galaxy;
			cout<<galaxy<<endl;
			if (galaxy == true){
				cout<< "\nGracias por unirte al Beat-Verse, ahora puedes crear tus propias playlists"<< endl;
			}
			else if (galaxy == false){
				cout<< "\nSigue disfrutando de Beat-Verse gratis"<< endl;
			}
		}
		
};
#endif
