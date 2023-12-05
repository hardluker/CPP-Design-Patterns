#include <iostream>
#include "App/ContactForm.h"
#include "MaterialWidgetFactory.h"
#include "AntWidgetFactory.h"
using namespace std;
int main() {
	ContactForm form;
	MaterialWidgetFactory* factory = new MaterialWidgetFactory;
	AntWidgetFactory* factory2 = new AntWidgetFactory;
	form.render(factory);
	form.render(factory2);
}