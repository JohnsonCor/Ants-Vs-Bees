//
// Created by Corey Johnson on 11/6/2019.
//

#include "Bee.h"

/**
 *
 * @param name Bee name
 * @param armor Bee armor amount
 * @description Paramaterized constructor
 */
//Bee::Bee(int armor) : Insect(name, armor){
//    this->name = name;
//    this->armor = armor;
//    this->ant = false;
//    this->bee = true;
//}

/**
 * @description Default constructor
 */
//Bee::Bee() = default;
Bee::Bee() : Insect(name, armor){
    this->name = "Bee";
    this->armor = 3;
    this->ant = false;
    this->bee = true;
    this->damage = 1;
}

/**
 *
 * @param orig Bee object to be copied
 * @description Copy constructor
 */
Bee::Bee(const Bee &orig) {
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
}

/**
 * @description Destructor
 */
Bee::~Bee() = default;

/**
 *
 * @param orig Bee object to be copied
 * @return Bee object
 * @description Overloaded copy constructor
 */
Bee &Bee::operator=(const Bee &orig) {
    if (&orig == this) {
        return (*this);
    }
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    return (*this);
}

/**
 * @description A Bee will sting an Ant that is blocking
 * it, or it will move left to the next available BoardSpace
 */
void Bee::action() {

}

/*
bool Bee::isBee() {
    return Insect::isBee();
}
*/

void Bee::sting(Insect &ant) {

}

/**
 *
 * @param isBlocked
 */
void Bee::setBlocked(bool isBlocked) {
    this->isBlocked = isBlocked;
}

/**
 *
 * @return
 */
bool Bee::getBlocked() {
    return this->isBlocked;
}

void Bee::moveLeft() {

}

std::string Bee::toString() {
    return std::__cxx11::string();
}
