#include<bits/stdc++.h>
#include"nodo.hpp"
#include"lista_doble.hpp"

using namespace std;

int main()
{
	lista_doble x;
	x.insertar_inicio(2); // 2
	x.insertar_fin(3); // 2 3
	x.insertar_inicio(1); // 1 2 3
	x.insertar_fin(4); // 1 2 3 4
	
	x.imprimir(); // 1 2 3 4
	x.imprimir_al_reves(); // 4 3 2 1
	
	x.eliminar(2);
	x.imprimir(); // 1 3 4
	x.imprimir_al_reves(); // 4 3 1
	x.eliminar(3);
	x.imprimir(); // 1 4
	x.imprimir_al_reves(); // 4 1
	x.eliminar(1);
	x.imprimir(); //4
	x.imprimir_al_reves(); //4
	x.eliminar(4);
	x.imprimir(); // 
	x.imprimir_al_reves(); // 
	return 0;
}


