#ifndef JUGADOR_H
#define JUGADOR_H

#include "Carta.h"
#include <string>
#include <vector>
using namespace std;

class Jugador {
private:
    string nombre;
    vector<Carta> mano;

public:
    Jugador();
    Jugador(string n);

    string getNombre();
    void agregarCarta(Carta c);
    void mostrarMano();
    int calcularPuntos();
};

#endif