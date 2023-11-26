#pragma once
#include "Component.h"
class Circle : public Component
{
public:
	~Circle();
	void render() override;
	Component* clone() override;
	
	void setRadius(int radius);
	int getRadius();
private:
	int radius;
	Circle* newCircle = nullptr;

};

