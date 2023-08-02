/*Ejercicio de bucles*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int i,numero;
    cout<<"Escribe el número: "; 
    cin>>numero;
    for(i=1;i<=10;i++){
        cout<<numero<<"*"<<i<<"="<<numero*i<<endl;
    
    }
    system("pause");
    return 0;

}