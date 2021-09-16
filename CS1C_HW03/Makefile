CC = g++
FLAGS = -std=c++17 -Wall -g  # wall says show errors, g says create a debug mode
OBJS = Date.o Employee.o Programmer.o SoftwareArchitect.o

all: hw03

hw03: hw03.cpp Date.o Employee.o Programmer.o SoftwareArchitect.o  # step 2 build program
	$(CC) $(FLAGS) hw03.cpp -o hw03 $(OBJS)

Date.o: Date.h
	$(CC) $(FLAGS) -c Date.cpp -o Date.o

Employee.o: Employee.h
	$(CC) $(FLAGS) -c Employee.cpp -o Employee.o

Programmer.o: Programmer.h
	$(CC) $(FLAGS) -c Programmer.cpp -o Programmer.o

Software_Architect.o: SoftwareArchitect.h
	$(CC) $(FLAGS) -c SoftwareArchitect.cpp -o SoftwareArchitect.o

clean:
	rm -f *.o hw03 hw03.tar

tar:
	tar cf hw03.tar hw03.scr Makefile hw03.cpp Date.h Date.cpp Employee.h Employee.cpp Programmer.h Programmer.cpp SoftwareArchitect.h SoftwareArchitect.cpp
