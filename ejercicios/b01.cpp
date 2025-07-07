//b01.cpp
//este programa crea una persona con nombre y edad, y muestra esos datos

#include <iostream>
#include <string>
using namespace std;

//definimos la estructura Persona con dos campos
struct Persona {
    string nombre;
    int edad;
};

int main() {
    Persona p;

    //el usuario ingresa datos
    cout << "ingrese el nombre de la persona: ";
    getline(cin, p.nombre);

    cout << "ingrese la edad: ";
    cin >> p.edad;

    //motrar la informacion
    cout << "nombre: " << p.nombre << endl;
    cout << "edad: " << p.edad<< endl;

    return 0;
}
