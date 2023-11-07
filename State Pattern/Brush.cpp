#include <iostream>
#include "Brush.h"
using namespace std;

void Brush::mousePress() const
{
	cout << "Display the Brush icon, draw a line that follows the cursor" << endl;
}

void Brush::mouseRelease() const
{
	cout << "Stop drawing a line" << endl;
}