#include "NotificationServer.h"

Connection NotificationServer::connect(const string& ipAddress)
{
    Connection connection;
    return connection;
}

AuthToken NotificationServer::authenticate(const string& appID, const string& key)
{
    AuthToken authtoken;
    return authtoken;
}

void NotificationServer::send(AuthToken& authToken, Message& message, const string& target)
{
    cout << "Sending a message" << endl;
}
