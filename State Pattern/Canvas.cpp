#include "Canvas.h"
#include <iostream>
#include "Tool.h"

using namespace std;

void Canvas::mousePress() const
{
	currentTool->mousePress();
}

void Canvas::mouseRelease() const
{
	currentTool->mouseRelease();
}

Tool* Canvas::getCurrentTool() const
{
	return currentTool;
}

void Canvas::setCurrentTool(Tool& currentTool)
{
	this->currentTool = &currentTool;
}
