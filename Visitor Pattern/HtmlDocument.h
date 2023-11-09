#pragma once
#include <list>
#include "HtmlNode.h"
using namespace std;
class HtmlDocument
{
public:
	void add(HtmlNode* node);
	void execute(Operation& operation);
private:
	list<HtmlNode*> nodes;
};

