/*Escribe un programa  que calcule x^y donde x y y son números enteros positivos sin utilizar la funcióon pow*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int x, y, i,resultado=1;
    cout << "Escribe el número que necesitas sacarle la potenciación: "<<endl;
    cin>>x;
    cout<<"Escribe a la potencia que lo quieres llevar "<<endl;
    cin>>y;
    for(i=1; i<=y;i++){
        resultado *=x;

    }
    cout << "La potencia de " << x <<" es "<<resultado;

    cout << "\n";
    system("pause");
    return 0;

}