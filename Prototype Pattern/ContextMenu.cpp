#include "ContextMenu.h"
#include "Circle.h"

void ContextMenu::duplicate(Component* component)
{
	newComponent = component->clone();
	
}

ContextMenu::~ContextMenu()
{
	delete newComponent;
}
