/*Escribe un programa que defina una matriz 3x3 y escriba un ciclo para que muestre la diagonal principal  de la matriz.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[3][3],n;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Escribe un número para la posición ["<<i<<"]"<<"["<<j<<"]";
            cin>>numeros[i][j];
        }
        
    }
    cout<<"\nLa diagonal principal de la matriz es: "<<numeros[0][2]<<numeros[1][1]<<numeros[2][0];
    getch();
    return 0;
} 