#include <iostream>
#include <stdio.h>
using namespace std;

main(){

	//Link para o exercício: https://www.thehuxley.com/problem/385?locale=pt_BR
	
	int matricula,menor_matricula,i;
	float cre,menor,acumulador;
	//k =  acumulador de quantidade de canditados
	acumulador = 0;
	
	cin>>matricula>>cre;
	
	menor=cre;
    menor_matricula =  matricula;
    acumulador = acumulador+cre;
	i=1;
	// não usei nada no for, pois oq ira fazer o loop parar vai ser a entrada: 999
	for( ; ; ){
		
		cin>>matricula;
		
		if(matricula == 999){
			
			printf("%d\n%.2f", menor_matricula, (acumulador/i));
			
			return 0;
		}
		cin>>cre;
		
		if(cre<menor){
			menor=cre;
			menor_matricula =  matricula;
		}
		
		acumulador = acumulador+cre;
		i++;
	
	}
	
	
	return 0;
}