#include<iostream>

using namespace std;

class arreglo
{
    public:
        int *key;
        int max;
        int size;

        arreglo(int s)
        {
            key=new int(s);
            this->max=s;
            this->size=0;
        }
 
        void insertar_fin(int k);
        void elimina_inicio();
        void buscar(int k);
        void imprimir();
};

void arreglo::insertar_fin(int k)
{
    if(this->size<this->max)
    {
        this->key[size]=k;
        this->size++;
    }
    else
        cout<<"OVERFLOW"<<endl;
}

void arreglo::elimina_inicio()
{
    if(this->size!=0)
    {
        for(int i=1;i<this->size;i++)
            this->key[i-1]=this->key[i];
        this->size--;
    }
    else
        cout<<"UNDERFLOW"<<endl;
}

void arreglo::buscar(int k)
{
    for(int i=0;i<this->size;i++)
        if(this->key[i]==k)
        {
            cout<<k<<" ENCONTRADO"<<endl;
            return;
        }
    cout<<k<<" NO encontrado"<<endl;
}

void arreglo::imprimir()
{
    for(int i=0;i<this->size;i++)
        cout<<this->key[i]<<endl;
}


