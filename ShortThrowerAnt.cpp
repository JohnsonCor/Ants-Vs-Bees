//
// Created by Corey Johnson on 11/6/2019.
//

#include "ShortThrowerAnt.h"

ShortThrowerAnt::ShortThrowerAnt() {
    this->name = "ShortThrowerAnt";
    this->armor = 1;
    this->foodCost = 3;
    this->ant = true;
    this->bee = false;
    this->damage = 1;
}

ShortThrowerAnt::ShortThrowerAnt(const ShortThrowerAnt &orig) {
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->setDamage(orig.getDamage());
    this->setFoodCost(orig.getFoodCost());
    this->ant = true;
    this->bee = false;
}

ShortThrowerAnt::~ShortThrowerAnt() = default;

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

void ShortThrowerAnt::action() {

}
