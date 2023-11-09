#pragma once
#include "HttpRequest.h"
#include "Handler.h"
class Compressor : public Handler
{
public:
	Compressor(Handler* next);
	bool doHandle(HttpRequest& request) override;
};

