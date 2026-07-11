#pragma once
#include "Persona.h"

class Crupier : public Persona {
public:
    void iniciarJuego();
};

/*
Clase CRC: Crupier (hereda de Persona)

Responsabilidades:
- Inicializa una nueva ronda repartiendo cartas iniciales
- Hereda de Persona: mano y pedirCarta()

Colaboraciones:
- Hereda de Persona la interacción con Deck (repartirCarta) y Hand (agregarCarta, calcularPuntaje, estaBust, vaciar)
- Hereda de Persona el atributo mano (protected)

Atributos propios:
- Ninguno

Atributos heredados:
- Hand mano (protected) — mano de cartas
*/
