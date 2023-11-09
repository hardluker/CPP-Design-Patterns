#include "Logger.h"
#include <iostream>
using namespace std;
Logger::Logger(Handler* next) : Handler(next)
{
}
bool Logger::doHandle(HttpRequest& request)
{
	cout << "Logged" << endl;
	return false;
}