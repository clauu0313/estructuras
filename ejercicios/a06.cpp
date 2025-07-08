//a06.cpp
//este programa guarda una lista de productos con su precio en un archivo binario luego los lee y muestra

#include <iostream>
#include <fstream>
using namespace std;

//estructura con nombre y precio 
struct Producto {
    char nombre[50];
    float precio;
};

//funcion para guardar los productos en un archivo binario
void guardarProductos(const char* nombreArchivo, Producto productos[], int cantidad) {
    ofstream archivo(nombreArchivo, ios::binary);
    if (!archivo) {
        cout << "no se pudo abrir el archivo para guardar\n";
        return;
    }
    archivo.write(reinterpret_cast<char*>(productos), sizeof(Producto) * cantidad);
    archivo.close();
}

//funcion para leer y mostrar productos desde un archivo binario
void leerProductos(const char* nombreArchivo) {
    ifstream archivo(nombreArchivo, ios::binary);
    if (!archivo) {
        cout << "no se pudo abrir el archivo para leer\n";
        return;
    }

    Producto p;
    cout << "\nproductos guardados:\n";
    while (archivo.read(reinterpret_cast<char*>(&p), sizeof(Producto))) {
        cout << "- " << p.nombre << ": S/ " << p.precio << endl;
    }
    archivo.close();
}

int main() {
    const char* nombreArchivo = "productos.dat";

    int cantidad;
    cout << "cuantos productos deseas ingresar?: ";
    cin >> cantidad;
    cin.ignore();

    Producto* productos = new Producto[cantidad];

    //pedir productos
    for (int i = 0; i < cantidad; ++i) {
        cout << "producto " << i + 1 << " nombre: ";
        cin.getline(productos[i].nombre, 50);
        cout << "precio: ";
        cin >> productos[i].precio;
        cin.ignore();
    }

    guardarProductos(nombreArchivo, productos, cantidad);
    leerProductos(nombreArchivo);

    delete[] productos;
    return 0;
}
