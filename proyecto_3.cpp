/*
Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida estándar el precio del producto al aplicarle el IVA
*/
#include <iostream>
using namespace std;
int main(){
    float precio, iva = 0;
    cout << "Escribe el valor del producto: ", cin >> precio;
    iva = (0.19 * precio) + precio;
    cout << "\n El precio del producto al aplicarle el iva es de " << iva; 
    return 0;
}