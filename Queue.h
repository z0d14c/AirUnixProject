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
    int crashed; //number of planes that have crashed
    int crashtime; //time or "gas" until crash
    void enqueue(); //add new plane
    T dequeue(); //remove old plane
    int count(); //numplanes in queue
    void updatePlanes(); //spread events that happen after each minute
};
#endif