#include <iostream>
#include <stdio.h>
using namespace std;

main(){
    //mais de 2 veículos em R$ 12.89 por mês por cada veículo extra

    

    int veiculos,residencia=0;
    float acumulador=0;
    
    for(int i=0 ; i<1 ; ){
        cin>>veiculos;
        if(veiculos == 999){
        	
           printf ("%.2f\n%d", acumulador, residencia);
            return 0;
        }
        if(veiculos>2){
            acumulador = acumulador+((veiculos-2)*12.89 ) ;
            residencia ++;
        }
        

    }
    //e exiba o total mensal arrecadado com as multas, e a quantidade de casas multadas.
    
    
    //Escreva um programa que receba como entrada a quantidade de veículos 
    // de várias residências, até que seja informado o valor 999, e exiba o 
    //total mensal arrecadado com as multas, e a quantidade de casas multadas 

    return 0;
}