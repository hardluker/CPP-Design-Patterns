#include "ContactForm.h"
#include"../WidgetFactory.h"

void ContactForm::render(WidgetFactory* factory)
{
	factory->createTextBox()->render();
	factory->createButton()->render();
}
