//
// Created by Corey Johnson on 11/6/2019.
//

#include "Insect.h"
//#include "BoardSpace.h"
/**
 * @description Insect default constructor
 */
Insect::Insect() {

}

/**
 *
 * @param orig Insect object to be copied
 */
Insect::Insect(const Insect &orig) {

}

/**
 * @description Insect object default destructor
 */
Insect::~Insect() {

}

/**
 *
 * @param orig Insect object to be copied
 * @return
 * @description Insect object overloaded assignment operator
 */
Insect &Insect::operator=(const Insect &orig) {
    return (*this);
}

/**
 *
 * @return Armor value
 * @description Insect armor value getter method
 */
int Insect::getArmor() {
    return this->armor;
}

void Insect::setArmor(int armorVal) {

}

void Insect::takeDamage() {

}

bool Insect::isAnt() {
    return false;
}

bool Insect::isBee() {
    return false;
}
