//
// Created by Corey Johnson on 11/12/2019.
//

#include "Game.h"

Game::Game() {
    this->colonyFood = 50;
    for (int i = 0; i < 10; ++i) {
        BoardSpace space(i);
        gameBoard.push_back(space);
    }
}

Game::Game() = default;

Game::Game(const Game &orig) {
    this->setColonyFood(orig.getColonyFood());

}

Game::~Game() = default;

Game &Game::operator=(const Game &orig) {
    if (&orig == this) {
        return (*this);
    }
    this->setColonyFood(orig.getColonyFood());
    return (*this);
}

int getColonyFood() {
    return this->colonyFood;
}

void setColonyFood(int colonyFood) {
    this->colonyFood = colonyFood;
}