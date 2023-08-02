/*Escribe un programa que al introducir un número nos de su factorial es decir 1*2*3...*n  */

#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
    int n,f = 1,i;
    cout << "Escribe un número para hallarle su factorial: ";
    cin >>n;
    
    for (i = 1; i <= n; i++)
    {
        f*=i;
    }
    cout << "\nEl factorial de "<<n<<" es "<<f<<endl;

    system("pause");
    return 0;



}