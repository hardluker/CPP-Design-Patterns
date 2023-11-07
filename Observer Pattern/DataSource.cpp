#include "DataSource.h"

void DataSource::setValue(int value)
{
	this->value = value;
	notifyObservers();        //notifyObservers from parent "Subject" class is called.
}

int DataSource::getValue()
{
	return value;
}
