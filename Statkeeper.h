using namespace std;

class Statkeeper {
   private:
    int takeoffPlanes;
    int landedPlanes;
    int crashedPlanes;
    int simTime;

   public:
    Statkeeper(simTime);
    void plusTakeoffPlanes();
    void plusLandedPlanes();
    void plusCrashPlanes();
    int avgTakeoffTime();
    int avgLandingTime();
    void printStats();
}