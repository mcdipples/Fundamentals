CC = g++
FLAGS = -std=c++17 -Wall -g  # wall says show errors, g says create a debug mode
OBJS = Queue.o 

all: hw12

hw12: hw12.cpp Queue.o  # step 2 build program
	$(CC) $(FLAGS) hw12.cpp -o hw12 $(OBJS)

Queue.o: Queue.h
	$(CC) $(FLAGS) -c Queue.cpp -o Queue.o


clean:
	rm -f *.o hw12 hw12.tar

tar:
	tar cf hw12.tar hw12.scr Makefile hw12.cpp Queue.h Queue.cpp
