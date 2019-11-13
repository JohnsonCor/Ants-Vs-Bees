//
// Created by Corey Johnson on 11/6/2019.
//

#include "FireAnt.h"

/**
 * @description Default constructor
 */
FireAnt::FireAnt(): Ant(name, armor) {
    this->name = "FireAnt";
    this->armor = 1;
    this->foodCost = 2;
    this->ant = true;
    this->bee = false;
    this->damage = 3;
}

/**
 *
 * @param orig FireAnt to be copied
 * @description Copy constructor
 */
FireAnt::FireAnt(const FireAnt &orig) {
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->setDamage(orig.getDamage());
    this->setFoodCost(orig.getFoodCost());
    this->ant = true;
    this->bee = false;
}

/**
 * @description Destructor
 */
FireAnt::~FireAnt() = default;

/**
 *
 * @param orig FireAnt object to be copied
 * @return FireAnt copy
 * @description Overloaded copy constructor
 */
FireAnt &FireAnt::operator=(const FireAnt &orig) {
    if (&orig == this) {
        return (*this);
    }
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->setDamage(orig.getDamage());
    this->setFoodCost(orig.getFoodCost());
    this->ant = true;
    this->bee = false;
    return (*this);
}

/**
 * @description Upon death of this Ant, it reduces
 * the armor value of all Bees that share its space
 * to 0
 */
void FireAnt::action() {

}
