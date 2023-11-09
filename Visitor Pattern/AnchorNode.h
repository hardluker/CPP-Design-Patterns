#pragma once
#include "HtmlNode.h"
class AnchorNode : public HtmlNode
{
public:
	void execute(Operation& operation) override;
};