/*Ejercicio bucles c++ En este ejercicio se necesita un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la media del día la temperatura más alta  y la más baja.*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    float suma=0,tem,med,bajo=100,alta=-100;
    for(int i=1; i <= 6; i++){
        cout << "Cuanto es la temeratura: ";
        cin>>tem;
        med = suma+=tem/6;
        if(tem < bajo){
            bajo = tem;
        }
        else if (tem>alta)
        {
            alta = tem;


        }
        
    }
    cout << "La media del día es " << med<<endl;
    cout << "La temperatura más alta es: " << alta<<endl;
    cout << "La temperatura más baja es: " << bajo<<endl;   
    return 0;
}