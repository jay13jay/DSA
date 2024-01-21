CC = g++
CFLAGS = -Wall -g
OBS = ../build
 
# ****************************************************
# Targets needed to bring the executable up to date
 
main: $(OBS)/main.o $(OBS)/display.o $(OBS)/push.o $(OBS)/insertAfter.o
	$(CC) $(CFLAGS) -o ../bin/main ../build/main.o ../build/display.o ../build/push.o ../build/insertAfter.o
 
# The main.o target can be written more simply
 
$(OBS)/main.o: main.cpp ../include/display.h ../include/push.h ../include/insertAfter.h
	$(CC) $(CFLAGS) -c main.cpp -o $(OBS)/main.o
 
$(OBS)/display.o: ../include/display.h
	$(CC) $(CFLAGS) -c display.cpp -o $(OBS)/display.o
 
$(OBS)/push.o: ../include/push.h
	$(CC) $(CFLAGS) -c push.cpp -o $(OBS)/push.o

$(OBS)/insertAfter.o: ../include/insertAfter.h
	$(CC) $(CFLAGS) -c insertAfter.cpp -o $(OBS)/insertAfter.o
