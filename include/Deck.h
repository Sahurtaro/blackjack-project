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
Clase: Deck

Responsabilidades:
- Almacena un vector de cartas
- Baraja las cartas
- Reparte una carta
- Obtener el tamaño del juego
- Reestablecer mazo
- Mostrar la baraja
- Obtener la siguiente carta

Colaboraciones:
- Interactua con la clase Card para repartir cartas a los jugadores y para barajar las cartas
- Interactua con Crupier para agregar cartas a la mano.

*/
