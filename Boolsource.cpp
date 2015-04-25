#include "Boolsource.h"
#include <stdlib>
#include <time>

BoolSource::BoolSource(double prob){
	this.prob = prob;
}
bool BoolSource::check(){
	srand(clock());
    return rand() <= prob;
}
