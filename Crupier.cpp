#include "Crupier.h"
#include <iostream>
using namespace std;

Crupier::Crupier() {}

void Crupier::agregarCarta(Carta c) {
    mano.push_back(c);
}

void Crupier::jugarTurno(Baraja& baraja) {
    cout << "Turno del Crupier..." << endl;
    while (calcularPuntos() < 17) {
        Carta nuevaCarta = baraja.repartirCarta();
        agregarCarta(nuevaCarta);
        cout << "Crupier recibe: ";
        nuevaCarta.mostrarCarta();
    }
    cout << "Crupier termina con " << calcularPuntos() << " puntos." << endl;
}

void Crupier::mostrarMano() {
    cout << "Cartas del Crupier:" << endl;
    for (Carta c : mano) {
        c.mostrarCarta();
    }
    cout << "Puntos: " << calcularPuntos() << endl;
}

int Crupier::calcularPuntos() {
    int suma = 0;
    int cantidadAs = 0;
    for (Carta c : mano) {
        suma += c.getValor();
        if (c.getTipo() == "AS") cantidadAs++;
    }
    while (cantidadAs > 0 && suma + 10 <= 21) {
        suma += 10;
        cantidadAs--;
    }
    return suma;
}