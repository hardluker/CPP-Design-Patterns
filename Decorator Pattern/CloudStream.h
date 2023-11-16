#pragma once
#include<string>
#include <iostream>
using namespace std;
class CloudStream
{
public:
	virtual void write(const string& data);
};

