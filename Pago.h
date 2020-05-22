#ifndef PAGO_H
#define PAGO_H

#include<iostream>

using namespace std;

class Pago{
					
	private:
		int tarjeta;
		int code;
		
		string nom_c;
		
	public:
		Pago(int,int);
		Pago(string,int);
		void mensualidad();
};

Pago::Pago(int tar, int cod){
	tarjeta=tar;
	code=cod;
}

Pago::Pago(string t_nom_c, int cod){
	nom_c=t_nom_c;
	code=cod;
}

void Pago::mensualidad(){
	cout<<"\nCobro de mensualidad (99 MXN)\nIntroduzca los ultimos 4 digitos" 
	" de su tarjeta y codigo de seguridad o su nombre completo en lugar de los" 
	" 4 digitos de la tarjeta"<<endl;
	if (tarjeta>9999 or code>999 or tarjeta<0 or code<0){
		cout<<"\nValores no validos, el pago no fue procesado"<<endl;
	}
	else{
		cout<< "\nTarjeta: " << tarjeta << "\nNombre: " << nom_c << "\nCodigo: " << code << "\nGracias por su renovacion y preferir Beat-Verse"<<endl;
	}
}
#endif
