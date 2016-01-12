#include "Object.hpp"
#include "Game.hpp"

Object::Object(Game* g, sf::Vector2f size, sf::Texture& tex, sf::Vector2i spriteCount) :
    game(g), size(size), tex(tex), spriteCount(spriteCount)
{
    inputManager = game->getInputManager();
    sprite.setTexture(tex);
}

Object::~Object()
{
}

void Object::draw() {
    sprite.setScale(size.x / tex.getSize().x*spriteCount.x, size.y / tex.getSize().y*spriteCount.y);

    sprite.setTextureRect(sf::IntRect(
        spriteNum.x*tex.getSize().x / spriteCount.x,
        spriteNum.y*tex.getSize().y / spriteCount.y,
        tex.getSize().x / spriteCount.x,
        tex.getSize().y / spriteCount.y
        ));

    sprite.setPosition(position);
    game->getWindow()->draw(sprite);
}

void Object::update(float deltaTime) {}

sf::FloatRect Object::getGlobalBounds() const {
  // TODO
}

sf::FloatRect Object::getScreenBounds() const {
  // TODO
}

sf::Vector2f Object::getGlobalPosition() const {
  return position;
}

sf::Vector2f Object::getScreenPosition() const {
  // TODO
}

void Object::moveToGlobal(sf::Vector2f new_p) {
  position = new_p;
}

void Object::moveToLocal(sf::Vector2f new_p) {
  // TODO
}

sf::Vector2f Object::getSize() {
  return size;
}

void Object::resize(sf::Vector2f new_size) {
  size = new_size;
}

void Object::resize(float multiplier) {
  size = size * multiplier;
}
