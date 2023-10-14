/*Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplizados por 2 y muestre el segundo arreglo*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[5], n;
    int numeros2[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Escribe un número: ";
        cin >>numeros[i];
    }
    for (int i = 0; i < 5; i++)
    {
        numeros2[i]+=numeros[i]*2;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "La multiplicación de los números por 2 es: "<<numeros2[i]<<endl; 
    }
    
    getch();

    return 0;
}
