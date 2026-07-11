#pragma once
#include <vector>
#include "Card.h"

class Hand {
private:
    std::vector<Card> cartas;

public:
    void agregarCarta(const Card& c);
    int calcularPuntaje() const;
    void mostrar() const;
    bool estaBust() const;
    void vaciar();
};

/*
Clase CRC: Hand

Responsabilidades:
- Almacena un vector de cartas en la mano
- Agregar cartas a la mano
- Calcular el puntaje total (con lógica de As: 1 u 11)
- Mostrar todas las cartas en consola
- Indicar si el puntaje supera 21 (bust)
- Vaciar la mano para una nueva ronda

Colaboraciones:
- Interactúa con la clase Card para agregar cartas, obtener valor y palo, y mostrar cada carta

Atributos:
- vector<Card> cartas — cartas que componen la mano
*/
