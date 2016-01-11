#include "../Base/Object.hpp"

#include <functional>

class UIElement : public Object {
public:
  UIElement(Game *g, sf::Vector2f size, sf::Texture& tex, sf::Vector2i spriteCount);
  ~UIElement();

  void setCallback(std::function<void()> delegate);
  void setActive(bool a);

  virtual void update(float deltaTime);

 protected:
  bool active;

  std::function<void()> delegate;
};
