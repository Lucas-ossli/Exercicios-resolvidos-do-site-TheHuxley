#include <iostream>
using namespace std;

//link do exercício: https://www.thehuxley.com/problem/2197?locale=pt_BR

int main(){
	
	int n,numero;
	
	
	cin>>n;
	
	
	char linhas[n];
	char m[n];
	
	for(int i=0 ; i<n ; i++){
		cin>>numero;
        cin>>m[i];
        linhas[numero] = m[i];
	}
	
	for(int i=1 ; i<=n ; i++){
		cout<<linhas[i];
	}
	
	return 0;
}
