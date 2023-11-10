#pragma once
#include <list>
#include "Shape.h"
#include "Object.h"
class Group : public Object
{
public:
	void add(Object* object);
	void render() override;
private:
	list<Object*> objects;
};

