//"Base" CloudStream implementation of Stream
#pragma once
#include<string>
#include <iostream>
#include "Stream.h"
using namespace std;
class CloudStream : public Stream
{
public:
	void write(const string& data) override;
};

