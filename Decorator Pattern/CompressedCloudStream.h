//Compressed "Decorator"
#pragma once
#include "Stream.h"
class CompressedCloudStream : public Stream
{
public:
	CompressedCloudStream(Stream* stream);
	void write(const string& data) override;
private:
	string compress(const string& data);
	Stream* stream;
};

