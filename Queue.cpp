
#include "Queue.h"

template <class T>
Queue<T>::Queue(int crashtime){
    this.crashtime = crashtime;
}
template <class T>
void Queue<T>::enqueue(){
   T newPlane(this.crashtime);
   this.planelist.push_back();
}
template <class T>
T Queue<T>::dequeue(){
    return this.planelist.pop_front();
}
template <class T>
int Queue<T>::count(){
    return planelist.size();
}
template <class T>
    void Queue<T>::updatePlanes(){
    for (list<int>::iterator it=planelist.begin(); it != planelist.end(); ++it){
            it->decrementGas();
        }
}
