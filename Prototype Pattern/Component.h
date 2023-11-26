#pragma once
class Component
{
public:
	virtual void render() = 0;
	virtual Component* clone() = 0;
};

