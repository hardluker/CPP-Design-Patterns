#pragma once
#include "WidgetFactory.h"
class AntWidgetFactory : public WidgetFactory
{
	Button* createButton() override;
	TextBox* createTextBox() override;
};

