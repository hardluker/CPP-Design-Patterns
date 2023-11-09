#include "Compressor.h"
#include <iostream>
Compressor::Compressor(Handler* next) : Handler(next)
{
}
bool Compressor::doHandle(HttpRequest& request)
{
	cout << "Compressed" << endl;
	return false;
}
