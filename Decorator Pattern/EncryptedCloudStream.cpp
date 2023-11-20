#include "EncryptedCloudStream.h"

EncryptedCloudStream::EncryptedCloudStream(Stream* stream)
{
	this->stream = stream;
}

void EncryptedCloudStream::write(const string& data)
{
	auto encrypted = encrypt(data);
	this->stream->write(encrypted);
}

string EncryptedCloudStream::encrypt(const string& data) const
{
	return "!@#$%$@!@!@$%^";
}
