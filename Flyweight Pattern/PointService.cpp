#include "PointService.h"

PointService::PointService(PointIconFactory* iconFactory) : iconFactory(iconFactory)
{}

vector<Point>* PointService::getPoints()
{
    //In a real situation this would be pulling the list of points from a database.
    //In this example we are simply creating a list in this method and returning.
    
    vector<Point*> points;
    Point point{ 5, 10, iconFactory->getPointIcon(PointType::cafe) };
    points->push_back(point);
    return points;
}
