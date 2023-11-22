//This one is incomplete and likely running into a late vs early binding situation and possible indirect circular dependencies.
//I will work on this project more at another time.
#include <iostream>
#include <string>
#include "PointService.h"
using namespace std;
int main() {
	PointIconFactory iconFactory;
	PointService service{ iconFactory };
	for (Point point : service.getPoints())
		point.draw();
}