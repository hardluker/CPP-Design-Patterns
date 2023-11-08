#pragma once
#include "UIControl.h"
#include <string>
using namespace std;
class TextBox : public UIControl
{
public:
	TextBox(DialogBox* owner);
	string getContent();
	void setContent(const string& content);
private:
	string content;
};

