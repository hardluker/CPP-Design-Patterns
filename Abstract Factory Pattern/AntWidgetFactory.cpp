#include "AntWidgetFactory.h"
#include "AntDesign/AntButton.h"
#include "AntDesign/AntTextBox.h"

Button* AntWidgetFactory::createButton()
{
	AntButton* button = new AntButton;
	return button;
}

TextBox* AntWidgetFactory::createTextBox()
{
	AntTextBox* textBox = new AntTextBox;
	return textBox;
}
