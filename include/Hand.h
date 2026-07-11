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
Clase: Hand

Responsabilidades:
- Almacena un vector de cartas
- Agrega cartas a la mano
- Calcula el marcador
- Mostrar mano
- Indicar si el puntaje supera 21
- Vaciar la mano


Colaboraciones:
- Interactua con la clase Card para agregar la carta a la mano y obtener la informacion de cada carta para mostrar la mano

*/
