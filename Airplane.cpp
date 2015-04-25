#include "Airplane.h"

Airplane::Airplane(){
	this.gas;
	this.timeSpent;
}
int Airplane::getGas(){
    return gas;
}
int Airplane::getTime(){
	return timeSpent;
}
void Airplane::decrementGas(){
	gas--;
	timeSpent++;
}
