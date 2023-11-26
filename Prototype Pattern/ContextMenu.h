#pragma once
#include "Component.h"
class ContextMenu
{
public: 
	void duplicate(Component* component);
	~ContextMenu();
private:
	Component* newComponent = nullptr;
};

