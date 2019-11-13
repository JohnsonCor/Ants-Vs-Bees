//
// Created by Corey Johnson on 11/6/2019.
//

#include "WallAnt.h"

/**
 * @description Default constructor
 */
WallAnt::WallAnt() {
    this->name = "WallAnt";
    this->armor = 4;
    this->foodCost = 4;
    this->ant = true;
    this->bee = false;
    this->damage = 0;
}

/**
 *
 * @param orig WallAnt to be copied
 * @description Copy constructor
 */
WallAnt::WallAnt(const WallAnt &orig) {
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
WallAnt::~WallAnt() = default;

/**
 *
 * @param orig WallAnt to be copied
 * @return WallAnt copy
 * @description Overloaded copy constructor
 */
WallAnt &WallAnt::operator=(const WallAnt &orig) {
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
 * @desription Occupies a space to block Bees.
 * Cannot attack
 */
void WallAnt::action() {

}
