#pragma once
#include "CloudStream.h"
class CompressedCloudStream : public CloudStream
{
	void write(const string& data);
};

