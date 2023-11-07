#pragma once
#include <string>
#include <memory>
#include "Compressor.h"
#include "Filter.h"
using namespace std;
class ImageStorage
{
public:
	void store(const string& fileName, Compressor& compressor, Filter& filter);

};

