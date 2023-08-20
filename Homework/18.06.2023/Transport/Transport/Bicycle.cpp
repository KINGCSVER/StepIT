#include "Bicycle.h"

double Bicycle::calculatePassengerTime(int passengers){
    return passengers * 0.5;
}

double Bicycle::calculateCargoTime(int cargo){
    return cargo * 0.2;
}

double Bicycle::calculatePassengerCost(int passengers){
    return passengers * 2.0;
}

double Bicycle::calculateCargoCost(int cargo){
    return cargo * 1.0;
}