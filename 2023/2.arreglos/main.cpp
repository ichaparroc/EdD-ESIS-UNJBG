#include<bits/stdc++.h>
#include"arreglo.hpp"

using namespace std;

int main()
{
    arreglo x(3);
    x.insertar_fin(1);  // [1]
    x.insertar_fin(2);  // [1,2]
    x.insertar_fin(3);  // [1,2,3]
    x.insertar_fin(4);  // overflow
    x.imprimir();       // 1 2 3
    x.elimina_inicio(); // elimina 1
    x.imprimir();       // 2 3
    x.elimina_inicio(); // elimina 2
    x.imprimir();       // 3
    x.elimina_inicio(); // elimina 3
    x.imprimir();       // 
    x.elimina_inicio(); // underflow
    x.insertar_fin(4);  // [4]
    x.insertar_fin(5);  // [4,5]
    x.insertar_fin(6);  // [4,5,6]
    x.imprimir();       // 4 5 6
    x.buscar(1);  // 1 ENCONTRADO
    x.buscar(6);  // 6 NO encontrado
    return 0;
}


