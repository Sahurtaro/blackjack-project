#pragma once
#include "Card.h"
#include <vector>

class Deck {
private:
    std::vector<Card> cartas;

public:
    Deck();
    void barajar();
    Card repartirCarta();
    int obtenerTamaño() const;
    void reestablecer();
    void mostrar() const;
    Card obtenerSiguiente() const;
};

/*
Clase CRC: Deck

Responsabilidades:
- Almacena un mazo de 52 cartas (13 valores x 4 palos)
- Barajar las cartas aleatoriamente (Fisher-Yates)
- Repartir la carta superior del mazo
- Obtener la cantidad de cartas restantes
- Restablecer el mazo completo con las 52 cartas
- Mostrar todas las cartas del mazo en consola
- Ver la carta superior sin repartirla

Colaboraciones:
- Interactúa con la clase Card para crear, almacenar y repartir cartas
- Interactúa con Persona (y sus derivadas Player y Crupier) al repartir cartas

Atributos:
- vector<Card> cartas — cartas que componen el mazo
*/
