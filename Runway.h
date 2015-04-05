using namespace std;

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
}