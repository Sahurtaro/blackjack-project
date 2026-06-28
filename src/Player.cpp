#include "Player.h"
#include <iostream>

Player::Player() : nombre("") {}
Player::Player(std::string n) : nombre(n) {}

void Player::pedirCarta(Deck& mazo) { 
    mano.agregarCarta(mazo.repartirCarta());
    std::cout << nombre << " pide carta." << std::endl;
}
void Player::plantarse() { std::cout << nombre << " se planta." << std::endl; }