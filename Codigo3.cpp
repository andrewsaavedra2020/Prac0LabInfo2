// Codigo número 3
#include <iostream> //encabezado
using namespace std;
int main()  //inicio
{
    for(int i = 0; i < 4; ++i) /*se utiliza un ciclo for donde i toma valores de 0 hasta 3 
    los cuales van incrementando de uno en uno
    se evalua el valor de la variable i dentro de un condicional switch 
    cuando i=0 se imprime el 0, como no hay ninguna sentencia se imprime
    el caso siguiente case 1="1", luego aparece la sentencia continue
    la cual ignora lo que resta de codigo e inicia el ciclo ahora i=1 por tanto se imprime el 1
    se ignora nuevamente lo que resta de codigo.
    ahora cuando i=2 se imprime el 2, hay una sentencia break que hace que la sentencia switch
    se termine por lo que luego se imprime el *
    cuando i=3 se imprime la opcion por default que es una D, hay un break, con lo cual 
    la sentencia switch finaliza, luego se imprime la instruccion contenida dentro del for, cout<<"*"
    por tanto la secuencia final de caracteres que se imprime en pantalla es 0112*D*
    */
    {
        switch(i) 
        {
            case 0: cout<<"0";
            case 1: cout<<"1"; continue;
            case 2: cout<<"2"; break;
            default: cout<<"D"; break;
        }    
        cout<<"*";
    }
    return 0;
} //fin
