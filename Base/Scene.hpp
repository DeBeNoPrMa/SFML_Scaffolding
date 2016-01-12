#ifndef __SFMLS_SCENE__
#define __SFMLS_SCENE__

#include "ObjectManager.hpp"
#include "../UI/UIManager.hpp"

class Scene {
public:
  Scene();
  ~Scene();

private:
  ObjectManager om;
  UIManager uim;

  InputManager *im;
  sf::RenderWindow *window;

  Game *game;
};

#endif
