/*Escribe un programa que defina un vector de números y calcule la suma de sus elementos */
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numeros[]={11,23,12,23,12};
    int suma=0;
    for (int i = 0; i < 5; i++)
    {
        suma+=numeros[i];
    }
    
    cout<<"la suma de los números en el vector es "<<suma<<endl;
    cout<<"\n";

    system("pause");
    return 0;



}