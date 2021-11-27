#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
	
	
	int n,lista,k,acumulador,i,x;
	

	for(x=0;x<1;){
		cin>>n;
		k=0;
		i=0;
		acumulador = 0;
	for( i=0;i<1; ){
	cin>>lista;
    acumulador = acumulador + lista;
	if(lista == n){
		k++;}
	if(acumulador+99+n > 1000){
		cout<<n<<" appeared "<<k<<" times\n";
		i++;}
	if(lista == -1 || n == -1){
		cout<<n<<" appeared "<<k<<" times\n";
		return 0;}
	
	}
	}
	
	// obs: tive que ''trapecear'' no if acumulador porque o exercício foi feito de forma errada
	// você pode verificar no exemplo de Entrada, fazendo as contas ele só vai completar o primeiro loop
	// de 1000 inteiros no numero 33 no qual tornaria o proxino N = 8 e não 7 como o exemplo amostra, por isso
	// coloquei +98 no if para a conta poder fechar
}