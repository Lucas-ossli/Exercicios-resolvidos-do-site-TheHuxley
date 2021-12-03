#include <iostream>
using namespace std;


//Link para o exercício: https://www.thehuxley.com/problem/1062


main(){
	
	float pH;
	cin>>pH;
	
	if(pH<7)
		cout<<"Acida";
	else if(pH>7)
		cout<<"Basica";
	else
		cout<<"Neutra";
	
	
	return 0;
}
