#pragma once
#include "Player.h"
#include "Crupier.h"
#include "Deck.h"

class BlackJack {
private:
    Player jugador;
    Crupier crupier;
    Deck mazo;

public:
    void iniciarJuego();
    void turnoJugador();
    void turnoCrupier();
    void determinarGanador() const;
};

/*
Clase: BlackJack

Responsabilidades:
- Iniciar y administrar una partida de Blackjack
- Controlar los turnos del jugador y del crupier
- Determinar el ganador de la partida
- Repartir las cartas iniciales a cada jugador y al crupier

Colaboraciones:
- Interactúa con la clase Player para gestionar las acciones del jugador
- Interactúa con la clase Crupier para ejecutar las acciones del crupier
- Utiliza la clase Deck para barajar el mazo, repartir cartas iniciales y proveer cartas durante la partida
*/
