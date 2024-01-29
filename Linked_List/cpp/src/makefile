CC = g++
CFLAGS = -Wall -g -Werror -pedantic -std=c++17
OBJECTS = ../build
BIN = ../bin

# ****************************************************
# Targets needed to bring the executable up to date
main: $(OBJECTS)/main.o $(OBJECTS)/linkedlist.o
	$(CC) $(CFLAGS) -o $(BIN)/linkedlist $(OBJECTS)/main.o $(OBJECTS)/linkedlist.o

$(OBJECTS)/main.o: main.cpp ../include/linkedlist.h
	$(CC) $(CFLAGS) -c main.cpp -o $(OBJECTS)/main.o

$(OBJECTS)/linkedlist.o: ../include/linkedlist.h
	$(CC) $(CFLAGS) -c linkedlist.cpp -o $(OBJECTS)/linkedlist.o
