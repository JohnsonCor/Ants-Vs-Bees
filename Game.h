//
// Created by Corey Johnson on 11/12/2019.
//

#ifndef JOHNSON_COREY_LAB5_GAME_H
#define JOHNSON_COREY_LAB5_GAME_H

#include <string>
#include <vector>
#include "Insect.h"
#include "Bee.h"
#include "HarvesterAnt.h"
#include "ThrowerAnt.h"
#include "FireAnt.h"
#include "LongThrowerAnt.h"
#include "ShortThrowerAnt.h"
#include "WallAnt.h"
#include "NinjaAnt.h"
#include "BodyguardAnt.h"
#include "BoardSpace.h"

class Game {

public:

protected:
    int colonyFood;
    std::vector<BoardSpace> gameBoard;
    std::vector<int> foodCosts;

};


#endif //JOHNSON_COREY_LAB5_GAME_H
