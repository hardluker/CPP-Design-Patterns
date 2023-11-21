#pragma once
#include <string>
using namespace std;
class Message
{
	//This class contains the content of the notification message.
public:
	explicit Message(const string& content);
private:
	string content;
};

