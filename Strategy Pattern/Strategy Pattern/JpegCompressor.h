#pragma once
#include "Compressor.h"
class JpegCompressor : public Compressor
{
public:
	void compress(const string& fileName) override;
};

