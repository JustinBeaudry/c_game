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
	$(CC) main.o $(MAP)/map.o $(MAP)/map-graph.o $(MAP)/tile.o $(MAP)/zone.o -o game

main.o:
	$(CC) $(CFLAGS) main.cpp 

cards.o:
	$(CC) $(CFLAGS) $(LIBRARY)/cards.cpp

deck.o: cards.o
	$(CC) $(CFLAGS) $(LIBRARY)/deck.cpp

library.o: deck.o
	$(CC) $(CFLAGS) $(LIBRARY)/library.cpp

tile.o: zone.o
	$(CC) $(CFLAGS) $(MAP)/tile.cpp

zone.o:
	$(CC) $(CFLAGS) $(MAP)/zone.cpp

map-graph.o:
	$(CC) $(CFLAGS) $(MAP)/map-graph.cpp

map.o: map-graph.o zone.o
	$(CC) $(CFLAGS) $(MAP)/map.cpp

session.o:
	$(CC) $(CFLAGS) $(SESSION)/session.cpp

player.o:
	$(CC) $(CFLAGS) $(TOKEN)/player.cpp

token.o: player.o
	$(CC) $(CFLAGS) $(TOKEN)/token.cpp

clean:
	rm -rf *o game
