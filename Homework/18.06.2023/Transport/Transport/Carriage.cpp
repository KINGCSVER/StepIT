#include "Carriage.h"

double Carriage::calculatePassengerTime(int passengers){
    return passengers * 1.0;
}

double Carriage::calculateCargoTime(int cargo){
    return cargo * 0.5;
}

double Carriage::calculatePassengerCost(int passengers){
    return passengers * 5.0;
}

double Carriage::calculateCargoCost(int cargo){
    return cargo * 2.0;
}