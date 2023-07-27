/*
Escribe la expresión a/b + 1 en c++ 
*/
#include <iostream>

using namespace std;
 

int main(){
    float a,b, resultado=0;
    cout << "Escribe el valor de la variable a: "; 
    cin >> a;
    cout << "Escribe el valor de la variable b: "; 
    cin >> b;
    resultado = (a/b) + 1;
    
    cout << "El valor de a/b +1 es " << resultado;



    return 0;
} 