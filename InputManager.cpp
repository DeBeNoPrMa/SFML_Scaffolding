#include "InputManager.h"

InputManager::InputManager() {
}

InputManager::~InputManager() {
}

void InputManager::initializeInputMapping() {
    // You can initialize mappings here too
    // addMapping(sf::Keyboard::K);
    addKeyboardMapping(sf::Keyboard::K);
}

void InputManager::addKeyboardMapping(sf::Keyboard::Key input_k) {
    if (keyboard_map.count(input_k) == 0) { // Key mapping doesnt already exist
        keyboard_map[input_k] = false;
    }
}