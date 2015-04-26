#include "Boolsource.h"
#include <stdlib.h>
#include <time.h>

BoolSource::BoolSource(double prob){
	this->prob = prob;
}
bool BoolSource::check(){
	//Seed random number generator then return random number
	srand(clock());
    return rand() <= prob;
}
