#include <iostream>
#include "Selection.h"
using namespace std;

void Selection::mousePress() const
{
	cout << "Displaying Selection Icon" << endl;
}

void Selection::mouseRelease() const
{
	cout << "Draw dashed rectangle that follows the cursor" << endl;
}
