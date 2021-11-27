#include <iostream>
using namespace std;

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