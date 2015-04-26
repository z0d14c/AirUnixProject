#include "Boolsource.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

BoolSource::BoolSource(double prob){
	this->prob = prob;
}
bool BoolSource::check(){
	//Seed random number generator then return random number
	srand(clock());
	int randVar = rand() % 100;
	double probVar = prob * 100;
    return randVar <= probVar;
}