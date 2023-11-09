#pragma once
#include "Operation.h"
class HighlightOperation : public Operation
{
	void apply(HeadingNode& heading) override;
	void apply(AnchorNode& anchor) override;
};

