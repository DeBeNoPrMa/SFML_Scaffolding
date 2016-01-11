#include "UIElement.hpp"

UIElement::UIElement(Game *g, sf::Vector2f size, sf::Texture& tex, sf::Vector2i spriteCount) : Object(g, size, tex, spriteCount) {

}

UIElement::~UIElement() {
}

void UIElement::setCallback(std::function<void()> delegate) {
  this->delegate = delegate;
}

void UIElement::update(float deltaTime) {
  if (active) {
    delegate();
  }
}

void UIElement::setActive(bool a) {
  active = a;
}
