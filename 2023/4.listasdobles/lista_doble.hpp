using namespace std;

class lista_doble
{
	public:
		nodo *head;
		nodo *tail;
		
		lista_doble()
		{
			this->head=NULL;
			this->tail=NULL;
		}
	
		void insertar_inicio(int k);
		void insertar_fin(int k);
		void imprimir();
		void imprimir_al_reves();
		void eliminar(int k);
};

void lista_doble::insertar_inicio(int k)
{
	nodo *x=new nodo(k);
	x->prev=NULL;
	x->next=this->head;
	if(this->head!=NULL)
	{
		this->head->prev=x;	
	}
	this->head=x;
	if(this->tail==NULL)
	{
		this->tail=x;
	}
}

void lista_doble::insertar_fin(int k)
{
	nodo *x=new nodo(k);
	x->prev=this->tail;
	x->next=NULL;
	if(this->tail!=NULL)
	{
		this->tail->next=x;	
	}
	this->tail=x;
	if(this->head==NULL)
	{
		this->head=x;
	}	
}

void lista_doble::imprimir()
{
	nodo *x=this->head;
	while(x!=NULL)
	{
		cout<<x->key<<" ";
		x=x->next;
	}
	cout<<endl;
}

void lista_doble::imprimir_al_reves()
{
	nodo *x=this->tail;
	while(x!=NULL)
	{
		cout<<x->key<<" ";
		x=x->prev;
	}
	cout<<endl;
}

void lista_doble::eliminar(int k)
{
	nodo *x=this->head;
	while(x!=NULL and x->key!=k)
	{
		x=x->next;
	}
	if(x!=NULL)
	{
		if(x->prev!=NULL)
		{
			x->prev->next=x->next;
		}
		else
		{
			this->head=x->next;
		}
		if(x->next!=NULL)
		{
			x->next->prev=x->prev;
		}
		else
		{
			this->tail=x->prev;
		}
		delete x;
	}
}
