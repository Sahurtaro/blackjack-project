#include "Card.h"
#include <vector>
class Deck{
    private: std::vector<Card> cards;
    public: void Shuffle();
    public: void DealCard();
};

/*
Clase: Deck

Responsabilidades:
- Almacena un vector de cartas
- Baraja las cartas
- Reparte una carta

Colaboraciones:
- Interactua con la clase Card para repartir cartas a los jugadores y para barajar las cartas

*/