// Escriba un programa que al ingresar la edad de un usuario y que indique si es mayor de edad o no.

#include <iostream>

using namespace std;

int main()
{
    float edad = 0;

    cout << "eres mayor de edad?" << "\n" ;
    cout << " colocar su edad" << "\n" ;
    cin >> edad ;

    if (edad < 0 )
    { 
        cout << "el numero es invalido" << "\n" ;
    }
    else if (edad >18)
    {
        cout << "usted es mayor de edad" << "\n" ;
    }
    else  
    {
        cout << "usted es menor de edad" << "\n" ;
    }
    
    return 0;




}