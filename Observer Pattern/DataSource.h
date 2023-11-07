#pragma once
#include "Observer.h"
#include "Subject.h"
class DataSource : public Subject
{
public:
	int getValue();
	void setValue(int value);
private:
	int value;
};

