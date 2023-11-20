//Abstract "Interface" for the Stream Objects
#pragma once
#include <string>
using namespace std;
class Stream
{
public:
	virtual void write(const string& data) = 0;
};

