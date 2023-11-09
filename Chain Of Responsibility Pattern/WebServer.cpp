#include "WebServer.h"
#include "Authenticator.h"

WebServer::WebServer(Handler* handler)
{
	this->handler = handler;
}

void WebServer::handle(HttpRequest& request)
{
	handler->handle(request);
}
