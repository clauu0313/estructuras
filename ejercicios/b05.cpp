//b05.cpp
//este programa te deja guardar un evento con su fecha y descripcion

#include <iostream>
#include <string>
using namespace std;

//estructura para representar una fecha
struct Fecha {
    int dia;
    int mes;
    int anio;
};

//estrctura que representa un evento con una fecha y una descripcion
struct Evento {
    Fecha fecha;
    string descripcion;
};

int main() {
    Evento miEvento;

    //para pedir datos
    cout << "ingrese el dia del evento: ";
    cin >> miEvento.fecha.dia;

    cout << "ingrese el mes del evento: ";
    cin >> miEvento.fecha.mes;

    cout << "ingrese el año del evento: ";
    cin >> miEvento.fecha.anio;

    cin.ignore(); 

    cout << "ingrese la descripcion del evento: ";
    getline(cin, miEvento.descripcion);

    //mostrar el evento
    cout << "\nevento registrado:\n";
    cout << "fecha: " << miEvento.fecha.dia << "/" 
         << miEvento.fecha.mes << "/" << miEvento.fecha.anio << endl;
    cout << "descripcion: " << miEvento.descripcion << endl;

    return 0;
}
