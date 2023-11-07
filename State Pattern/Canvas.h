#pragma once
#include "Tool.h"

class Canvas
{
public:
	Canvas() = default;
	void mousePress() const;
	void mouseRelease() const;
	Tool* getCurrentTool() const;
	void setCurrentTool(Tool& currentTool);
private:
	Tool* currentTool;
};

