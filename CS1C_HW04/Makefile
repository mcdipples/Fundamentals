CC = g++
FLAGS = -std=c++17 -Wall -g  # wall says show errors, g says create a debug mode
OBJS = Date.o Employee.o Programmer.o 

all: hw04

hw04: hw04.cpp Date.o Employee.o Programmer.o   # step 2 build program
	$(CC) $(FLAGS) hw04.cpp -o hw04 $(OBJS)

Date.o: Date.h
	$(CC) $(FLAGS) -c Date.cpp -o Date.o

Employee.o: Employee.h
	$(CC) $(FLAGS) -c Employee.cpp -o Employee.o

Programmer.o: Programmer.h
	$(CC) $(FLAGS) -c Programmer.cpp -o Programmer.o


clean:
	rm -f *.o hw04 hw04.tar

tar:
	tar cf hw04.tar hw04.scr Makefile hw04.cpp Date.h Date.cpp Employee.h Employee.cpp Programmer.h Programmer.cpp 
