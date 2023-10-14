/*Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos*/

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
    int numeros[]={2,5,6,7,12};
    int multiplicacion = 1;
    for (int i = 0; i < 5; i++)
    {
        multiplicacion*=numeros[i];
    }

    cout<<"La multiplicación de los números en el vector es: "<<multiplicacion<<endl;
    cout<<"\n";
    getch();
    return 0;


}