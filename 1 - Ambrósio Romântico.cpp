#include <iostream>
using namespace std;

//Link do exercício: https://www.thehuxley.com/problem/2412?locale=pt_BR
int main(){
	
	//ele precisa agora verificar se existem duas opções entre 
	//	suas idéias, que somadas, combinem na extravagância perfeita.
	
	//Faça um programa que mostre se é possível deixa-la feliz com as opções que Ambrósio pensou.
	
	
	int n,e,teste;
	bool a=false;
	// n= numero de idéias
	// e = extravagância perfeita 
	
	cin>>n>>e;
	if((n<=1) || (n>1000)){
		cout<<"NAO";
		return 0;
	}
	
	int g[n];
	
	for(int i=0 ; i<n ; i++){
		cin>>g[i];
	}
	
	for(int i=0 ; i<n ; i++){
		//g[primeira casa]{loop de add das casas seguintes}
		for(int x=0 ;x<n; x++){
			if(i!=x){
			teste = g[i] + g[x];
			   
			   if(teste==e){
				a=true;}
			    	
		    }
		}
		
	}
	if(a)
	cout<<"SIM";
    else if(!a)
		cout<<"NAO";
		
		
	
	return 0;
}