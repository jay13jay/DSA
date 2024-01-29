CC = g++
CFLAGS = -Wall -g -Werror -pedantic -std=c++17
OBS = ../build
 
# ****************************************************
# Targets needed to bring the executable up to date
 
main: $(OBS)/main.o $(OBS)/display.o $(OBS)/push.o $(OBS)/append.o $(OBS)/insertAfter.o $(OBS)/deleteN.o $(OBS)/reverse.o
	$(CC) $(CFLAGS) -o ../bin/main $(OBS)/main.o $(OBS)/display.o $(OBS)/push.o $(OBS)/append.o $(OBS)/insertAfter.o $(OBS)/deleteN.o $(OBS)/reverse.o
 
# The main.o target can be written more simply
 
$(OBS)/main.o: main.cpp ../include/display.h ../include/push.h ../include/insertAfter.h ../include/deleteN.h ../include/reverse.h
	$(CC) $(CFLAGS) -c main.cpp -o $(OBS)/main.o
 
$(OBS)/display.o: ../include/display.h
	$(CC) $(CFLAGS) -c display.cpp -o $(OBS)/display.o
 
$(OBS)/push.o: ../include/push.h
	$(CC) $(CFLAGS) -c push.cpp -o $(OBS)/push.o

$(OBS)/append.o: ../include/append.h
	$(CC) $(CFLAGS) -c append.cpp -o $(OBS)/append.o

$(OBS)/insertAfter.o: ../include/insertAfter.h
	$(CC) $(CFLAGS) -c insertAfter.cpp -o $(OBS)/insertAfter.o

$(OBS)/deleteN.o: ../include/deleteN.h
	$(CC) $(CFLAGS) -c deleteN.cpp -o $(OBS)/deleteN.o

$(OBS)/reverse.o: ../include/reverse.h
	$(CC) $(CFLAGS) -c reverse.cpp -o $(OBS)/reverse.o

