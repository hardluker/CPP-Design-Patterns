#pragma once
#include "HttpRequest.h"
#include "Handler.h"
class Logger : public Handler
{
public:
	Logger(Handler* next);
	bool doHandle(HttpRequest& request) override;
};

