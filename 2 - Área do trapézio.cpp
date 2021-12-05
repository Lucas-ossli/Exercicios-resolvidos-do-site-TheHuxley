#include <iostream>
#include <stdio.h>
using namespace std;

//Link para o exercício: https://www.thehuxley.com/problem/2805?locale=pt_BR

main(){
	
	int bmaior,bmenor,altura;
	float a;
	cout<<"Digite a base menor:";
	cin>>bmenor;
	cout<<"\nDigite a base maior:";
	cin>>bmaior;
	cout<<"\nDigite a altura:";
	cin>>altura;
	//A = ((BMAIOR + BASE MENOR) * ALTURA ) /2
	a= ((bmaior+bmenor)*altura);
	a = a/2;
	
	printf("\nArea do trapezio: %.6f", a);
	
	return 0;
}