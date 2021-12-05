#include <iostream>
#include <stdio.h>
using namespace std;

//link do exercício: https://www.thehuxley.com/problem/3400?locale=pt_BR

main(){
	
	float ri,re;
	const float pi=3.14159265359;

	
	cin>>ri>>re;
	
	//A = pi r²
	
	printf("%.2f",  (pi*(re*re))-(pi*(ri*ri))   );
	
	return 0;
}