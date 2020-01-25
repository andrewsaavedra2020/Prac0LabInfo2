#include <iostream>
using namespace std;

int mcd(int a, int b){ 

    if (a==0){
        
        return b;
    }
    return mcd(b%a, a);
}

int main()
{
    int a, b; 
    cout<<"Ingrese el numero 1: ";
    cin>>a;
    cout<<"Ingrese el numero 2: ";
    cin>>b;
    cout<<"El Máximo Común Divisor es: "<<mcd(a,b);
    return 0;
}

