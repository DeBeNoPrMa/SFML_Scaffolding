CC=g++
CFLAGS=-c -Wall -Wpedantic -pedantic-errors -Wextra
BIN=bin/game.x
LIBS=-lsfml-graphics -lsfml-window -lsfml-system

all: game

game: main.o Object.o Resources.o UIElement.o Game.o InputManager.o
	$(CC) -o $(BIN) $(LIBS) main.o Object.o Resources.o UIElement.o Game.o InputManager.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Object.o: Object.cpp
	$(CC) $(CFLAGS) Object.cpp

Resources.o: Resources.cpp
	$(CC) $(CFLAGS) Resources.cpp

UIElement.o: UIElement.cpp
	$(CC) $(CFLAGS) UIElement.cpp

Game.o: Game.cpp
	$(CC) $(CFLAGS) Game.cpp

InputManager.o: InputManager.cpp
	$(CC) $(CFLAGS) InputManager.cpp

clean:
	rm *.o
	rm $(BIN)

run:
	./$(BIN)
