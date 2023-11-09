#include "Handler.h"

Handler::Handler(Handler* next)
{
	this->next = next;
}

void Handler::handle(HttpRequest& request)
{
	if (doHandle(request))
		return;
	if (next != nullptr)
		next->handle(request);
}
