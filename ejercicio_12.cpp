/*Escribir un programa que realice la descomposición factorial de un número; por ejemplo 20 = 2+2+5 */


#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n;
    cout << "Escribe el número del que quieras sacarle factorial: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            n/=i;
            cout<<i<<" ";

        }
        
    }
    cout<<"\n\n";
    system("pause");
    return 0;
}