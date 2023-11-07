#pragma once
#include <string>
#include "Command.h"
using namespace std;

class Button
{
public:
	explicit Button(Command& command); //Polymorphic implementation

	void click();
private:
	Command& command;
};

