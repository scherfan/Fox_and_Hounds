# Makefile for Fox_and_Hounds

# Variables
CC = g++
CFLAGS = -Wall -O0 -g -W -lncurses
FILES = Character.cpp Game.cpp Main.cpp Screen.cpp
OBJ = Character.o Game.o Main.o Screen.o
OUT_EXE = Fox_and_Hounds
DEPS = Character.h Screen.h Game.h


%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(OUT_EXE): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(OUT_EXE) core *~
