#include <iostream>
#include <string>
#include<cstdio>
#include <sstream>

using namespace std;

bool EsUnNumero(string cadena)
{
  bool auxiliar= false;
  bool esnumero= true;
  for( int i=1; i <cadena.length(); i++ )
  {
    if( '0' > cadena[i] || '9' < cadena[i] )
      esnumero= false;
  }
 if(cadena[0] == '-' || !( '0' > cadena[0] || '9' < cadena[0])){
  auxiliar = true;
  }
  
  cout<<"aux"<<auxiliar<<" esnumero"<<esnumero<<endl;
  if(auxiliar && esnumero) {
    return true;
  }
  else{
      return false;
  }
}

int main(int argc, char** argv) {
string cadena;
cout<<"Ingrese un numero "<<endl;
getline(cin,cadena);
    if(cadena.length()>10) {
cout<<"La longitud de cadena es mayor a la soportad la longitud no debe ser mayor a 10: "<<endl;
     }else {
      if(EsUnNumero(cadena)){
      cout<<" es un numero "<<endl;
      int num1;
      istringstream(cadena) >> num1;
      cout<<"numero convertido: "<<num1<<endl;
   
}else {
cout<<"no es un numero "<<endl;
   
}
}
return 0;
}
