#include "MaterialWidgetFactory.h"
#include "MaterialDesign/MaterialButton.h"
#include "MaterialDesign/MaterialTextBox.h"

Button* MaterialWidgetFactory::createButton()
{
    MaterialButton* button = new MaterialButton;
    return button;
}

TextBox* MaterialWidgetFactory::createTextBox()
{
    MaterialTextBox* textBox = new MaterialTextBox;
    return textBox;
}
