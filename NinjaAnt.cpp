//
// Created by Corey Johnson on 11/6/2019.
//

#include "NinjaAnt.h"

NinjaAnt::NinjaAnt() {
    this->name = "NinjaAnt";
    this->armor = 1;
    this->foodCost = 6;
    this->ant = true;
    this->bee = false;
    this->damage = 1;
}

NinjaAnt::NinjaAnt(const NinjaAnt &orig) {
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->setDamage(orig.getDamage());
    this->setFoodCost(orig.getFoodCost());
    this->ant = true;
    this->bee = false;
}

NinjaAnt::~NinjaAnt() = default;

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

void NinjaAnt::action() {

}