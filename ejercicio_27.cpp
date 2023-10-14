/*Desarrollar un programa que determine si una matriz es simetrica o no. Una matriz es simétrica si es cuadrada y si es igual  a su matriz transpuesta.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas;
    char bandera='F';
    cout << "Digite el número de filas: ";
    cin >>filas;
    cout << "Digite el número de columnas: ";
    cin>>columnas;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<< "Digite un número ";
            cin>>numeros[i][j];
        }
        
    }
    if (filas ==columnas)
    {
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j <columnas; j++)
            {
                if (numeros[i][j]==numeros[j][i])
                {
                    bandera='V';
                }
                
            }
            
        }
        
    }
    if (bandera=='V')
    {
        cout<<"La matriz es simetrica";

    }
    else{
        cout<<"La matriz no es simetrica";
    }



    getch();
    return 0;
}