//
// Created by Corey Johnson on 11/6/2019.
//

#include "Ant.h"

/**
 *
 * @param name Name
 * @param armor Armor value
 * @description Parameterized constructor
 */
Ant::Ant(std::string name, int armor) : Insect(name, armor) {

}

/**
 * @description Default constructor
 */
Ant::Ant() {

}

/**
 *
 * @param orig Ant object to be copied
 * @description Copy constructor
 */
Ant::Ant(const Ant &orig) {
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->setDamage(orig.getDamage());
    this->setFoodCost(orig.getFoodCost());
}

/**
 * @description Destructor
 */
Ant::~Ant() = default;

/**
 *
 * @param orig Ant object to be copied
 * @return Ant copy
 * @description Overloaded copy constructor
 */
Ant &Ant::operator=(const Ant &orig) {
    if (&orig == this) {
        return (*this);
    }
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->setDamage(orig.getDamage());
    this->setFoodCost(orig.getFoodCost());
    return (*this);
}