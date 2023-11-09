//Forward Declaring the Classes for compilation.
class HeadingNode;
class AnchorNode;
#pragma once
class Operation
{
public:
	virtual void apply(HeadingNode& heading) = 0;
	virtual void apply(AnchorNode& anchor) = 0;
};

