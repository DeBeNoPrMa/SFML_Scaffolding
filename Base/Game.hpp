#ifndef __SFMLS_GAME_H__
#define __SFMLS_GAME_H__

#include <SFML/Graphics.hpp>
#include <list>

#include "InputManager.hpp"
#include "Object.hpp"

#include "SceneManager.hpp"

class Game
{
 public:
  Game(int scrwidth, int scrheight, std::string title, int style);
  virtual ~Game();

  void run();
  virtual void update(float deltaTime) = 0;
  virtual void draw() = 0;
  virtual void processEvents() = 0;

  InputManager*       getInputManager();
  sf::RenderWindow*   getWindow();

 protected:
  SceneManager sm;

  InputManager        inputManager;
  sf::RenderWindow    window;

 private:
  void render();
};

#endif
