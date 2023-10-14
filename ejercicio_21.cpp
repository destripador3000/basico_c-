/*Hacer un programa para relllenar una matriz pidiendo al usuario el número de filas y columnas posteriormente mostrar la matriz en pantalla*/



#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    int numeros[100][100],filas,columnas;         
    cout << "Digite el número de filas: ";
    cin >> filas;
    cout << "Digite el número de columnas: ";
    cin >> columnas;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j <columnas; j++)
        {
            cout << "Digite un número ["<<i<<"]"<<"["<<j<<"]";
            cin >> numeros[i][j];   
        }   
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << numeros[i][j];
            
        }
        cout << "\n";    
    }
    
    return 0;
}