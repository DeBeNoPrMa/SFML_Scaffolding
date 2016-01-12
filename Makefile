CC=g++
STD=-std=c++0x
CFLAGS=-c -Wall -Wpedantic -pedantic-errors -Wextra $(STD)
BIN=bin/game.x
LIBS=-lsfml-graphics -lsfml-window -lsfml-system
OF=bin/object/

all: game

game: $(OF)main.o $(OF)Object.o $(OF)Resources.o $(OF)Widget.o $(OF)Game.o $(OF)InputManager.o
	$(CC) -o $(BIN) $(LIBS) $(STD) $(OF)main.o $(OF)Object.o $(OF)Resources.o $(OF)Widget.o $(OF)Game.o $(OF)InputManager.o

$(OF)main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -o $(OF)main.o

$(OF)Object.o: Base/Object.cpp
	$(CC) $(CFLAGS) Base/Object.cpp -o $(OF)Object.o

$(OF)Resources.o: Base/Resources.cpp
	$(CC) $(CFLAGS) Base/Resources.cpp -o $(OF)Resources.o

$(OF)Widget.o: UI/Widget.cpp
	$(CC) $(CFLAGS) UI/Widget.cpp -o $(OF)Widget.o

$(OF)Game.o: Base/Game.cpp
	$(CC) $(CFLAGS) Base/Game.cpp -o $(OF)Game.o

$(OF)InputManager.o: Base/InputManager.cpp
	$(CC) $(CFLAGS) Base/InputManager.cpp -o $(OF)InputManager.o

clean:
	rm $(OF)*.o
	rm $(BIN)

run:
	./$(BIN)
