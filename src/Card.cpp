#include "Card.h"
#include <iostream>

Card::Card() : valor(0), palo("") {}
Card::Card(int v, std::string p) : valor(v), palo(p) {}

int Card::obtenerValor() { return valor; }
std::string Card::obtenerPalo() { return palo; }

void Card::mostrarInfo() {
    std::cout << valor << " de " << palo << std::endl;
}