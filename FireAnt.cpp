//
// Created by Corey Johnson on 11/6/2019.
//

#include "FireAnt.h"

FireAnt::FireAnt(): Ant(name, armor) {
    this->name = "FireAnt";
    this->armor = 1;
    this->foodCost = 2;
    this->ant = true;
    this->bee = false;
    this->damage = 3;
}

FireAnt::FireAnt(const FireAnt &orig) {
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->setDamage(orig.getDamage());
    this->setFoodCost(orig.getFoodCost());
    this->ant = true;
    this->bee = false;
}

FireAnt::~FireAnt() = default;

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

void FireAnt::action() {

}
