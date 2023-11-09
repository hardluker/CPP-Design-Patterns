#pragma once
#include "HttpRequest.h"
#include "Handler.h"
class WebServer
{
public:
	WebServer(Handler* handler);
	void handle(HttpRequest& request);
private:
	Handler* handler;
};

