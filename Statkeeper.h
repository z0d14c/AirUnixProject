#ifndef STATKEEPER_H
#define STATKEEPER_H
using namespace std;
#include <iostream>
class Statkeeper {
   private:
    int takeoffPlanes;
    int landedPlanes;
    int crashedPlanes;
    int simTime;
    int landingTime;
    int takeoffTime;
    double avg1;
    double avg2;

   public:
    Statkeeper(int simTime);
    void plusTakeoffPlanes();
    void plusLandedPlanes();
    void plusCrashPlanes();
    void plusTakeoffTime(int time);
    void plusLandingTime(int time);
    int avgTakeoffTime();
    int avgLandingTime();
    void printStats();
};
#endif
