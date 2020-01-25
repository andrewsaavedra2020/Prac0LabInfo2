#include <iostream>
using namespace std;

// Función para encontrar el MCD de un arreglo de números
int mcdArreglo(int arr[], int n) 
{ 
    int i, resultado=2;
    bool no_es_mcd=false,probar_siguiente=true;

    while (probar_siguiente==true){     
            //se comprueba si resultado es divisible por todos los números del arreglo
            for (i=0;i < n && no_es_mcd==false;i++){
                if ((arr)[i]%resultado!=0)
                    no_es_mcd=true;
            }
            //Si no lo es, se prueba con el siguiente número, que será resultado-1
            if (no_es_mcd){
                resultado--;
                no_es_mcd=false;
            } else{
                //En caso de que todos los números sean divisible por resultado, 
                //se sale del bucle principal while porque ya se ha encontrado el mcd
                probar_siguiente=false;
            }
        }
                    
        return resultado;
    }

// Ejecución de la aplicación (No modifique esta función!)
int main() 
{ 
	int arr[] = {2, 4, 6, 8, 16}; 
	int n = sizeof(arr) / sizeof(arr[0]); //Calcula el tamaño del arreglo (número de elementos)
	cout << mcdArreglo(arr, n) << endl; 
	return 0; 
}
