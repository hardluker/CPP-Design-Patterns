#include "Point.h"

Point::Point(int x, int y, PointIcon* icon)
: x(x), y(y), icon(icon)
{}

void Point::draw() const
{
	cout << "Drawing " << PointTypeUtils::getTypeName(icon.getType()) << " at " << "(" << x << ", " << y << ")";
}
