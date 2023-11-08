#pragma once
#include "UIControl.h"
class Button : public UIControl
{
public:
	Button(DialogBox* owner);
	bool isEnabled();
	void setEnabled(bool enabled);
private:
	bool enabled = false;
};

