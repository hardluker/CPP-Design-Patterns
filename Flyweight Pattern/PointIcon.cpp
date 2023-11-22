#include "PointIcon.h"

PointIcon::PointIcon(PointType type, const string& icon)
	: type(type), icon(icon)
{}

PointType PointIcon::getType() const
{
	return type;
}
