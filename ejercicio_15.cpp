/* Escribe un programa en c++ que lea la entrada estándar de un vector de números y muestre en la salida estándar los números del vector con sus índices asociados. */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int lista[100],n;
    cout << "Escribe un número ";cin >> n;
    for (int i=0; i<n;i++)
    {
        cout<<"Digite un número ";
        cin>>lista[i];
    }
    
  for (int i = 0; i < n; i++)
  {
    cout<<i<<" -> "<<lista[i]<<endl ;
  }
    system("Pause");
    return 0;

}