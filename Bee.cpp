//
// Created by Corey Johnson on 11/6/2019.
//

#include "Bee.h"

Bee::Bee(std::string name, int armor) : Insect(name, armor){
    this->name = name;
    this->armor = armor;
}

Bee::Bee() = default;

Bee::Bee(const Bee &orig) {
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
}

Bee::~Bee() = default;

Bee &Bee::operator=(const Bee &orig) {
    if (&orig == this) {
        return (*this);
    }
    this->setName(orig.getName());
    this->setArmor(orig.getArmor());
    return (*this);
}

void Bee::action() {
    Insect::action();
}

bool Bee::isBee() {
    return Insect::isBee();
}

void Bee::sting() {

}

bool Bee::isBlocked() {
    return false;
}

void Bee::moveLeft() {

}

std::string Bee::toString() {
    return std::__cxx11::string();
}
