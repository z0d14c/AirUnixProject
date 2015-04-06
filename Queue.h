using namespace std;
#ifndef QUEUE_H
#define QUEUE_H
#include <list>
//template so that it can be an "Airplane" queue (T=airplane, in our case)
template <class T>
class Queue {
   private:
    list<T> planelist;

   public:
    Queue();
    bool landing; //if is landing-type queue
    int crashed; //number of planes that have crashed
    void enqueue(T obj);
    T dequeue();
    int count();
    void updatePlanes(); //spread events that happen after each minute
};
#endif