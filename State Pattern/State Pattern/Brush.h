#pragma once
#include "Tool.h"

class Brush : public Tool
{
public:
	void mousePress() const override;
	void mouseRelease() const override;
};

