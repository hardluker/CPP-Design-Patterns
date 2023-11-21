#include "NotificationService.h"
#include "NotificationServer.h"

void NotificationService::send(const string& message, const string& target)
{
	NotificationServer server;
	Connection connection = server.connect("IP");
	AuthToken authToken = server.authenticate("appID", "Key");
	Message newMessage{ message };
	server.send(authToken, newMessage, target);
	connection.disconnect();
}
