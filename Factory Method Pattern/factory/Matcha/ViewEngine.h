#pragma once
#include <string>
using namespace std;
class ViewEngine
{
public:
	virtual string render(const string& viewName, const string& data) = 0;
};

