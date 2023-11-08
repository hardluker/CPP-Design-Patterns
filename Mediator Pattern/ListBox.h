#pragma once
#include "UIControl.h"
#include <string>
using namespace std;
class ListBox : public UIControl
{
public:
	ListBox(DialogBox* owner);
	string getSelection() const;
	void setSelection(const string& selection);
private:
	string selection;
};

