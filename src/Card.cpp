#include "Card.h"
#include <iostream>

Card::Card() : valor(0), palo("") {}
Card::Card(int v, std::string p) : valor(v), palo(p) {}

int Card::obtenerValor() const { return valor; }
std::string Card::obtenerPalo() const { return palo; }

void Card::mostrarInfo() const {
    std::cout << valor << " de " << palo << std::endl;
}
