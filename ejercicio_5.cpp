/*Escribe un programa en c++ que se detenga hasta que el usuario ingrese un valor en el rango de 20-30 o 0; al final debe mostrar la suma de los números ingresados */


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int num,sum=0;
    do
    {
        cout << "Escribe un número: ";
        cin >>num;
        sum+=num;
    
    } while ((num !=0) && ((num < 20) || (num > 30)));
    cout << "La suma de los números son: "<< sum<<endl;
    system("pause");   

    
   
    return 0;
}