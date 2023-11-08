class UIControl; //Have to create a prototype of the UIControl class
#pragma once
using namespace std;
class DialogBox
{
public:
	virtual void changed(UIControl *control) = 0;
};

