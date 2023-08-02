/*Escriba un programa que sume los factoriales de n cantidad de números*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int numero, factorial=1, suma_factorial=0;
    cout << "Que numero deseas calcularle el factorial : ";
    cin >> numero;
    for (int i=1; i<=numero; i++){

        factorial *=  i;
        suma_factorial +=  factorial;
    }
    cout << "EL FACTORIAL CORRESPONDIENTE ES : " << suma_factorial <<  endl;
    return 0;
}
