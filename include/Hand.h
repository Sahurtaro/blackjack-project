#include<vector>
#include "Card.h"

class Hand{
    private: std::vector<Card> cards;
    public: void AddCard();
    public: void CalculateScore();
};