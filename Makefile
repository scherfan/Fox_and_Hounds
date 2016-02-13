# Makefile for Fox_and_Hounds

# Variables
CC = g++
CFLAGS = -Wall -O0 -g -W -lncurses -std=c++11
FILES = Character.cpp Main.cpp Screen.cpp
OBJ = Character.o Main.o Screen.o
OUT_EXE = Fox_and_Hounds
DEPS = Character.h Screen.h


%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(OUT_EXE): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(OUT_EXE) core *~
