//i04.cpp
//este programa te deja copiar los datos de un empleado a otro espacio de memoria y mostrarlos

#include <iostream>
#include <string>
using namespace std;

//estructura
struct Empleado {
    string nombre;
    int edad;
};

//funcion que crea una copia dinamica del empleado original
Empleado* copiarEmpleado(const Empleado& original) {
    Empleado* copia = new Empleado;
    copia->nombre = original.nombre;
    copia->edad = original.edad;
    return copia;
}

int main() {
    Empleado e1;

    //pedir datos de empleado original
    cout << "ingresa el nombre del empleado: ";
    getline(cin, e1.nombre);
    cout << "ingresa la edad: ";
    cin >> e1.edad;

    //crear una copia dinamica del empleado
    Empleado* copia = copiarEmpleado(e1);

    //mosstrar los datos de la copia
    cout << "\ncopia del empleado:\n";
    cout << "nombre: " << copia->nombre << endl;
    cout << "edad: " << copia->edad << endl;

    //liberar memoria
    delete copia;

    return 0;
}
