# Compiler
CC=g++
# Flags
CFLAGS=-c

#============
# Directories
#============
# library dir
LIBRARY=./library
# map dir
MAP=./map
# session dir
SESSION=./session
# token dir
TOKEN=./token

all: game

game: main.o cards.o deck.o library.o map.o zone.o session.o token.o player.o
	$(CC) main.o library/cards.o library/deck.o library/library.o map/map.o map/zone.o session/session.o token/player.o token/token.o -o game

map: main.o map.o map-graph.o
	$(CC) main.o $(MAP)/map.o $(MAP)/map-graph.o -o game

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp 

cards.o: cards.cpp
	$(CC) $(CFLAGS) $(LIBRARY)/cards.cpp

deck.o: cards.o deck.cpp
	$(CC) $(CFLAGS) $(LIBRARY)/deck.cpp

library.o: deck.o library.cpp
	$(CC) $(CFLAGS) $(LIBRARY)/library.cpp

zone.o: zone.cpp
	$(CC) $(CFLAGS) $(MAP)/zone.cpp

map-graph.o: map-graph.cpp
	$(CC) $(CFLAGS) $(MAP)/map-graph.cpp

map.o: map-graph.o zone.o map.cpp
	$(CC) $(CFLAGS) $(MAP)/map.cpp

session.o: session.cpp
	$(CC) $(CFLAGS) $(SESSION)/session.cpp

player: player.coo
	$(CC) $(CFLAGS) $(TOKEN)/player.cpp

token: player.o token.cpp
	$(CC) $(CFLAGS) $(TOKEN)/token.cpp

clean:
	rm -rf *o game
