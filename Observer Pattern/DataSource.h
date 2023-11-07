#pragma once
#include "Observer.h"
#include "Subject.h"
class DataSource : public Subject
{
public:
	int getValue(); //This is our value that gets pulled by our concrete observers
	void setValue(int value);
private:
	int value;
};

