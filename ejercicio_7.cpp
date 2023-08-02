/*Escribe un programa que haga la siguiente función 1+2+3...+n*/


#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
    int n,i,sum=0;
    cout << "Escribe un Número: ";
    cin >> n;


    for ( i = 1; i <=n; i++)
    {
        sum+=i;
    }

    cout<<"\nLa suma de los números hasta " << n <<" es " << sum<<endl;

    system("pause");

    return 0;
}
