#ifndef JUEGO_H
#define JUEGO_H

#include "Carta.h"
#include "Baraja.h"
#include "Jugador.h"
#include "Crupier.h"
#include <string>
using namespace std;

class Juego {
private:
    Jugador jugador;
    Crupier crupier;
    Baraja baraja;

public:
    void iniciar();
    void jugarRonda();
    void mostrarGanador();
};

#endif