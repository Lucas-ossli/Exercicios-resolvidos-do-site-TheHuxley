#include <iostream>
using namespace std;

main(){
	//Zelda e seus amigos tiveram uma brilhante ideia durante as aulas
    //da monitoria da cadeira de introdu��o a programa��o: que tal fazer 
	//um programa que, dado um n�mero n (1 <= n <= 40) printa na tela os
	// numeros de 1 at� o n�mero da itera��o atual, sendo que ser�o feitas 
	//n itera��es, como demonstrado no exemplo a seguir:
	
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
	
	//A sequ�ncia (1 ... M), onde M � o numero da itera��o 
	//atual do la�o, que ser� executada n vezes.
	return 0;
}
