//
// Created by Corey Johnson on 11/6/2019.
//

#include "BodyguardAnt.h"

BodyguardAnt::BodyguardAnt() : Ant(name, armor) {
    this->name = "BodyGuardAnt";
    this->armor = 2;
    this->foodCost = 4;
    this->ant = true;
    this->bee = false;
    this->damage = 0;
}

BodyguardAnt::BodyguardAnt(const BodyguardAnt &orig) {
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->setDamage(orig.getDamage());
    this->setFoodCost(orig.getFoodCost());
    this->ant = true;
    this->bee = false;
}

BodyguardAnt::~BodyguardAnt() = default;

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

void BodyguardAnt::action() {

}
