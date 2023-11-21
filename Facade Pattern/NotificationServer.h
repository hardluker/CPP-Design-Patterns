#pragma once
#include "Connection.h"
#include <string>
#include <iostream>
#include "AuthToken.h"
#include "Message.h"
using namespace std;
//This server processes the information around and sends the data.
class NotificationServer

{
public:
	Connection connect(const string& ipAddress);
	AuthToken authenticate(const string& appID, const string& key);
	void send(AuthToken& authToken, Message& message, const string& target);
};

