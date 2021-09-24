CC = g++
FLAGS = -std=c++17 -Wall -g  # wall says show errors, g says create a debug mode
OBJS = Reverse.o 

all: hw06

hw06: hw06.cpp Reverse.o   # step 2 build program
	$(CC) $(FLAGS) hw06.cpp -o hw06 $(OBJS)

Reverse.o: Reverse.h
	$(CC) $(FLAGS) -c Reverse.cpp -o Reverse.o

clean:
	rm -f *.o hw06 hw06.tar

tar:
	tar cf hw06.tar hw06.scr Makefile hw06.cpp Reverse.h Reverse.cpp 