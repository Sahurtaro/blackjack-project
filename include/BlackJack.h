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