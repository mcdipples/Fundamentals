CC = g++
FLAGS = -std=c++17 -Wall -g  # wall says show errors, g says create a debug mode
# OBJS = 

all: hw08

hw08: hw08.cpp   # step 2 build program
	$(CC) $(FLAGS) hw08.cpp -o hw08 $(OBJS)

clean:
	rm -f *.o hw08 hw08.tar
tar:
	tar cf hw08.tar hw08.scr Makefile hw08.cpp 
