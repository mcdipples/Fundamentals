CC = g++
FLAGS = -std=c++17 -Wall -g  # wall says show errors, g says create a debug mode
OBJS = ManageInventory.o 

all: hw07ec

hw07ec: hw07ec.cpp ManageInventory.o  # step 2 build program
	$(CC) $(FLAGS) hw07ec.cpp -o hw07ec $(OBJS)

ManageInventory.o: ManageInventory.h
	$(CC) $(FLAGS) -c ManageInventory.cpp -o ManageInventory.o


clean:
	rm -f *.o hw07ec hw07ec.tar

tar:
	tar cf hw07ec.tar hw07ec.scr Makefile hw07ec.cpp ManageInventory.h ManageInventory.cpp
