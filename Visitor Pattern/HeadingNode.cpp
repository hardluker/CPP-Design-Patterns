#include "HeadingNode.h"
#include <iostream>
using namespace std;

void HeadingNode::execute(Operation& operation)
{
	operation.apply(*this);
}
