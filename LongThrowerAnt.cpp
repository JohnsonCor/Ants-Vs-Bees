//
// Created by Corey Johnson on 11/6/2019.
//

#include "LongThrowerAnt.h"

LongThrowerAnt::LongThrowerAnt() {
    this->name = "LongThrowerAnt";
    this->armor = 1;
    this->foodCost = 3;
    this->ant = true;
    this->bee = false;
    this->damage = 1;
}

LongThrowerAnt::LongThrowerAnt(const LongThrowerAnt &orig) {
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    this->setDamage(orig.getDamage());
    this->setFoodCost(orig.getFoodCost());
    this->ant = true;
    this->bee = false;
}

LongThrowerAnt::~LongThrowerAnt() = default;

LongThrowerAnt &LongThrowerAnt::operator=(const LongThrowerAnt &orig) {
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

void LongThrowerAnt::action() {

}
