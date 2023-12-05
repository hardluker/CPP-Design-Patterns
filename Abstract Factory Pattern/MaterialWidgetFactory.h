#pragma once
#include "WidgetFactory.h"
class MaterialWidgetFactory : public WidgetFactory
{
	Button* createButton() override;
	TextBox* createTextBox() override;
};

