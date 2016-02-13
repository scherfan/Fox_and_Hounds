# Makefile for Fox_and_Hounds

# Variables
CC = g++
CFLAGS = -Wall -O0 -g -W
FILES = main.cpp game.cpp
OBJ = main.o game.o
OUT_EXE = Fox_and_Hounds
DEPS = fox_and_hound.h


%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(OUT_EXE): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

#fox_and_hounds: main.o game.o
#	g++ -Wall -g -0O main.o game.o -o fox_and_hounds

#main.o: main.cpp fox_and_hounds.h
#	g++ -c main.cpp

#game_board.o: game.cpp fox_and_hounds.h
#	g++ -c game.cpp

clean:
	rm -f *.o $(OUT_EXE) core *~
