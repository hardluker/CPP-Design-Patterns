#include "HttpRequest.h"

HttpRequest::HttpRequest(const string& username, const string& password) : username(username), password(password)
{
}

string HttpRequest::getUsername() const
{
	return username;
}

string HttpRequest::getPassword() const
{
	return password;
}

void HttpRequest::setUsername(const string& username)
{
	this->username = username;
}

void HttpRequest::setPassword(const string& password)
{
	this->password = password;
}
