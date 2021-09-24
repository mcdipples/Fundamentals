CC = g++
FLAGS = -std=c++17 -Wall -g  # wall says show errors, g says create a debug mode
OBJS = Lotto.o 

all: hw05

hw05: hw05.cpp Lotto.o   # step 2 build program
	$(CC) $(FLAGS) hw05.cpp -o hw05 $(OBJS)

Lotto.o: Lotto.h
	$(CC) $(FLAGS) -c Lotto.cpp -o Lotto.o

clean:
	rm -f *.o hw05 hw05.tar

tar:
	tar cf hw05.tar hw05.scr Makefile hw05.cpp Lotto.h Lotto.cpp 