#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int lista[100],n;
    cout << "Escribe un número ";cin >> n;
    for (int i=0; i<n;i++)
    {
        cout<<"Digite un número ";
        cin>>lista[i];
    }
    
  for (int i = 100; i > n; i--)
  {
    cout<<i<<" -> "<<lista[i]<<endl ;
  }
    system("Pause");
    return 0;

}