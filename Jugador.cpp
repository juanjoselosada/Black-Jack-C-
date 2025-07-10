#include "Jugador.h"
#include <iostream>
using namespace std;

Jugador::Jugador() {
    nombre = "SinNombre";
}

Jugador::Jugador(string n) {
    nombre = n;
}

string Jugador::getNombre() {
    return nombre;
}

void Jugador::agregarCarta(Carta c) {
    mano.push_back(c);
}

void Jugador::mostrarMano() {
    cout << "Cartas de " << nombre << ":" << endl;
    for (size_t i = 0; i < mano.size(); ++i) {
        mano[i].mostrarCarta();
    }
    cout << "Puntos: " << calcularPuntos() << endl;
}

int Jugador::calcularPuntos() {
    int suma = 0;
    int cantidadAs = 0;

    for (Carta c : mano) {
        suma += c.getValor();
        if (c.getTipo() == "AS") {
            cantidadAs++;
        }
    }

    while (cantidadAs > 0 && suma + 10 <= 21) {
        suma += 10;
        cantidadAs--;
    }

    return suma;
}