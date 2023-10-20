#include<bits/stdc++.h>
#include "Medico.h"
using namespace std;

void mostrarPacientes(Medico *p);

int main(){
	
	Medico *pacientes = new Medico[5];
	
	pacientes[0] = Medico("Jorge", "123", 4331434, true, false, 2019);
	pacientes[1] = Medico("Pedro", "Av Firpo", 5246356, false, false, 2010);
	pacientes[2] = Medico("Martin", "Av sin nombre", 6756875, true, true, 2000);
	pacientes[3] = Medico("Santiago", "Kenia", 7467456, false, true, 1975);
	pacientes[4] = Medico("Agustin", "San Marino", 869574535, true, false, 1838);
	
	mostrarPacientes(pacientes);
	
	return 0;
}

void mostrarPacientes(Medico* p){
	for(int i = 0 ; i < 5 ; i++){
		if(p[i].getObraSocial()){
			cout<<p[i].getNombre()<<" "<<p[i].getTelefono();
		}
	}
	cout<<endl;
	for(int i = 0 ; i < 5 ; i++){
		if(!p[i].getAlergia()){
			cout<<p[i].getNombre();
		}
	}
	cout<<endl;
}
