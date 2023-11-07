#pragma once
#include <string>
using namespace std;
//Abstract class signified by pure virtual methods.
class Iterator
{
public:
	virtual bool hasNext() = 0;
	virtual string current() = 0;
	virtual void next() = 0;
};

