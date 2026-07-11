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
Clase: Player (hereda de Persona)

Responsabilidades:
- Almacena el nombre del jugador
- Ejecuta acciones de juego: plantarse
- Hereda de Persona: mano y pedirCarta()

Colaboraciones:
- Hereda de Persona la interacción con Deck y Hand
*/
