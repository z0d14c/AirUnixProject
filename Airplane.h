#ifndef AIRPLANE_H
#define AIRPLANE_H
using namespace std;
class Airplane {
   private:
    int gas; //only matters for landing planes, set to random amount
    int timeSpent; //constructed at 0
   public:
    Airplane(int gas);
    int getGas();
    int getTime();
    void decrementGas();
};
#endif