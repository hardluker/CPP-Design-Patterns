#include "PlainTextOperation.h"
#include <iostream>
using namespace std;
void PlainTextOperation::apply(HeadingNode& heading)
{
	cout << "Plain Text Extracted from Heading Node" << endl;
}

void PlainTextOperation::apply(AnchorNode& anchor)
{
	cout << "Plain Text Extracted from Anchor Node" << endl;
}
