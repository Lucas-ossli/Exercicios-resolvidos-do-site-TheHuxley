#include <iostream>
using namespace std;

//Link do exerc�cio: https://www.thehuxley.com/problem/2630?locale=pt_BR
main(){
	
	int a,b,c;
	cout<<"Digite o valor do primeiro �ngulo:";
	cin>>a;
	cout<<"\nDigite o valor do segundo �ngulo:";
	cin>>b;
	cout<<"\nDigite o valor do terceiro �ngulo:";
	cin>>c;
	
	
	if(a == 90 || b == 90 || c == 90){
		cout<<"\nEste e um triangulo retangulo.";
	}
	else if(a>90 || b>90 || c>90){
		cout<<"\nEste e um triangulo obtusangulo.";
	}
	else{
		cout<<"\nEste e um triangulo acutangulo.";
	}
	
	
	return 0;
}