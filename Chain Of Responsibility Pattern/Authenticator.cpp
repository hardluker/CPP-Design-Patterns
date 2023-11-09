#include "Authenticator.h"
#include <iostream>
using namespace std;
Authenticator::Authenticator(Handler* next) : Handler(next) {}

bool Authenticator::doHandle(HttpRequest& request)
{
	bool isValid = (request.getUsername() == "admin" &&
					request.getPassword() == "1234");
	cout << "authenticated" << endl;
	return !isValid;
}
