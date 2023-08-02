/*Ejercicio bucles*/

#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
    int numero,contador=0;
    
    
    do
    {
        cout<<"Escribe un número: ";
        cin>>numero;
        if (numero>0)
        {
            cout<<numero<<endl;
            contador++;
           
        }
        
    } while ( numero !=0);
    cout << "La cantidad de números positivos ingresados es: " << contador;
    cout<< "\n";
    system("pause");
    
    
    return 0;
}