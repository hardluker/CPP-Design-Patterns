#pragma once
#include "Compressor.h"
class PngCompressor : public Compressor
{
public:
	void compress(const string& fileName) override;
};

