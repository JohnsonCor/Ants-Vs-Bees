//
// Created by Corey Johnson on 11/6/2019.
//

#include "LongThrowerAnt.h"

/**
 * @description Default constructor
 */
LongThrowerAnt::LongThrowerAnt() {
    this->name = "LongThrowerAnt";
    this->armor = 1;
    this->foodCost = 3;
    this->ant = true;
    this->bee = false;
    this->damage = 1;
}

/**
 *
 * @param orig LongThrowerAnt object to be copied
 * @description Copy constructor
 */
LongThrowerAnt::LongThrowerAnt(const LongThrowerAnt &orig) {
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
LongThrowerAnt::~LongThrowerAnt() = default;

/**
 *
 * @param orig LongThrowerAnt object to be copied
 * @return LonThrowerAnt copy
 * @description Overloaded copy constructor
 */
LongThrowerAnt &LongThrowerAnt::operator=(const LongThrowerAnt &orig) {
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
 * is at least 4 spaces away
 */
void LongThrowerAnt::action() {

}
