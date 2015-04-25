
#include "Statkeeper.h"

Statkeeper::Statkeeper(int simTime){
}
	void Statkeeper::plusTakeoffPlanes()
	{
		this.takeoffPlanes++;
	}
	
	void Statkeeper::plusLandedPlanes()
	{
		this.landedPlanes++;
	}
	
	void Statkeeper::plusCrashPlanes()
	{
		this.crashedPlanes++;
	}	
	
	void Statkeeper::plusTakeoffTime(int time)
	{
		this.takeoffTime++;
		
	}	
	void Statkeeper::plusLandingTime(int time)
	{
		this.landingTime++;
	}
	
	int Statkeeper::avgTakeoffTime()
	{
		double avg1;
		avg1 = takeoffTime / takeoffPlanes;		
		return 0;
}
	int Statkeeper::avgLandingTime()
	{		
		double avg2;
		avg2 = landedPlanes / landedPlanes;		
		return 0;
}
	void Statkeeper::printStats()
	{
		
		
		cout << "Total simulation time: " << simTime << endl;
		cout << "The number of planes that took off: " << takeoffPlanes << endl;
		cout << "The number of planes that landed: " << landedPlanes << endl;
		cout << "The number of planes crashed: " << crashedPlanes << endl;
		cout << "The average time a plane in the takeoff queue: " << avg1 << endl;
		cout << "The average time a plane in the landing queue: " << avf2 << endl;
		
}
