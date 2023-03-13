#include <iostream>

#include <conio.h>

void hanoi(int num, char A, char C, char B){
	if(num==1){
		cout<<"\n Mueva el bloque "<<num<<" desde "<<A<<" hasta"<<C<<endl;
	}else{
		hanoi (num-1, A, B, C);
		cout<<"\n Mueva el bloque "<<num " desde "<<A<<" hasta"<<C<<endl;
		hanoi(num-1, B, C, A);
	}
}
void main(){
	int n;
	char A, B, C;
	cout<<"\n   Torres de Hanoi \n\n";
	cout<<"\n Los haros son A B C \n";
	cout<<"\n los aros son A B C \N";
	cout<<"\n Numero de aros \n";
	cin>>n;
	cout<<"\n";
	hanoi(n, 'A', 'C', 'B')
	getch();
}
