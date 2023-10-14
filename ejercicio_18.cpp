/*Escribe un programa que defina un vector de números y calcule si existe algún número en el vector cuyo valor equivale a la suma del resto de números del vector*/


#include<iostream>
#include<math.h>
#include<conio.h>
#include<time.h>

using namespace std; 

int main(){
    int n, elemento = 0, suma= 0;
    
	cout<<"Digite numero de elementos del vector: ";
    cin>>n;
    
    int vector[n];
    
    for(int i=0; i<n; i++){
    
	cout<<"Ingrese el elemento numero "<<i+1<<endl;
	cin >> elemento;	
    	vector[i] = elemento;
    	suma += vector[i];
    }
    
    cout<<"suma es: "<<suma<<endl;
    
    for(int i=0; i<n; i++){
    if(vector[i] == suma/2){
       cout<<"Elemento "<<i+1<<" cumple con la condicion"<<endl;
    }else {
    }

}
    cout<<"\n";
getch();
return 0;
}

