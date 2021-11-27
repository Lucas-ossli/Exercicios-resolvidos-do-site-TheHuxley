#include <iostream>
using namespace std;

int main(){
	
	float a,b,c,media;
	int acumulador=0;
	cin>>a;
	cin>>b;
	cin>>c;
	
	media = (a+b+c)/3;
	
	if (a>media)
		acumulador++;
	if(b>media)
		acumulador++;
	if(c>media)
		acumulador++;
	
	cout<<acumulador;
		
		
		
	
		return 0;
	
}