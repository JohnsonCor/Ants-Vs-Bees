//
// Created by Corey Johnson on 11/6/2019.
//

#include "ThrowerAnt.h"

/**
 * @description Default constructor
 */
ThrowerAnt::ThrowerAnt() {
    this->name = "ThrowerAnt";
    this->armor = 1;
    this->foodCost = 4;
    this->ant = true;
    this->bee = false;
    this->damage = 1;
}

/**
 *
 * @param orig ThrowerAnt object to be copied
 * @description Copy constructor
 */
ThrowerAnt::ThrowerAnt(const ThrowerAnt &orig) {
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
ThrowerAnt::~ThrowerAnt() = default;

ThrowerAnt &ThrowerAnt::operator=(const ThrowerAnt &orig) {
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
 * @description Throws a leaf at one Bee sharing its space
 * dealing 1 damage to it
 */
void ThrowerAnt::action() {

}
