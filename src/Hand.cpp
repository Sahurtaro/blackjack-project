#include "Hand.h"
#include <iostream>

void Hand::agregarCarta(Card c) { cartas.push_back(c); }

int Hand::calcularPuntaje() {
    int suma = 0;
    for (auto& c : cartas) suma += c.obtenerValor();
    return suma;
}

void Hand::mostrar() { std::cout << "Mostrando mano..." << std::endl; }
bool Hand::estaBust() { return calcularPuntaje() > 21; }
void Hand::vaciar() { cartas.clear(); }