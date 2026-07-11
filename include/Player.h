#pragma once
#include "Persona.h"
#include <string>

class Player : public Persona {
private:
    std::string nombre;

public:
    Player();
    Player(std::string n);
    void plantarse();
};

/*
Clase CRC: Player (hereda de Persona)

Responsabilidades:
- Almacena el nombre del jugador
- Ejecuta la acción de plantarse (finalizar turno)
- Hereda de Persona: mano y pedirCarta()

Colaboraciones:
- Hereda de Persona la interacción con Deck (repartirCarta) y Hand (agregarCarta, calcularPuntaje, estaBust)
- Hereda de Persona el atributo mano (protected)

Atributos propios:
- string nombre — nombre del jugador

Atributos heredados:
- Hand mano (protected) — mano de cartas
*/
