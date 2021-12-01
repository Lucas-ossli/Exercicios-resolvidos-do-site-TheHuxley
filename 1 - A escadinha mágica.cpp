#include <iostream>
using namespace std;

main(){
	//Zelda e seus amigos tiveram uma brilhante ideia durante as aulas
    //da monitoria da cadeira de introdução a programação: que tal fazer 
	//um programa que, dado um número n (1 <= n <= 40) printa na tela os
	// numeros de 1 até o número da iteração atual, sendo que serão feitas 
	//n iterações, como demonstrado no exemplo a seguir:
	
	int n;
	
	cin>>n;
	
	for(int x=1 ; x<=n ; x++){
	for(int i=1; i<=x ; i++){
		cout<<i;
		if(i != x){
			cout<<" ";
			
		}
		
		}
		cout<<"\n";
	
	}
	
	//A sequência (1 ... M), onde M é o numero da iteração 
	//atual do laço, que será executada n vezes.
	return 0;
}
