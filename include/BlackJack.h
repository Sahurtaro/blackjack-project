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
Clase CRC: BlackJack

Responsabilidades:
- Iniciar una nueva partida (barajar, repartir cartas iniciales)
- Gestionar el turno del jugador (pedir carta o plantarse)
- Gestionar el turno automático del crupier (pedir hasta ≥17)
- Determinar y anunciar el ganador comparando puntajes

Colaboraciones:
- Interactúa con Player para gestionar las acciones del jugador (pedirCarta, plantarse)
- Interactúa con Crupier para ejecutar las acciones del crupier (pedirCarta, iniciarJuego)
- Utiliza Deck para barajar, repartir cartas iniciales y proveer cartas durante la partida
- Utiliza Hand (a través de Player/Crupier) para calcular puntajes y verificar bust

Atributos:
- Player jugador — el jugador humano
- Crupier crupier — el crupier de la partida
- Deck mazo — el mazo de 52 cartas
*/
