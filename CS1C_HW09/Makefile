CC = g++
FLAGS = -std=c++17 -Wall -g  # wall says show errors, g says create a debug mode
OBJS = triangle.o rectangle.o 

all: hw09

hw09: hw09.cpp triangle.o rectangle.o   # step 2 build program
	$(CC) $(FLAGS) hw09.cpp -o hw09 $(OBJS)

: shape.h
	$(CC) $(FLAGS) -c -o 

triangle.o: triangle.h
	$(CC) $(FLAGS) -c triangle.cpp -o triangle.o

rectangle.o: rectangle.h
	$(CC) $(FLAGS) -c rectangle.cpp -o rectangle.o


clean:
	rm -f *.o hw09 hw09.tar

tar:
	tar cf hw09.tar hw09.scr Makefile hw09.cpp shape.h triangle.h triangle.cpp rectangle.h rectangle.cpp 
