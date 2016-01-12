#ifndef __SFMLS_OBJECT_H__
#define __SFMLS_OBJECT_H__

#include "InputManager.hpp"

#include <SFML/Graphics.hpp>

class Game;
class Object {
public:
  // Constructor for object
  Object(Game* g, sf::Vector2f size, sf::Texture& tex, sf::Vector2i spriteCount);
  ~Object();

  // The game will call this method every frame so the object can update
  virtual void update(float deltaTime) = 0;

  // The game will call this method every frame to draw the object
  virtual void draw() = 0;

  // Get the bounds of the object in View space
  sf::FloatRect getGlobalBounds() const;

  // Get the bounds of the object in Screen space
  sf::FloatRect getScreenBounds() const;

  // Get the position of the object in View space
  sf::Vector2f  getGlobalPosition() const;

  // Get the position of the object in Screen space
  sf::Vector2f  getScreenPosition() const;

  // Move the object to a view space position
  void moveToGlobal(sf::Vector2f);

  // Move the object to a screen space position
  void moveToLocal(sf::Vector2f);

  // Get Object size
  sf::Vector2f getSize();

  // Resize the object specifiying the new size
  void resize(sf::Vector2f new_size);

  // Resize the object specifiying a multiplier to the current size
  void resize(float multiplier);

protected:
  sf::Vector2f position;
  sf::Vector2f size;

  sf::FloatRect bounds;

  sf::Texture& tex;

  sf::Vector2i spriteCount;
  sf::Vector2i spriteNum;
  sf::Sprite sprite;

  Game* game;
  InputManager* inputManager;
};

#endif
