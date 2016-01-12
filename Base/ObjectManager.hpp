#ifndef __SFMLS_OBJECTMANAGER__
#define __SFMLS_OBJECTMANAGER__

#include "Object.hpp"

#include <list>
#include <memory>

class ObjectManager {
public:
  ObjectManager();
  ~ObjectManager();

  void update(float deltaTime);
  void draw();

  Object* spawnObject();

protected:
  // Necessitem que els punters als objectes es mantinguin valids
  // per aixo utilitzem una llista en comptes de un vector.
  // TODO: Implementar pooled list per reduir memory overhead
  std::list<Object> object_list;
};

#endif
