
#include "Queue.h"
#include "Airplane.h"
template <class T>
Queue<T>::Queue(int crashtime){
    this->crashtime = crashtime;
}
template <class T>
void Queue<T>::enqueue(){
   T newPlane(this->crashtime);
   this->planelist.push_back(newPlane);
}
template <class T>
T Queue<T>::dequeue(){
    T newPlane = this->planelist.front();
    planelist.pop_front();
    return newPlane;
}
template <class T>
int Queue<T>::count(){
    return planelist.size();
}
template <class T>
    void Queue<T>::updatePlanes(){
    for (typename list<T>::iterator it=planelist.begin(); it != planelist.end(); ++it){
            it->decrementGas();
        }
}
template classmake  Queue<Airplane>;