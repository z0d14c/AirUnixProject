#include <iostream>
#include <stdlib.h>
#include "Airplane.h"
#include "Boolsource.h"
#include "Runway.h"
#include "Queue.h"
#include "Statkeeper.h"


using namespace std;

int main(int argc, char* argv[]){

	//Defaults
	int landTime = 1;
	int goTime = 2;
	double landProb = 0.5;
	double goProb = 0.5;
	int start = 0;
	int end = 50;
	int crashTime = 20;
	
	//Check for args and set vars
	if(argc > 0)
		landTime = atoi(argv[0]);
	if(argc > 1)
		goTime = atoi(argv[1]);
	if(argc > 2)
		landProb = atof(argv[2]);
	if(argc > 3)
		goProb = atof(argv[3]);
	if(argc > 4)
		start = atoi(argv[4]);
	if(argc > 5)
		end = atoi(argv[5]);
	if(argc > 6)
		crashTime = atoi(argv[6]);
	
	//Create objects
	BoolSource* isLanding = new BoolSource(landProb);
	BoolSource* isTakingOff = new BoolSource(goProb);
	Queue<Airplane>* landing = new Queue<Airplane>(crashTime);
	Queue<Airplane>* going = new Queue<Airplane>(crashTime);
	Statkeeper* stats = new Statkeeper(end - start);
	Runway* runway = new Runway(landTime,goTime);
	Airplane plane(0);
	
	//Start loop
	for(int cur = start; cur < end; cur++)
	{
		//Check Boolsource for plane entering landing queue
		if(isLanding->check())
			landing->enqueue();
			
		//Check Boolsource for plane entering takeoff queue
		if(isTakingOff->check())
			going->enqueue();
			
		//Handle queues if runway is not busy
		if(!runway->getBusy() && landing->count() > 0)
		{
			while(true)
			{
				plane = landing->dequeue();
				if(plane.getGas() <= 0)
				{
					stats->plusCrashPlanes();
				}
				else
					break;
			}
				stats->plusLandedPlanes();
				stats->plusLandingTime(plane.getTime());
				runway->startLanding();
		}
		else if(!runway->getBusy() && going->count() > 0) {
				plane = going->dequeue();
				stats->plusTakeoffPlanes();
				stats->plusTakeoffTime(plane.getTime());
				runway->startTakeoff();
		}
		
		//Update planes and runway
		landing->updatePlanes();
		going->updatePlanes();
		runway->tickDown();
	}
		//Print stats from the StatKeeper
		stats->printStats();
    return 0;
}
