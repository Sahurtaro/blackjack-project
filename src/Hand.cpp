#include "Hand.h"
#include <iostream>

void Hand::agregarCarta(const Card& c) { cartas.push_back(c); }

int Hand::calcularPuntaje() const {
    int suma = 0;
    for (auto& c : cartas) suma += c.obtenerValor();
    return suma;
}

void Hand::mostrar() const { std::cout << "Mostrando mano..." << std::endl; }
bool Hand::estaBust() const { return calcularPuntaje() > 21; }
void Hand::vaciar() { cartas.clear(); }
