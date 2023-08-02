/*Ejercicio bucles cpp en el se calcula y se muestra en la salida estándar la suma de los cuadrados de los 10 primeros enteros mayores que cero.*/


#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i,potencia,suma=0;
    for(i=1; i<=10; i++){
        potencia = i * i;
        suma += potencia;


    }
    cout << "El valor de la suma de los cuadrados del 1 al 10 es " << suma;
    getch();

    return 0;
}
