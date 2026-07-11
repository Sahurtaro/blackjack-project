#pragma once
#include "Persona.h"

class Crupier : public Persona {
public:
    void iniciarJuego();
};

/*
Clase: Crupier (hereda de Persona)

Responsabilidades:
- Comienza un juego
- Hereda de Persona: mano y pedirCarta()

Colaboraciones:
- Hereda de Persona la interacción con Deck y Hand
*/
