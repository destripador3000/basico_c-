/*Escribe un programa que defina dos vectores de caracteres y después almacene el contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos del vector. Muestre el contenido del nuevo vector en la salida estandár.*/

#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    char letras1[]={'a','b','c','d','e'};
    char letras2[]={'f','g','h','i','j'};
    char letras3[10];
    //Copiando los elementos del arreglo letras1 a letras3
    for (int i = 0; i < 5; i++)
    {
        letras3[i] = letras1[i];

    }
    //Copinado los elementos del arreglo letras2 a letras3
    for (int i = 5; i < 10; i++)
    {
        letras3[i] = letras2[i-5];     
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<letras3[i]<<endl;
    }
    
    getch();
    return 0;
}
