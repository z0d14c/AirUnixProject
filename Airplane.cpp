#include "Airplane.h"

Airplane::Airplane(int gas){
	this.gas = gas;
	this.timeSpent = 0;
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
