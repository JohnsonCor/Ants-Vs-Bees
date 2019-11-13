//
// Created by Corey Johnson on 11/6/2019.
//

#ifndef JOHNSON_COREY_LAB5_INSECT_H
#define JOHNSON_COREY_LAB5_INSECT_H

#include <string>
#include <vector>

class Insect {

public:
    explicit Insect(std::string name, int armor);
    Insect();

    Insect(const Insect &orig);
    virtual ~Insect();
    Insect &operator=(const Insect &orig);

    virtual std::string getName() const ;
    virtual int getArmor() const ;
    virtual int getDamage() const ;
    virtual int getFoodCost() const ;

    virtual void setName(std::string name);
    virtual void setArmor(int armorVal);
    virtual void setDamage(int damage);
    virtual void setFoodCost(int foodCost);

    virtual void action()=0;
    virtual void takeDamage(int amountDamage);
    virtual bool isAnt();
    virtual bool isBee();
    //virtual std::string toString() = 0;

protected:
    std::string name;
    int armor;
    int damage;
    int foodCost;
    bool ant;
    bool bee;
};


#endif //JOHNSON_COREY_{}{}{}LAB5_INSECT_H
