#include "AnchorNode.h"
#include <iostream>
using namespace std;

void AnchorNode::execute(Operation& operation)
{
	operation.apply(*this);
}
