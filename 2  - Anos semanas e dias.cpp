#include <iostream>
using namespace std;

//Link para o exercício: https://www.thehuxley.com/problem/3572?locale=pt_BR
main(){
	int a,x,y,z;
	//x = anos
	//y = semanas
	//z =  dias
	cin>>a;
	
	x = a/365;
	y = (a%365) /7;
	z = (a%365)%7;
	
	cout<<x<<" ano(s), "<<y<<" semana(s) e "<<z<<" dia(s)";
	
	
	
	
	return 0;
}