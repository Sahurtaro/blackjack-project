#include "Card.h"
#include <vector>
class Deck{
    private: std::vector<Card> cards;
    public: void Shuffle();
    public: void DealCard();
};