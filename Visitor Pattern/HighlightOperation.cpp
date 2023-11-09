#include "HighlightOperation.h"
#include <iostream>
using namespace std;
void HighlightOperation::apply(HeadingNode& heading)
{
	cout << "Highlight Heading" << endl;
}

void HighlightOperation::apply(AnchorNode& anchor)
{
	cout << "Highlight Anchor" << endl;
}
