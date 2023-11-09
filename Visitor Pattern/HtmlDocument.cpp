#include "HtmlDocument.h"

void HtmlDocument::add(HtmlNode* node)
{
	nodes.push_back(node);
}

void HtmlDocument::execute(Operation& operation)
{
	for (auto node : nodes) {
		node->execute(operation);
	}
}

