#ifndef Medico_H
#define Medico_H
#include<bits/stdc++.h>
using namespace std;

class Medico{
	private:
		string nombre;
		string direccion;
		int telefono;
		bool obraSocial;
		bool alergia;
		int ultimaVisita;
	public:
		Medico(string n, string d, int t, bool os, bool a, int u);
		Medico() {};
		
		string getNombre() { return nombre; }
		string getDireccion() { return direccion; }
		int getTelefono() { return telefono; }
		bool getObraSocial() { return obraSocial; }
		bool getAlergia() { return alergia; }
		int getUltimaVisita() { return ultimaVisita; }
};
Medico::Medico(string n, string d, int t, bool os, bool a, int u){
    nombre = n;
    direccion = d;
    telefono = t;	
    obraSocial = os;
    alergia = a;
    ultimaVisita = u;
}

#endif
