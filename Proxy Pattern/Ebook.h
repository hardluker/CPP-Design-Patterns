#pragma once
#include <string>
using namespace std;
class Ebook
{
public:
	virtual void show() = 0;
	virtual string getFileName() = 0;
};

