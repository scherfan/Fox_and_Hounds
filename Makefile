# Makefile for Fox_and_Hounds

CC=g++
FILES=
OUT_EXE=Fox_and_Hounds
CFLAGS=-c -Wall

all: fox_and_hounds

fox_and_hounds: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES)

clean:
	-rm -f *.o fox_and_hounds core