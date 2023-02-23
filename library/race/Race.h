#pragma once
#ifndef RACE_H
#define RACE_H
#include "../transport/MagicCarpet.h"
#include "../transport/Eagle.h"
#include "../transport/Broomstick.h"
#include "../transport/Camel.h"
#include "../transport/CamelIsFast.h"
#include "../transport/Centaur.h"
#include "../transport/AllTerrainBoots.h"
#include <vector>
#include <algorithm>
class Race {
protected:
    int distance;
    Race() = default;
    virtual ~Race() = default;
};
#endif
