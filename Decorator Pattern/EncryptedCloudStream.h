#pragma once
#include "CloudStream.h"
class EncryptedCloudStream : public CloudStream
{
public:
	void write(const string& data) override;
private:
	string encrypt(const string& data) const;
};

