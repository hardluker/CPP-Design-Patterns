#include <iostream>
#include <memory>
#include "HtmlDocument.h"
#include "HeadingNode.h"
#include "AnchorNode.h"
#include "HighlightOperation.h"
#include "PlainTextOperation.h"
using namespace std;

int main() {
	//Creating an HtmlDocument
	HtmlDocument document;

	//Creating headingNode smartpointer and adding it through polymorphic method add().
	auto headingNode = make_unique<HeadingNode>();
	document.add(headingNode.get());

	//Creating headingNode smartpointer and adding it through polymorphic method add().
	auto anchorNode = make_unique<AnchorNode>();
	document.add(anchorNode.get());

	//Creating Highlight Operation and executing it on the nodes in the document.
	HighlightOperation highlightOperation;
	document.execute(highlightOperation);

	//Creating PlainText Operation and executing it on the nodes in the document.
	PlainTextOperation plainTextOperation;
	document.execute(plainTextOperation);

	return 0;
}

/*
** Console Output:

Highlight Heading
Highlight Anchor
Plain Text Extracted from Heading Node
Plain Text Extracted from Anchor Node
*/