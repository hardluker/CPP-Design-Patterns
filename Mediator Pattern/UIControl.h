#pragma once
#include "DialogBox.h"
class UIControl
{
public:
	UIControl(DialogBox* owner);
protected:
	DialogBox* owner;
};

