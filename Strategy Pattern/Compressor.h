#pragma once
#include <string>
using namespace std;
class Compressor
{
public:
	virtual void compress(const string& fileName) = 0;
};

