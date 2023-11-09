#pragma once
#include "Operation.h"
class PlainTextOperation : public Operation
{
	void apply(HeadingNode& heading) override;
	void apply(AnchorNode& anchor) override;
};

