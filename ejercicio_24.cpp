/*Escribe un programa*/

#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

using namespace std;
int main(){
 int f,c;
 int aleatorio;
 srand(time(NULL));
 
 cout<<"Introduce el numero de filas: ";
 cin>>f;
 cout<<"Introduce el numero de columnas: ";
 cin>>c;
 
 int n[f][c];
 
 cout<<endl;
 cout<<"Su matriz es: "<<endl;
 
 for(int i=0;i<f;i++){
  for(int j=0;j<c;j++){
   aleatorio = 1 + rand()%10;
   n[i][j] = aleatorio;
   if(j == (c-1)){
    cout<<n[i][j]<<endl;
   }else{
    cout<<n[i][j]<<" ";
   }
  }
 }
 cout<<endl;
 system("pause");
 return 0;
}

