#ifndef CARTA_H
#define CARTA_H

#include <string>
#include <iostream>
using namespace std;

class Carta {
private:
    string tipo;
    string palo;
    int valor;

public:
    Carta();
    Carta(string t, string p, int v);

    string getTipo();
    string getPalo();
    int getValor();
    void mostrarCarta();
};

#endif