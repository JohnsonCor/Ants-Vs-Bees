//
// Created by Corey Johnson on 11/6/2019.
//

#include "HarvesterAnt.h"

/**
 * @description Default constructor
 */
HarvesterAnt::HarvesterAnt() {
    this->name = "HarvesterAnt";
    this->armor = 1;
    this->foodCost = 2;
    this->ant = true;
    this->bee = false;
    this->damage = 0;
}

/**
 *
 * @param orig HarvesterAnt object to be copied
 * @description Copy constructor
 */
HarvesterAnt::HarvesterAnt(const HarvesterAnt &orig) {
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
HarvesterAnt::~HarvesterAnt() = default;

/**
 *
 * @param orig HarvesterAnt object to be copied
 * @return HarvesterAnt copy
 * @desription Overloaded copy constructor
 */
HarvesterAnt &HarvesterAnt::operator=(const HarvesterAnt &orig) {
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
 * @description Adds 1 food to the colony for each
 * turn that it lives
 */
void HarvesterAnt::action() {

}
