//
// Created by Corey Johnson on 11/6/2019.
//

#include "ThrowerAnt.h"

ThrowerAnt::ThrowerAnt() {
    this->name = "ThrowerAnt";
    this->armor = 1;
    this->foodCost = 4;
    this->ant = true;
    this->bee = false;
    this->damage = 1;
}

ThrowerAnt::ThrowerAnt(const ThrowerAnt &orig) {
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->setDamage(orig.getDamage());
    this->setFoodCost(orig.getFoodCost());
    this->ant = true;
    this->bee = false;
}

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

void ThrowerAnt::action() {

}
