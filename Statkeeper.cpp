
#include "Statkeeper.h"

Statkeeper::Statkeeper(int simTime){
    this->simTime = simTime;
}
	void Statkeeper::plusTakeoffPlanes()
	{
		this->takeoffPlanes++;
	}
	
	void Statkeeper::plusLandedPlanes()
	{
		this->landedPlanes++;
	}
	
	void Statkeeper::plusCrashPlanes()
	{
		this->crashedPlanes++;
	}	
	
	void Statkeeper::plusTakeoffTime(int time)
	{
		this->takeoffTime+=time;
		
	}	
	void Statkeeper::plusLandingTime(int time)
	{
		this->landingTime+=time;
	}
	
	void Statkeeper::avgTakeoffTime()
	{
		avg1 = (double)takeoffTime / (double)takeoffPlanes;
}
	void Statkeeper::avgLandingTime()
	{
		avg2 = (double)landingTime / (double)landedPlanes;
}
	void Statkeeper::printStats()
	{
		avgTakeoffTime();
		avgLandingTime();
		cout << "Total simulation time: " << simTime << endl;
		cout << "The number of planes that took off: " << takeoffPlanes << endl;
		cout << "The number of planes that landed: " << landedPlanes << endl;
		cout << "The number of planes crashed: " << crashedPlanes << endl;
		cout << "The average time a plane in the takeoff queue: " << avg1 << endl;
		cout << "The average time a plane in the landing queue: " << avg2 << endl;
		
}
