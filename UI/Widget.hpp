#ifndef __SFMLS_UIELEMENT__
#define __SFMLS_UIELEMENT__

#include "../Base/Object.hpp"

#include <functional>

namespace UI {
  class Widget : public Object {
  public:
    Widget(Game *g, sf::Vector2f size, sf::Texture& tex, sf::Vector2i spriteCount);
    ~Widget();

    void setCallback(std::function<void()> delegate);
    void setActive(bool a);

    virtual void update(float deltaTime);

  protected:
    bool active;

    std::function<void()> delegate;
  };
}

#endif
