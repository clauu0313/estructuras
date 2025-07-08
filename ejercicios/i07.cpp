//i07.cpp
//este programa te deja ingresar los datos de una persona y su dirección luego los muestra

#include <iostream>
#include <string>
using namespace std;

//estructura direccion
struct Direccion {
    string calle;
    string ciudad;
};

//estructura persona
struct Persona {
    string nombre;
    Direccion* direccion;
};

int main() {
    Persona p;

    //pedir nombre
    cout << "ingresa el nombre de la persona: ";
    getline(cin, p.nombre);

    //asignar memoria para la direccion
    p.direccion = new Direccion;

    //pedir los datos de la direccion
    cout << "ingresa la calle: ";
    getline(cin, p.direccion->calle);
    cout << "ingresa la ciudad: ";
    getline(cin, p.direccion->ciudad);

    //mostrar toda la información
    cout << "\ndatos ingresados:\n";
    cout << "nombre: " << p.nombre << endl;
    cout << "calle: " << p.direccion->calle << endl;
    cout << "ciudad: " << p.direccion->ciudad << endl;

    //liberar
    delete p.direccion;

    return 0;
}
