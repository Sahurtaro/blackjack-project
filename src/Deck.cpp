#include "Deck.h"
#include <iostream>

Deck::Deck() {
    // Agrega 2 cartas de ejemplo para probar
    cartas.push_back(Card(1, "Corazones"));
    cartas.push_back(Card(7, "Picas"));
}

void Deck::barajar() { std::cout << "Barajando..." << std::endl; }

Card Deck::repartirCarta() {
    Card c = cartas.back();
    cartas.pop_back();
    return c;
}

int Deck::obtenerTamaño() const { return cartas.size(); }
void Deck::reestablecer() { std::cout << "Reestableciendo..." << std::endl; }
void Deck::mostrar() const { std::cout << "Mostrando mazo..." << std::endl; }
Card Deck::obtenerSiguiente() const { return cartas.back(); }
