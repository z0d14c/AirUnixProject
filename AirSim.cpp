#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
	
	int landTime = 1;
	int goTime = 2;
	double landProb = 0.5;
	double goProb = 0.5;
	int start = 0;
	int end = 50;
	int crashTime = 20;
	
	BoolSource* isLanding = new BoolSource(landProb);
	BoolSource* isTakingOff = new BoolSource(goProb);
	Queue* landing = new Queue(crashTime);
	Queue* going = new Queue(crashTime);
	Statkeeper* stats = new Statkeeper(end - start);
	Runway* runway = new Runway(landTime,goTime);
	Airplane* plane;
	
	for(int cur = start; cur < end; cur++)
	{
		if(isLanding->check())
			landing->enqueue();
		if(isTakingOff->check())
			going->enqueue();
		if(!runway->isBusy() && landing->count() > 0)
		{
			while(true)
			{
				plane = landing->dequeue();
				if(plane->getGas() <= 0)
				{
					stats->plusCrashPlanes();
				}
				else
					break;
			}
				stats->plusLandedPlanes();
				stats->plusLandingTime(plane->getTime());
				runway->startLanding();
		}
		else if(!runway->isBusy() && going->count() > 0) {
				plane = going->dequeue();
				stats->plusTakeoffPlanezs();
				stats->plusTakeoffTime(plane->getTime());
				runway->startTakeoff();
		}
		runway->TickDown();
	}
		stats->printStats();
    return 0;
}