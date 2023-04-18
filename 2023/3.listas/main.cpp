#include<iostream>
#include "lista_simple.hpp"

using namespace std;

int main()
{
	lista_simple lista;
	lista.insertar_inicio(55);
	lista.imprimir(); //55
	lista.insertar_inicio(44);
	lista.imprimir(); //44 55
	lista.insertar_inicio(33);
	lista.imprimir(); //33 44 55
	lista.insertar_inicio(22);
	lista.imprimir(); //22 33 44 55
	lista.insertar_inicio(11);
	lista.imprimir(); //11 22 33 44 55
	
	lista.eliminar_key(11);
	lista.imprimir(); //22 33 44 55
	lista.eliminar_key(33);
	lista.imprimir(); //22 44 55
	lista.eliminar_key(55);
	lista.imprimir(); //22 44
	
	cout<<lista.buscar_key(22)<<endl; //1
	cout<<lista.buscar_key(33)<<endl; //0
	
	lista.insertar_fin(66);
	lista.imprimir(); //22 44 66
}


