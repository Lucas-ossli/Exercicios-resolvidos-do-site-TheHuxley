#include <iostream>
using namespace std;

//Link do exerc�cio: https://www.thehuxley.com/problem/2412?locale=pt_BR
int main(){
	
	//ele precisa agora verificar se existem duas op��es entre 
	//	suas id�ias, que somadas, combinem na extravag�ncia perfeita.
	
	//Fa�a um programa que mostre se � poss�vel deixa-la feliz com as op��es que Ambr�sio pensou.
	
	
	int n,e,teste;
	bool a=false;
	// n= numero de id�ias
	// e = extravag�ncia perfeita 
	
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