using namespace std;
#ifndef BOOLSOURCE_H
#define BOOLSOURCE_H
class BoolSource {
   private:
    int prob;
   public:
    BoolSource(double prob);
    bool check();
};
#endif