#include "Hand.h"
#include <string>
class Player{
    private: std::string name;
    private: Hand hand;
    public: void Hit();
    public: void Stand();
};

/*
Clase: Player

Responsabilidades:
- Almacena el nombre del jugador
- Almacena la mano del jugador
- ejecuta acciones de juego: hit y stand

Colaboraciones:
- Interactua con la clase Hand para ejecutar gestionar la mano del jugador

*/