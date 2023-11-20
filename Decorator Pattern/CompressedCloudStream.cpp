#include "CompressedCloudStream.h"

CompressedCloudStream::CompressedCloudStream(Stream* stream)
{
	this->stream = stream;
}

void CompressedCloudStream::write(const string& data)
{
	auto compressed = compress(data);
	this->stream->write(compressed);
}

string CompressedCloudStream::compress(const string& data)
{
	return data.substr(0,5);
}
