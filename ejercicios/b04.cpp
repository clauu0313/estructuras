//b04.cpp
//este programa te deja ingresar 3 productos con su nombre y precio, luego los muestra

#include <iostream>
#include <string>
using namespace std;

//etructura para guardar nombre y precio del producto
struct Producto {
    string nombre;
    float precio;
};

int main() {
    Producto productos[3];

    for (int i = 0; i < 3; ++i) {
        cin.ignore(); 
        cout << "producto " << i + 1 << ":\n";
        cout << "nombre: ";
        getline(cin, productos[i].nombre);
        cout << "precio: ";
        cin >> productos[i].precio;
    }

    //mostrar lista de productos
    cout << "\nlista de productos:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "- " << productos[i].nombre << ": S/ " << productos[i].precio << endl;
    }

    return 0;
}
