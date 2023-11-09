#pragma once
#include "HttpRequest.h"
using namespace std;
class Handler
{
public:
	Handler(Handler* next);

	virtual void handle(HttpRequest& request);
	virtual bool doHandle(HttpRequest& request) = 0;
private:
	Handler* next;
};

