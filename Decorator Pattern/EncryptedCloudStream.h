//Encrypted "Decorator"
#pragma once
#include "Stream.h"
class EncryptedCloudStream : public Stream
{
public:
	EncryptedCloudStream(Stream* stream);
	void write(const string& data) override;
private:
	string encrypt(const string& data) const;
	Stream* stream;
};

