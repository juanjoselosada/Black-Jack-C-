#include "Juego.h"
#include <iostream>
using namespace std;

void Juego::iniciar() {
    string nombre;
    cout << "===== BLACKJACK - 1 JUGADOR =====" << endl;
    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    jugador = Jugador(nombre);

    baraja.barajar();
    jugarRonda();
}

void Juego::jugarRonda() {
    jugador.agregarCarta(baraja.repartirCarta());
    jugador.agregarCarta(baraja.repartirCarta());
    crupier.agregarCarta(baraja.repartirCarta());
    crupier.agregarCarta(baraja.repartirCarta());

    bool turnoActivo = true;
    while (turnoActivo) {
        cout << endl << "Turno de " << jugador.getNombre() << endl;
        jugador.mostrarMano();

        if (jugador.calcularPuntos() > 21) {
            cout << "¡Te pasaste de 21!" << endl;
            break;
        }

        cout << "[1] Pedir carta" << endl;
        cout << "[2] Pasar" << endl;
        cout << "Elige: ";
        int opcion;
        cin >> opcion;

        if (opcion == 1) {
            jugador.agregarCarta(baraja.repartirCarta());
        } else if (opcion == 2) {
            turnoActivo = false;
        }
    }

    cout << endl << "==== TURNO DEL CRUPIER ====" << endl;
    crupier.jugarTurno(baraja);
    mostrarGanador();
}

void Juego::mostrarGanador() {
    int puntosJugador = jugador.calcularPuntos();
    int puntosCrupier = crupier.calcularPuntos();

    cout << endl << "=== RESULTADOS ===" << endl;
    jugador.mostrarMano();
    crupier.mostrarMano();

    if (puntosJugador > 21) {
        cout << jugador.getNombre() << " pierde por pasarse de 21." << endl;
    } else if (puntosCrupier > 21 || puntosJugador > puntosCrupier) {
        cout << jugador.getNombre() << " gana la ronda." << endl;
    } else if (puntosJugador == puntosCrupier) {
        cout << "Empate entre " << jugador.getNombre() << " y el crupier." << endl;
    } else {
        cout << "El crupier gana la ronda." << endl;
    }
}