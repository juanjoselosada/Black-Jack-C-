#ifndef CRUPIER_H
#define CRUPIER_H

#include "Carta.h"
#include "Baraja.h"
#include <vector>
#include <string>
using namespace std;

class Crupier {
private:
    vector<Carta> mano;

public:
    Crupier();

    void agregarCarta(Carta c);
    void jugarTurno(Baraja& baraja);
    void mostrarMano();
    int calcularPuntos();
};

#endif