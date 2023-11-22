#pragma once
#include "PointIcon.h"
#include <map>
using namespace std;
class PointIconFactory
{
public:
	PointIcon* getPointIcon(PointType* type);
private:
	map<PointType, PointIcon> icons;
};

