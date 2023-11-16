#include "EncryptedCloudStream.h"

void EncryptedCloudStream::write(const string& data)
{
	auto encrypted = encrypt(data);
	CloudStream::write(encrypted);
}

string EncryptedCloudStream::encrypt(const string& data) const
{
	return "!@#$%$@!@!@$%^";
}
