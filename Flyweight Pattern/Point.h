#pragma once
#include "PointType.h"
#include <string>
#include <iostream>
#include "PointIcon.h"
using namespace std;
class Point
{
public:
	Point(int x, int y, PointIcon* icon);
	void draw() const;
private:
	int x;
	int y;
	PointIcon* icon;
};

