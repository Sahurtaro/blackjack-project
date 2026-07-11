#pragma once
#include "Hand.h"
#include "Deck.h"

class Persona {
protected:
    Hand mano;

public:
    void pedirCarta(Deck& mazo);
};

/*
Clase: Persona (clase base)

Responsabilidades:
- Almacena la mano compartida entre jugador y crupier
- Reparte cartas del mazo a la mano

Colaboraciones:
- Interactúa con la clase Hand para agregar cartas a la mano
- Interactúa con la clase Deck para solicitar cartas
- Es clase base de Player y Crupier (herencia)
*/
