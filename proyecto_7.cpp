/*Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo y escriba en la sálida estándar su hipotenusa*/

#include <iostream>
#include <cmath>

 using namespace std;
int main(){
    float cat1,cat2,hipotenusa=0;
    cout << "Escribe el cateto 1: "; cin >> cat1;
    cout << "Escribe el cateto 2: "; cin >> cat2;
    hipotenusa = sqrt((cat1*cat1) + (cat2*cat2));
    cout.precision(2);
    cout << "El valor de la hipotenusa es: " << hipotenusa;



    return 0;
}
