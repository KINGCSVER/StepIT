#include "TransportData.h"

class Bicycle : public TransportData {
public:
    double calculatePassengerTime(int passengers) override;
    double calculateCargoTime(int cargo) override;
    double calculatePassengerCost(int passengers) override;
    double calculateCargoCost(int cargo) override;
};
