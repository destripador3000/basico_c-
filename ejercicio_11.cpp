/*Escribir un programa que desarrolle la siguiente operación matemática 1-2+3-4+5-6...n*/


#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int n,suma=0,i;
    cout << "Escribe un número: ";
    cin>>n;
    for ( i=1; i <=n; i++)
    {
        if (i%2==0)
        {
            suma-=i;
        }
        else
        {
            suma+=i;
        }
        
    }
    cout<<"\nLa operación con el número "<<n<<" es "<<suma<<endl;
    system("pause");    

     
}