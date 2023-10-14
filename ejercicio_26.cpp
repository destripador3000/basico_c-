/*Realice una matriz que calcule la suma de dos matrices cuadradas de 3x3*/

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main(){
    int matriz1[100][100],matriz2[100][100];
    int conteo1=0,conteo2=0,a, total;
    
    cout<<"Digite los valores de la matriz número 1: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite el número de la posición ["<<i<<"]"<<"["<<j<<"]: ";

            cin>>matriz1[i][j];
            a = pow(matriz1[i][j], 2);
            conteo1 += a ;

        }
        
    }
    cout<<"Digite los valores de la seguda matriz: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite el número de la posición ["<<i<<"]"<<"["<<j<<"]: ";

            cin>>matriz2[i][j];
            a = pow(matriz2[i][j], 2);
            conteo2 += a ;

        }
        
    }
    total = conteo1+conteo2;

    cout<<"\nLa suma de los cuadrados de las matrices 3x3 es "<<total<<endl;
        
    getch();
    return 0;
}