#include <iostream>
using namespace std;

bool primo(int n){
	bool condicion;
	if(n != 1 && n!=0){
		for(int i =2; i <=n; i++){
			if(n==i){
				if(n==i){
					condicion = true;	
				}else{
					condicion = false;
					return condicion;
				}
			}
		}
	}else condicion = false;
	
	return condicion;
}

int main(){
	int n;
	
		cout<<"ingrese que numero buscar"<<endl;
		cin>>n;
		
		for(int i=1; i <=n; i++){
			if(primo(i)) cout<<i<<endl;
			
			
		}
}
