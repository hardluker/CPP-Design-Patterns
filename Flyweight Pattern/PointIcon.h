#pragma once
#include "PointType.h"
#include <string>
using namespace std;
class PointIcon
{
public:
	PointIcon() = default;
	PointIcon(PointType type, const string& icon);
	PointType getType() const;
private:
	PointType type;
	string icon;
};

