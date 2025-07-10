#include "Carta.h"

Carta::Carta() {
    tipo = "NA";
    palo = "NA";
    valor = 0;
}

Carta::Carta(string t, string p, int v) {
    tipo = t;
    palo = p;
    valor = v;
}

string Carta::getTipo() {
    return tipo;
}

string Carta::getPalo() {
    return palo;
}

int Carta::getValor() {
    return valor;
}

void Carta::mostrarCarta() {
    cout << tipo << " de " << palo << " (Valor: " << valor << ")" << endl;
}