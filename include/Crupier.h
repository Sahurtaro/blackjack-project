#pragma once
#include "Hand.h"
#include "Deck.h"
class Crupier{
    private: Hand mano;
    public: void pedirCarta(Deck& mazo);
    public: void iniciarJuego();
};

/*
Clase: Crupier

Responsabilidades:
- Gestiona la mano del Crupier
- Solicita cartas 
- Comienza un juego

Colaboraciones:
- Interactura con la clase Hand para asignarle una mano al crupier
- Interactua con la clase Hand para evaluar el puntaje y decidir si debe solicitar otra carta
- Interactúa con la clase Deck para solicitar y recibir cartas durante su turno
- Interactua con la clase Player para conocer su puntaje y determinar el resultado de la partida

*/