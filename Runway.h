using namespace std;
#ifndef RUNWAY_H
#define RUNWAY_H
class Runway {
   private:
    bool isBusy; //currently a plane is using the runway or not
    int timeRemaining; //time until plane is done using runway
    int landingTime; //time it takes a plane to land
    int takeoffTime; //time it takes a plane to takeoff
   public:
    Runway(int landTime, int takeoffTime);
    bool getBusy(); //is the plane occupied?
    void startLanding(); //start a landing for a plane
    void startTakeoff(); //start a takeoff for a plane
    int tickDown(); //timeRemaining--, communicate with planes
};
#endif