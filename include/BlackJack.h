#include "Player.h"
#include "Crupier.h"
#include "Deck.h"


class BlackJack{
    private: Player player;
    private: Crupier crupier;
    private: Deck deck;
    public: void StartGame();
    public: void PlayerTurn();
    public: void CrupierTurn();
    public: void DetermineWinner();
};              

/*
Clase: BlackJack

Responsabilidades:
- Iniciar y administrar una partida de Blackjack
- Controlar los turnos del jugador y del crupier
- Determinar el ganador de la partida

Colaboraciones:
- Interactúa con la clase Player para gestionar las acciones del jugador
- Interactúa con la clase Crupier para ejecutar las acciones del crupier
- Utiliza la clase Deck para repartir cartas durante la partida
*/