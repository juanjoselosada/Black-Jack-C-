#include "Baraja.h"

Baraja::Baraja() {
    string palos[] = {"Corazones", "Diamantes", "Tréboles", "Picas"};
    string tipos[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "AS"};
    int valores[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 1};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            cartas.push_back(Carta(tipos[j], palos[i], valores[j]));
        }
    }

    indiceActual = 0;
}

void Baraja::barajar() {
    random_device rd;
    mt19937 g(rd());
    shuffle(cartas.begin(), cartas.end(), g);
    indiceActual = 0;
}

Carta Baraja::repartirCarta() {
    if (indiceActual < cartas.size()) {
        return cartas[indiceActual++];
    } else {
        return Carta();
    }
}