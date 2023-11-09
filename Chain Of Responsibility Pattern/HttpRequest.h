#pragma once
#include <string>
using namespace std;
class HttpRequest
{
public:
	HttpRequest(const string& username, const string& password);

	string getUsername() const;
	string getPassword() const;
	void setUsername(const string& username);
	void setPassword(const string& password);
private:
	string username;
	string password;
};

