#include "Car.h"

double Car::calculatePassengerTime(int passengers) {
    return passengers * 0.2;
}

double Car::calculateCargoTime(int cargo){
    return cargo * 0.1;
}

double Car::calculatePassengerCost(int passengers){
    return passengers * 10.0;
}

double Car::calculateCargoCost(int cargo){
    return cargo * 5.0;
}