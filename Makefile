#Makefile for Team 10 AirSim project
CC = g++
PROG = AirSim
OBJS = AirSim.o Airplane.o Boolsource.o Queue.o Runway.o Statkeeper.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

AirSim.o: 
	$(CC) -c AirSim.cpp

AirPlane.o:
	$(CC) -c AirPlane.cpp

Boolsource.o:
	$(CC) -c Boolsource.cpp

Queue.o:
	$(CC) -c Queue.cpp

Runway.o:
	$(CC) -c Runway.cpp

Statkeeper.o:
	$(CC) -c Statkeeper.cpp

Clean:
	rm -f $(PROG) $(OBJS)