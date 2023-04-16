#include<bits/stdc++.h>

using namespace std;

struct nodo
{
	int key;
	nodo *next;
};

class lista_simple
{
	public:
		nodo *head;
		
		lista_simple()
		{
			head = NULL;
		}
		
		void insertar_inicio(int k);
		void insertar_fin(int k);
		void imprimir();
		void eliminar_key(int k);
		int buscar_key(int k);
};

void lista_simple::insertar_inicio(int k)
{
	nodo *x = new nodo;
	x->key = k;
	x->next = this->head;
	head = x;
}

void lista_simple::insertar_fin(int k)
{
	if(this->head == NULL)
	{
		this->insertar_inicio(k);
	}
	else
	{
		nodo *x = this->head;
		while(x->next != NULL)
		{
			x = x->next;
		}
		nodo *y = new nodo;
		y->key = k;
		y->next = x->next;
		x->next = y;
	}
}

void lista_simple::imprimir()
{
	nodo *x = this->head;
	int count = 0;
	while(x != NULL)
	{
		cout<<x->key<<' ';
		x = x->next;
		count++;
	}
	cout<<endl;
}

void lista_simple::eliminar_key(int k)
{
	if(this->head != NULL)
	{
		nodo *x = this->head;
		if(x->key == k)
		{
			this->head = this->head->next;
			delete x;
		}
		else
		{
			while(x->next != NULL and x->next->key != k)
			{
				x = x->next;
			}
			if(x->next != NULL)
			{
				nodo *y = x->next;
				x->next = x->next->next;
				delete y;
			}
		}
	}
}

int lista_simple::buscar_key(int k)
{
	nodo *x = this->head;
	while(x != NULL and x->key != k)
	{
		x = x->next;
	}
	if(x != NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
