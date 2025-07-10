#ifndef BARAJA_H
#define BARAJA_H

#include "Carta.h"
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

class Baraja {
private:
    vector<Carta> cartas;
    int indiceActual;

public:
    Baraja();
    void barajar();
    Carta repartirCarta();
};

#endif