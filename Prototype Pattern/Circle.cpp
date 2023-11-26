#include "Circle.h"
#include <iostream>
#include <memory>
using namespace std;

Circle::~Circle()
{
	delete newCircle;
}

void Circle::render()
{
	cout << "Rendering a circle" << endl;
}

void Circle::setRadius(int radius)
{
	this->radius = radius;
}

int Circle::getRadius()
{
	return this->radius;
}

Component* Circle::clone()
{
	newCircle = new Circle;
	newCircle->setRadius(radius);
	return newCircle;
}
