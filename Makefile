# Makefile for Fox_and_Hounds

# Variables
CC = g++
CFLAGS = -Wall -O0 -g -W -lncurses
FILES = main.cpp game.cpp
OBJ = main.o game.o
OUT_EXE = Fox_and_Hounds
DEPS = fox_and_hounds.h


%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(OUT_EXE): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(OUT_EXE) core *~
