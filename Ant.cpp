//
// Created by Corey Johnson on 11/6/2019.
//

#include "Ant.h"

Ant::Ant(std::string name, int armor) : Insect(name, armor) {

}

Ant::Ant() {

}

Ant::Ant(const Ant &orig) {
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->setDamage(orig.getDamage());
    this->setFoodCost(orig.getFoodCost());
}

Ant::~Ant() = default;

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