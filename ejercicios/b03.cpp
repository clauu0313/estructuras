//b03.cpp
//este programa crea una persona, muestra sus datos y luego los modifica

#include <iostream>
#include <string>
using namespace std;

//definimos la estructura Persona, nombre y edad
struct Persona {
    string nombre;
    int edad;
};

int main() {
    //creamos una persona con valores iniciales ejm:
    Persona p;
    p.nombre = "rachel";
    p.edad = 22;

    //mostrar valores inciales
    cout << "antes:\n";
    cout << "nombre: " << p.nombre << "\nedad: " << p.edad << endl;

    //modificamos
    p.nombre = "mark";
    p.edad = 25;

    //mostrar los valores modificados
    cout << "\ndespues:\n";
    cout << "nombre: " << p.nombre << "\nedad: " << p.edad << endl;

    return 0;
}
