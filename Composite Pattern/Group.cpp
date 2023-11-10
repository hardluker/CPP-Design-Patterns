#include "Group.h"
#include <iostream>
using namespace std;
void Group::add(Object* object)
{
	objects.push_back(object);
}

void Group::render()
{
	for (auto* object : objects) {
			object->render();
	}
}
