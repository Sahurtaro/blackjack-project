#include "Player.h"
#include <iostream>

Player::Player() : nombre("") {}
Player::Player(std::string n) : nombre(n) {}

void Player::plantarse() { std::cout << nombre << " se planta." << std::endl; }
