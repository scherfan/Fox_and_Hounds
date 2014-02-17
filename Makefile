# Makefile for Fox_and_Hounds

fox_and_hounds: main.o game.o
	g++ -Wall main.o game.o -o fox_and_hounds

main.o: main.cpp fox_and_hounds.h
	g++ -c main.cpp

game_board.o: game.cpp fox_and_hounds.h
	g++ -c game.cpp

clean:
	rm -rf *.o *.cpp~ *.h~ fox_and_hounds core