#pragma once
#include "DialogBox.h"
#include "ListBox.h"
#include "TextBox.h"
#include "Button.h"
class ArticlesDialogBox : public DialogBox
{
public:
	void changed(UIControl* control) override;
	void simulateUserInteraction();

private:
	ListBox* articlesListBox = new ListBox(this);
	TextBox* titleTextBox = new TextBox(this);
	Button* saveButton = new Button(this);

};

