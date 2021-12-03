#include <iostream>
using namespace std;

//Link para o exercício: https://www.thehuxley.com/problem/938



main(){
	
	int k=0;
	float a;
	
	for(int i=0 ; i<5 ; i++ ){
		
		cin>>a;
		if(a<0){
			k++;
		}
	}
	cout<<"Digite um valor:\nDigite um valor:\nDigite um valor:\nDigite um valor:\nDigite um valor:\nForam digitados "<<k<<" numeros negativos";

	
	
	return 0;
}
