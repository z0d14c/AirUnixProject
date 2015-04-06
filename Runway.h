using namespace std;
#ifndef RUNWAY_H
#define RUNWAY_H
class Runway {
   private:
    bool isBusy;
    int timeRemaining;

   public:
    Runway();
    bool getBusy(); //is the plane occupied
    void startLanding();
    void startTakeoff();
    int tickDown(); //timeRemaining--
};
#endif