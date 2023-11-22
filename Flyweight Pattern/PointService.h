#pragma once
#include<vector>
#include "Point.h"
#include "PointIconFactory.h"
using namespace std;
class PointService
{
public:
	PointService(PointIconFactory* iconFactory);
	vector<Point*> getPoints();
private:
	PointIconFactory* iconFactory;
};

