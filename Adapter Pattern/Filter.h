#pragma once
#include "Image.h"
class Filter
{
public:
	virtual void apply(Image& image) = 0;
};

