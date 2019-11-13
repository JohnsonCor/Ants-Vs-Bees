//
// Created by Corey Johnson on 11/6/2019.
//

#include "NinjaAnt.h"

/**
 * @description Default constructor
 */
NinjaAnt::NinjaAnt() {
    this->name = "NinjaAnt";
    this->armor = 1;
    this->foodCost = 6;
    this->ant = true;
    this->bee = false;
    this->damage = 1;
}

/**
 *
 * @param orig NinjaAnt object to be copied
 * @description Copy constructor
 */
NinjaAnt::NinjaAnt(const NinjaAnt &orig) {
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
NinjaAnt::~NinjaAnt() = default;

/**
 *
 * @param orig NinjaAnt object to be copied
 * @return NinjaAnt copy
 * @description Overloaded copy constructor
 */
NinjaAnt &NinjaAnt::operator=(const NinjaAnt &orig) {
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
 * @description Cannot block Bees, and Bees cannot attack it.
 * Bees pass by the ninja and take 1 damage.
 */
void NinjaAnt::action() {

}