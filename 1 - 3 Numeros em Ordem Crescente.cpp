#include <iostream>
using namespace std;


//Link para o exercício: https://www.thehuxley.com/problem/2


main(){
    int a,b,c;

    cin>>a>>b>>c;

    
 
   //a b c
   //a c b
    if(a<=b && a<=c){
        if(b<=c){
            cout<<a<<"\n"<<b<<"\n"<<c;
        }
        else{
            cout<<a<<"\n"<<c<<"\n"<<b;
        }
    }
    //b a c
    //b c a
    else if(b<=a && b<=c){
        if(a<=c){
            cout<<b<<"\n"<<a<<"\n"<<c;
        }
        else{
            cout<<b<<"\n"<<c<<"\n"<<a;
        }
    }

    //c a b
   // c b a
    else if(c<=b && c<=a){
        if(a<=b){
            cout<<c<<"\n"<<a<<"\n"<<b;
        }
        else{
            cout<<c<<"\n"<<b<<"\n"<<a;
        }
    }
 
 
    return 0;
}
