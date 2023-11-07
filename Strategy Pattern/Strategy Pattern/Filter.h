#pragma once
#include <string>
using namespace std;
class Filter
{
public:
	virtual void apply(const string& fileName) = 0;
};

