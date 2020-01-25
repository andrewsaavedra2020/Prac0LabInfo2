// Codigo número 1
#include <iostream> //Encabezado

using namespace std;

int main() //inicio de programa
{
    int i = 10;
    float a = 1000.0; //declaracion e inicializacion de variables
    
    /*mientras se cumpla que i>0 entonces se ejecutan las instrucciones contenidas en el ciclo while
    como inicialmente i=10 entonces se cumple la condicion por tanto i=10/2=5 a=1000.0/10=100
    la condicion se sigue cumpliendo por tanto i=5/2=2 a=100/10=10
    i sigue siendo mayor que cero por tanto i=2/2=1 a=10/10=1
    se sigue cumpliendo la condicion por tanto i=1/2=0 a=1/10=0.10
    en este punto i deja de ser mayor que cero y se termina el ciclo por lo cual el 
    resultado final de la variable a es 0.1
    */
    
    while(i > 0)
    {
        i /= 2;
        a /= 10;
    }
    
    cout<<"El valor final de la variable 'a' es: "<<a<<endl;
    return 0;
}// fin de programa
