#pragma once
#include "Handler.h"
class Encryptor : public Handler
{
public:
	Encryptor(Handler* next);
	bool doHandle(HttpRequest& request) override;
};

