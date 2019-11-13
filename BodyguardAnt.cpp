//
// Created by Corey Johnson on 11/6/2019.
//

#include "BodyguardAnt.h"

/**
 * @description Default constructor
 */
BodyguardAnt::BodyguardAnt() : Ant(name, armor) {
    this->name = "BodyGuardAnt";
    this->armor = 2;
    this->foodCost = 4;
    this->ant = true;
    this->bee = false;
    this->damage = 0;
}

/**
 *
 * @param orig BodyguardAnt object to be copied
 * @description Copy constructor
 */
BodyguardAnt::BodyguardAnt(const BodyguardAnt &orig) {
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
BodyguardAnt::~BodyguardAnt() = default;

/**
 *
 * @param orig BodyguardAnt object to be copied
 * @return BodyguardAnt copy
 * @description Overloaded copy constructor
 */
BodyguardAnt &BodyguardAnt::operator=(const BodyguardAnt &orig) {
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
 * @description Only Ant that can occupy a space with another
 * Ant.  Will incur the damage from any Bee that also occupies
 * that space.
 */
void BodyguardAnt::action() {

}
