#pragma once
#include "Tool.h"

class Selection : public Tool
{
public:
	void mousePress() const override;
	void mouseRelease() const override;
};

