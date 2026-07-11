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
Clase CRC: Persona (clase base)

Responsabilidades:
- Almacena la mano compartida entre jugador y crupier
- Reparte cartas del mazo a la mano
- Provee acceso protected al atributo mano para las clases derivadas

Colaboraciones:
- Interactúa con la clase Hand para agregar cartas a la mano y calcular puntaje
- Interactúa con la clase Deck para solicitar cartas (repartirCarta)
- Es clase base de Player y Crupier (herencia)
- Player y Crupier heredan mano y pedirCarta()

Atributos:
- Hand mano (protected) — mano de cartas del jugador/crupier
*/
