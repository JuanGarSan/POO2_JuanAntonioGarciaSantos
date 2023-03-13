/* ejemplo de dos pilas 


el programa consiste en crear
un menu con 4 opcones para 
ampliar, ver, unir y salir*/


#include<iostream>
#include<conio.h>

//la estructura del nodo
struct nodo{
	int nro;
	struct nodo *siguiente;
};

//definir un tipo de estructura
typedef nodo *pila;

//metodos recordando que tengo dos pilas

void imprimir1(pila);
void imprimir2(pila);
void eliminarPila(pila &);
void push(pila &, int);
void unirPilas(pila, pila);
int pop(pila &);

main(){
	pila p1 = NULL;
	pila p2 = NULL;
	pila p3 = NULL;
	
	int opc, n, valores, i;
	
	do{
		cout<<"1.- Apilar \n";
		cout<<"2.- Ver valores de la pila \n";
		cout<<"3.- nir pilas \n";
		cout<<"4.- Salir \n";
		cout<<"Ingresa la opcion deseada: \n";
		
		cin>>opc
		
		switch(opc){
			case 1: 
			cout<<"Ingresa el limite de la pila: ";
			cin>>n;
			cout<<"Ingresa los valores pila 1: ";
			for(i = 0; i < n; i++){
				cout<<"Elemento : "endl;
				cin>>valor;
				//meter
				push(p1, valor);
			} 
			cout<<"Ingresa los valores pila 2: ";
			for(i = 0; i < n; i++){
				cout<<"Elemento : "endl;
				cin>>valor;
				//meter
				push(p2, valor);
			} 
			break;
		case 2:
			cout<<"Contenido de la pila 1\n";
			imprimir 1(p1);
			cout<<"Contenido de la pila 1\n";
			imprimir 2(p2);
			break;
		case 3: 
			cout<<"Pilas unidas \n";
			unirPilas(p1, p2);
			break;
			
		}
	}while(opc!=4);
}


//push
void push(pila &p, int n){
	pila q = new(struct nodo);
	q -> nro= n;
	q ->siguiente = p;
	p = q;
}

void unirPilas(pila p1, pila p2){
	pila q = p1;
	while(q->siguiente != NULL){
		q = q->siguiente;
		q->siguiente = p2;
	}
}


void imprimir1(pila p1){
	while(p1!=NULL){
		cout<<"Valor: "<<p1->nro<<endl;
		p1=p1->siguiente;
	}
	
}
void imprimir2(pila p1){
	while(p2!=NULL){
		cout<<"Valor: "<<p2->nro<<endl;
		p2=p2->siguiente;
	}
}
