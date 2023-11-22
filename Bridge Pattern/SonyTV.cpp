#include "SonyTV.h"
#include <iostream>
using namespace std;
void SonyTV::turnOn()
{
	cout << "Sony: turnOn" << endl;
}

void SonyTV::turnOff()
{
	cout << "Sony: turnOff" << endl;
}

void SonyTV::setChannel(int number)
{
	cout << "Sony setChannel to: " << number << endl;
}
