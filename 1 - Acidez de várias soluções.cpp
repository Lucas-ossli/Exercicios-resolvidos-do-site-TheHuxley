#include <iostream>
using namespace std;

main(){
    //ACIDA (pH menor que 7), BASICA (pH maior que 7), ou NEUTRA (pH igual a 7).
    float pH;

    for(int i=0;i<1; ){
        cin>>pH;
        if(pH == -1){
            i++;
            return 0;
        }
        else if(pH<7){
            cout<<"ACIDA\n";
        }
        else if(pH==7){
            cout<<"NEUTRA\n";
        }
        else{
            cout<<"BASICA\n";
        }

    }


    return 0;
}