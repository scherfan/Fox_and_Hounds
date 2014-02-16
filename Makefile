# Makefile for Fox_and_Hounds

fox_and_hounds: main.o game_board.o
	g++ -Wall main.o game_board.o -o fox_and_hounds

main.o: main.cpp fox_and_hounds.h
	g++ -c main.cpp

game_board.o: game_board.cpp fox_and_hounds.h
	g++ -c game_board.cpp

clean:
	rm -rf *.o *.cpp~ *.h~ fox_and_hounds core