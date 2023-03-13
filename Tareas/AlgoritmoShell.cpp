#include<iostream>
using namespace std;

void Imprimir(int [], int n);
void Shell(int[], int n);

int main(){
	
	int total;
	cout<<"Cuantos numeros tiene el arreglo"<<endl;
	cin>>total;
	int num[total];
	for(int i=0; i<total; i++){
		
		cout<<"Ingrese el numero [ "<<(i+1)<<" ] del arreglo"<<endl;
		cin>>num[i];
		
	}
	
	Shell(num, total);
	Imprimir(num, total);
}

void Shell(int a[], int n){
	int ints, i, aux;
	bool band;
	
	ints=n;
	
	while(ints>1){
		ints=(ints/2);
		band=true;
		
		while (band==true){
			band=false;
			i=0;
			while((i+ints)<=n){
				if(a[i]>a[i+ints]){
					aux=a[i];
					a[i]=a[i+ints];
					a[i+ints]=aux;
					band=true;
				}
			i++;	
			}
		}
	}
}
void Imprimir(int a[], int n){
	cout<<"Numeros del arreglo ordenandos de Menor a Mayor"<<endl;
	
	for(int i=0; i<n; i++)
		cout<<"[ "<<a[i]<<" ]";
}
