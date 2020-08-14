#Makefile for CharacterCreation program

all: main.o character.o
	g++ -Wall -ggdb -o bin/charactercreator build/main.o build/character.o

main.o: src/main.cpp include/character.h
	g++ -Wall -ggdb -I include -o build/main.o -c src/main.cpp 

character.o: src/character.cpp include/character.h
	g++ -Wall -ggdb -I include -o build/character.o -c src/character.cpp
