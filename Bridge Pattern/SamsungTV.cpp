#include "SamsungTV.h"
#include <iostream>
using namespace std;
void SamsungTV::turnOn()
{
	cout << "Samsung: turnOn" << endl;
}

void SamsungTV::turnOff()
{
	cout << "Samsung: turnOff" << endl;
}

void SamsungTV::setChannel(int number)
{
	cout << "Samsung setChannel to: " << number << endl;
}
