#include "DataSource.h"

void DataSource::setValue(int value)
{
	this->value = value;
	notifyObservers();
}

int DataSource::getValue()
{
	return value;
}
