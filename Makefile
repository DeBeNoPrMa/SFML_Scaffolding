CC=g++
STD=-std=c++0x
CFLAGS=-c -Wall -Wpedantic -pedantic-errors -Wextra $(STD)
BIN=bin/game.x
LIBS=-lsfml-graphics -lsfml-window -lsfml-system
OF=bin/object/

all: game

game: main.o Object.o Resources.o UIElement.o Game.o InputManager.o
	$(CC) -o $(BIN) $(LIBS) $(STD) $(OF)main.o $(OF)Object.o $(OF)Resources.o $(OF)UIElement.o $(OF)Game.o $(OF)InputManager.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -o $(OF)main.o

Object.o: Base/Object.cpp
	$(CC) $(CFLAGS) Base/Object.cpp -o $(OF)Object.o

Resources.o: Base/Resources.cpp
	$(CC) $(CFLAGS) Base/Resources.cpp -o $(OF)Resources.o

UIElement.o: UI/UIElement.cpp
	$(CC) $(CFLAGS) UI/UIElement.cpp -o $(OF)UIElement.o

Game.o: Base/Game.cpp
	$(CC) $(CFLAGS) Base/Game.cpp -o $(OF)Game.o

InputManager.o: Base/InputManager.cpp
	$(CC) $(CFLAGS) Base/InputManager.cpp -o $(OF)InputManager.o

clean:
	rm $(OF)*.o
	rm $(BIN)

run:
	./$(BIN)
