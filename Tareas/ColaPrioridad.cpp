#include <iostream>
#include <stdlib.h>

using namespace std;



struct nodo{
	char dato;
	int prioridad;
	struct nodo * siguiente;
};



struct cola{
	nodo *delante;
	nodo *atras;
};



struct nodo *crearNodo(char x, int pri){

	struct nodo *nuevoNodo = new (struct nodo);
	nuevoNodo->dato=x;
	nuevoNodo->prioridad=pri;
	return nuevoNodo;
}


void encolar(struct cola &q, char valor, int priori){
	
	struct nodo *aux = crearNodo(valor, priori);
	aux->siguiente=NULL;
	
	if(q.delante == NULL){
		
		q.delante=aux;
	}else{
		(q.atras)->siguiente = aux;
	}
	
	q.atras = aux;
}


void mostrarCola(struct cola q){
	
	struct nodo *aux;
	
	aux = q.delante;
	
	cout<<"\n Caracter de Prioridad\n";
	
	while(aux!=NULL){
		
		cout<<" "<<aux->dato<<" | "<<aux->prioridad<<endl;
		aux = aux->siguiente;
	} 
}


void ordenarPrioridad(struct cola &q){
	
	
	struct nodo *aux1, *aux2;
	int p_aux;
	char c_aux;
	
	aux1 = q.delante;
	
	while(aux1->siguiente != NULL){
		aux2 = aux1->siguiente;
		while(aux2!=NULL){
			if(aux1->prioridad > aux2->prioridad){
				p_aux = aux1->prioridad;
				c_aux = aux1->dato;
				
				aux1->prioridad = aux2->prioridad;
				aux1->dato = aux2->dato;
				
				aux2->prioridad = p_aux;
				aux2->dato = c_aux;
			}
			aux2=aux2->siguiente;
		}
		aux1 = aux1->siguiente;
	}
}

void insertar(struct cola &q, char c, int pri){
	
	
	encolar(q, c, pri);
	
	
	ordenarPrioridad(q);
	
}

void menu(){
	cout<<"\n Ejemplo de colas de prioridad\n";
	cout<<"1.- En espera \n";
	cout<<"2.- Mostrar lista de espera\n";
	cout<<"3.- Salir\n";
}

int main(){
	struct cola q;
	
	q.delante = NULL;
	q.atras = NULL;
	
	char c; 
	int priori; 
	int op; 
	int x; 
	
	do{
		menu();
		cin>>op;
		switch(op){
			case 1:
				cout<<"\n Ingrese tipo de cuenta: \n";
				cin>>c;
				/*
				las cuentas estaran en numeradas segun sean su caso
				Si son cuentas con tarjeta azul tendran la letra A
				Si son cuentas con tarjeta oro tendra la letra O
				Si son cuentas con tarjeta Platinum tendran las letras P
				*/
				cout<<"\n Ingrese su Turno: \n";
				cin>>priori;
				insertar(q, c, priori);
				
				cout<<"\n Cuenta: "<<c<<" encolada\n";
				break;
			case 2:
				cout<<"\n Mostrar cuentas: \n";
				if(q.delante!=NULL){
					mostrarCola(q);
				}else{
					cout<<"\n La cola esta vacia\n";
				}
				break;
			default:
				cout<<"Ingrese una opcion valida\n";
				system("pause");
				exit(0);			
		}
		system("pause");
		system("cls");
	}while(op!=3);
	return 0;
}
