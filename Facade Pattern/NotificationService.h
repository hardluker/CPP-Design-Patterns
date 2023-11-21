#pragma once
#include <string>
using namespace std;
class NotificationService
{
public:
	//This is the method that ties all the logic together.
	void send(const string& message, const string& target);
};

