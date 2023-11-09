#include "Encryptor.h"
#include <iostream>
using namespace std;
Encryptor::Encryptor(Handler* next) : Handler(next)
{
}
bool Encryptor::doHandle(HttpRequest& request)
{
	cout << "Encrypted" << endl;
	return false;
}
