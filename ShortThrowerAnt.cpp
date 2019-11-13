//
// Created by Corey Johnson on 11/6/2019.
//

#include "ShortThrowerAnt.h"

/**
 * @description Default constructor
 */
ShortThrowerAnt::ShortThrowerAnt() {
    this->name = "ShortThrowerAnt";
    this->armor = 1;
    this->foodCost = 3;
    this->ant = true;
    this->bee = false;
    this->damage = 1;
}

/**
 *
 * @param orig ShortThrowerAnt object to be copied
 * @description Copy constructor
 */
ShortThrowerAnt::ShortThrowerAnt(const ShortThrowerAnt &orig) {
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
ShortThrowerAnt::~ShortThrowerAnt() = default;

/**
 *
 * @param orig ShortThrowerAnt object to be copied
 * @return ShortThrowerAnt copy
 * @description Overloaded copy constructor
 */
ShortThrowerAnt &ShortThrowerAnt::operator=(const ShortThrowerAnt &orig) {
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
 * @description Inflicts 1 damage on each Bee that
 * is no more that 2 spaces away
 */
void ShortThrowerAnt::action() {

}
