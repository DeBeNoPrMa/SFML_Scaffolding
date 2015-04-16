#ifndef __SFMS_INPUTMANAGER_H_
#define __SFMS_INPUTMANAGER_H_

#include <SFML\Graphics.hpp>
#include <map>

class InputManager
{
public:
    InputManager();
    ~InputManager();

    void update();

private:
    void initializeInputMapping();
    void addKeyboardMapping(sf::Keyboard::Key input_k);

    std::map<sf::Keyboard::Key, bool> keyboard_map;
};

#endif