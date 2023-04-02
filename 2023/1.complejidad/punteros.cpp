#include<iostream>

using namespace std;

int main()
{
	int variable = 1234;
	
	cout<<'\n'<<"int variable = 1234"<<'\n';
	cout<<'\t'<<"variable: "<<variable<<'\n';
	cout<<'\t'<<"&variable: "<<&variable<<'\n';
	
	int *puntero;
	
	cout<<'\n'<<"int *puntero;"<<'\n';
	
	puntero = &variable;
	
	cout<<'\n'<<"puntero = &variable;"<<'\n';	
	cout<<'\t'<<"puntero: "<<puntero<<'\n';
	cout<<'\t'<<"*puntero: "<<*puntero<<'\n';
	cout<<'\t'<<"&*puntero: "<<&*puntero<<'\n';
	cout<<'\t'<<"&puntero: "<<&puntero<<'\n';
	
	*puntero = variable;
	
	cout<<'\n'<<"*puntero = variable"<<'\n';
	cout<<'\t'<<"puntero: "<<puntero<<'\n';
	cout<<'\t'<<"*puntero: "<<*puntero<<'\n';
	cout<<'\t'<<"&*puntero: "<<&*puntero<<'\n';
	cout<<'\t'<<"&puntero: "<<&puntero<<'\n';
	
	*puntero = 4321;
	
	cout<<'\n'<<"*puntero = 4321"<<'\n';
	cout<<'\t'<<"puntero: "<<puntero<<'\n';
	cout<<'\t'<<"*puntero: "<<*puntero<<'\n';
	cout<<'\t'<<"variable: "<<variable<<'\n';
	
	variable = 1234;
	
	cout<<'\n'<<"variable = 1234"<<'\n';
	cout<<'\t'<<"puntero: "<<puntero<<'\n';
	cout<<'\t'<<"*puntero: "<<*puntero<<'\n';
	cout<<'\t'<<"variable: "<<variable<<'\n';
	
	int arreglo[10] = {0,2,4,6,8,10,12,14,16,18};
	cout<<'\n'<<"int arreglo[10] = {0,2,4,6,8,10,12,14,16,18}"<<'\n';
	
	puntero = arreglo;
	cout<<'\n'<<"puntero = arreglo"<<'\n';
	cout<<"arreglo: "<<arreglo<<'\n';
    cout<<"&arreglo[0]: "<<&arreglo[0]<<'\n';
	for(int i = 0; i < 10; i++)
    {
        cout<<'\t'<<"*(puntero+"<<i<<"): "<<*(puntero+i);
        cout<<'\t'<<"puntero+"<<i<<": "<<puntero+i<<'\n';
    }
    
	//int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	//cout<<'\n'<<"int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}}"<<'\n';
	//cout<<"matriz: "<<matriz<<'\n';
	//cout<<"&matriz: "<<&matriz<<'\n';
	//cout<<"matriz[0]: "<<matriz[0]<<'\n';
    //cout<<"&matriz[0]: "<<&matriz[0]<<'\n';
    //cout<<"matriz[0][0]: "<<matriz[0][0]<<'\n';
    //cout<<"&matriz[0][0]: "<<&matriz[0][0]<<'\n';
    //cout<<"&matriz[0][1]: "<<&matriz[0][1]<<'\n';
    //cout<<"&matriz[0][2]: "<<&matriz[0][2]<<'\n';
    //cout<<"&matriz[1]: "<<&matriz[1]<<'\n';
    
	//puntero = matriz[0];
	//cout<<'\n'<<"puntero = matriz[0]"<<'\n';
	//for(int i = 0; i < 3; i++)
    //{
    //    for(int j = 0; j < 3; j++)
    //    {
    //    	cout<<'\t'<<"*(puntero+"<<j<<"+("<<i<<"*3)): "<<*(puntero+j+(i*3));
    //    	cout<<'\t'<<"puntero+"<<j<<"+("<<i<<"*3): "<<puntero+j+(i*3)<<'\n';
	//	}
    //}
    
	puntero = new int(123);
	cout<<'\n'<<"puntero = new int(123)"<<'\n';
	cout<<"*puntero: "<<*puntero<<'\n';
	cout<<"puntero: "<<puntero<<'\n';
	delete puntero;
	
	int *array = new int[10]{0,2,4,6,8,10,12,14,16,18};
	cout<<'\n'<<"int *array = new int[10]{0,2,4,6,8,10,12,14,16,18}"<<'\n';
	for(int i = 0; i < 10; i++)
    {
        cout<<'\t'<<"*(array+"<<i<<"): "<<*(array+i);
        cout<<'\t'<<"array+i"<<i<<": "<<array+i<<'\n';
    }
    delete [] array;
    cout<<"delete [] array;"<<'\n';
    
	//int filas = 3;
	//int columnas = 3;
	//int **matrix = new int*[filas];
	//for(int i = 0; i < filas; i++)
	//{
	//	matrix[i] = new int[columnas]{1+i*3,2+i*3,3+i*3};
	//}
	//cout<<'\n'<<"int **matrix = new int*[filas];"<<'\n';
	//cout<<'\t'<<"for(int i = 0; i < filas; i++)"<<'\n';
	//cout<<'\t'<<"matrix[i] = new int[columnas]{1*(i+1),2*(i+1),3*(i+1)};"<<'\n';
	//cout<<'\n'<<"matrix: "<<matrix<<'\n';
	//cout<<"&matrix: "<<&matrix<<'\n';
	//cout<<"matrix[0]: "<<matrix[0]<<'\n';
    //cout<<"&matrix[0]: "<<&matrix[0]<<'\n';
    //cout<<"matrix[0][0]: "<<matrix[0][0]<<'\n';
    //cout<<"&matrix[0][0]: "<<&matrix[0][0]<<'\n';
    //cout<<"&matrix[0][1]: "<<&matrix[0][1]<<'\n';
    //cout<<"&matrix[0][2]: "<<&matrix[0][2]<<'\n';
    //cout<<"&matrix[1]: "<<&matrix[1]<<'\n';
	//for (int i = 0; i < filas; i++)
    //{
    //	delete[] matrix[i];
	//}
	//delete[] matrix; 
}
