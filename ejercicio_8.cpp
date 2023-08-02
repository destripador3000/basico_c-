/*Escribe un programa que calcule la suma de los números hasta "n" de la siguiente manera 1+3+5 */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){ int n, suma=0, i;

cout<<"Ingrese un número  "; cin>>n;

  for (int i=1; i<=n; i+=2) {
      
      suma=suma+i+((2*n)-1);
  }
   
   cout<<"Este es el resultado  "<<suma<<endl;

    return 0;
     }