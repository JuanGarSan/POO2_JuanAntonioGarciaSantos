#include <iostream>
using namespace std;

void calcularEdad(int anioAct, int mesAct, int fechAct, int anioNac, int mesNac, int fachNac);

int main (){
	
	setlocale(LC_CTYPE, "Spanish");
	int anioAct;
	int mesAct;
	int fechAct;
	
	int anioNac;
	int mesNac;
	int fechNac;
	
	cout<<"\n\nPrograma que calcula edad, mes, dias\n\n";
	cout<<"ingrese el anio actual: "; 
	cin>>anioAct;
	cout<<"ingrese el mes actual: "; 
	cin>>mesAct;
	cout<<"ingrese la fecha actual: "; 
	cin>>fechAct;
	
	cout<<"ingrese el anio de nacimiento: "; 
	cin>>anioNac;
	cout<<"ingrese el mes de nacimiento: "; 
	cin>>mesNac;
	cout<<"ingrese la fecha de nacimiento: "; 
	cin>>fechNac;
	
	calcularEdad(anioAct, mesAct, fechAct, anioNac, mesNac, fechNac);
	
	return 0;
}

void calcularEdad(int anioAct, int mesAct, int fechAct, int anioNac, int mesNac, int fechNac){
	int respFech, respMes;
	if(fechAct < fechNac){
		fechAct = fechAct + 30;
		mesAct = mesAct - 1;
		respFech = fechAct - fechNac;
	}
	else 
	respFech = fechAct - fechNac;
	
	if (mesAct < mesNac){
		mesAct = mesAct + 12;
		anioAct = anioAct - 1;
		respMes = mesAct - mesNac;
	}
	else 
		respMes = mesAct - mesNac;
		
	cout<<"\nUsted tiene: \n";
	cout<<"Edad: "<<anioAct - anioNac<<endl;
	cout<<"Mes: "<<respMes<<endl;
	cout<<"Dia: "<<respFech<<endl;
}
