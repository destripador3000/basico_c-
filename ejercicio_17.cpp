/*Escribe un programa que lea la entrada estandár de un vector de enteros y determine el mayor elemento del vector*/
#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    int numeros[100],n,mayor=0;
    cout << " Digite el número de elementos del arreglo: ";cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << "Digite un número: ";cin>>numeros[i]; 
        if (numeros[i] >mayor)
        {
            mayor = numeros[i];
        }
    }
    cout << "\nEl mayor elemento del vector es " << mayor<<endl;



    getch();
    return 0;
}