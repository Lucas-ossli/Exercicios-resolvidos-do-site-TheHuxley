#include <iostream>
#include <stdio.h>
using namespace std;

//link do exerc�cio: https://www.thehuxley.com/problem/3400?locale=pt_BR

main(){
	
	float ri,re;
	const float pi=3.14159265359;

	
	cin>>ri>>re;
	
	//A = pi r�
	
	printf("%.2f",  (pi*(re*re))-(pi*(ri*ri))   );
	
	return 0;
}