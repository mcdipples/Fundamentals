CC = g++
FLAGS = -std=c++17 -Wall -g  # wall says show errors, g says create a debug mode
OBJS = ManageInventory.o 

all: hw07

hw07: hw07.cpp ManageInventory.o  # step 2 build program
	$(CC) $(FLAGS) hw07.cpp -o hw07 $(OBJS)

ManageInventory.o: ManageInventory.h
	$(CC) $(FLAGS) -c ManageInventory.cpp -o ManageInventory.o


clean:
	rm -f *.o hw07 hw07.tar

tar:
	tar cf hw07.tar hw07.scr Makefile hw07.cpp ManageInventory.h ManageInventory.cpp
