/* Escribe la expresión  a+b/c-d en C++ */

#include <iostream>

using namespace std;

int main(){
    float a,b,c,d,resultado=0;
    cout << "Escribe el valor de a";cin >> a;
    cout << "Escribe el valor de b";cin >> b;
    cout << "Escribe el valor de c";cin >> c;
    cout << "Escribe el valor de d";cin >> d;
    resultado =a +(b/ (c-d));
    cout << "El valor total de la ecuación es " << resultado;







    return 0;
}