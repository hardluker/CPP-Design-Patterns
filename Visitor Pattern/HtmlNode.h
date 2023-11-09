#pragma once
#include "Operation.h"
class HtmlNode
{
public:
	virtual void execute(Operation& operation) = 0;
};

