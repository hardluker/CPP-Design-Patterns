#pragma once
#include "Tool.h"
class Bucket : public Tool
{
public:
	void mousePress() const override;
	void mouseRelease() const override;
};

