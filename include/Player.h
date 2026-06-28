#pragma once
#include "Hand.h"
#include "Deck.h"
#include <string>
class Player{
    private: std::string nombre;
    private: Hand mano;
    public: Player();
    public: Player(std::string n);
    public: void pedirCarta(Deck& mazo);
    public: void plantarse();
};

/*
Clase: Player

Responsabilidades:
- Almacena el nombre del jugador
- Almacena la mano del jugador
- Ejecuta acciones de juego: hit y stand
- Pedir más cartas cuando lo decida

Colaboraciones:
- Interactua con la clase Deck para robar una carta cuando decide pedir más
- Interactua con la clase Hand para agregar la carta recibida a su mano y actualizar el puntaje
*/