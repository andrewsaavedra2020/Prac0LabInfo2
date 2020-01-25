// Codigo número 2
#include <iostream> //Encabezado

using namespace std;

int main() //inicio de programa
{
    int i = 1, j = 2; //declaracion e inicializacion de variables
    
    if(i > j && j > i) //1>2 y 2>1 no se cumplen las dos condiciones de manera simultanea 
        i++;           //por tanto el valor de i no incrementa
    if(i > j || j > i) //1>2 o 2>1 se cumple al menos una de las condiciones por tanto
        j++;           //j incrementa y toma el valor 3
    if(i | j)          //es valida la operacion binaria por tanto i incrementa y toma el valor i=2
        i++;
    if(i & j)         //es valida la operacion binaria por tanto j incrementa y toma el valor j=4
        j++;
    
    cout<<i * j<<endl; //se imprime el resultado final en pantalla i*j = 2*4 = 8
    return 0;
}// fin de programa
