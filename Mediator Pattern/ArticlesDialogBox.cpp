#include "ArticlesDialogBox.h"
#include <iostream>
using namespace std;


void ArticlesDialogBox::changed(UIControl* control)
{
	
	if (control == articlesListBox) {
		titleTextBox->setContent(articlesListBox->getSelection());
		saveButton->setEnabled(true);
	}
	else if (control == titleTextBox) {
		auto content = titleTextBox->getContent();
		bool isEmpty = (content.empty());
		saveButton->setEnabled(!isEmpty);
	}
}

void ArticlesDialogBox::simulateUserInteraction()
{
	
	articlesListBox->setSelection("23");
	titleTextBox->setContent("");
	cout << "Textbox Content: " << titleTextBox->getContent() << endl;
	cout << "Button Enabled: " << saveButton->isEnabled() << endl;

	delete articlesListBox; //Cleaning up memory management at the end of the simulation
	delete titleTextBox;
	delete saveButton;
}
