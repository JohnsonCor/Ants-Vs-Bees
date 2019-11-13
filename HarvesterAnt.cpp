//
// Created by Corey Johnson on 11/6/2019.
//

#include "HarvesterAnt.h"

HarvesterAnt::HarvesterAnt() {
    this->name = "HarvesterAnt";
    this->armor = 1;
    this->foodCost = 2;
    this->ant = true;
    this->bee = false;
    this->damage = 0;
}

HarvesterAnt::HarvesterAnt(const HarvesterAnt &orig) {
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->setDamage(orig.getDamage());
    this->setFoodCost(orig.getFoodCost());
    this->ant = true;
    this->bee = false;
}

HarvesterAnt::~HarvesterAnt() = default;

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

void HarvesterAnt::action() {

}
