#include "Runway.h"

Runway::Runway(){
}
Runway::Runway(int landTime, int takeoffTime){
    this->landingTime = landtime;
    this->takeoffTime = takeoffTime;
}
bool Runway::getBusy(){
    return this->isBusy;
}
void Runway::startLanding(){
    this->isBusy = true;
    this->timeRemaining = this->landingTime;
}
void Runway::startTakeoff(){
    this->isBusy = true;
    this->timeRemaining = this->takeoffTime;
}
int Runway::tickDown(){
    if(this->isBusy == true){
        this->timeRemaining--;
    }
    if(this->timeRemaining <= 0){
        this->isBusy = false;
    }
    return timeRemaining;
}
