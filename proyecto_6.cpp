/*  Escriba un programa que lea la nota final de cuatro alumnos y calcula la nota media de los cuatro alumnos*/

#include <iostream>
using namespace std;
int main(){
    float alum1, alum2, alum3, alum4, promedio=0;
    cout << "Escribe la nota final del alumno 1: "; cin >> alum1;
    cout << "Escribe la nota final del alumno 2: "; cin >> alum2;
    cout << "Escribe la nota final del alumno 3: "; cin >> alum3;
    cout << "Escribe la nota final del alumno 4: "; cin >> alum4;
    promedio =(alum1+alum2+alum3 + alum4)/4;
    cout << "El promedio de los 4 alumnos es: " <<promedio;

    return 0;
}
