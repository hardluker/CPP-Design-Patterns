#pragma once
#include "HttpRequest.h"
#include "Handler.h"
class Authenticator : public Handler
{
public:
	Authenticator(Handler* next);
	bool doHandle(HttpRequest& request) override;
};

