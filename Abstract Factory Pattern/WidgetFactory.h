#pragma once
#include "Button.h"
#include "TextBox.h"
class WidgetFactory
{
public:
	virtual Button* createButton() = 0;
	virtual TextBox* createTextBox() = 0;
};

