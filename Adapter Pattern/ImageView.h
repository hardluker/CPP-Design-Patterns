#pragma once
#include "Image.h"
#include "Filter.h"
class ImageView
{
public:
	explicit ImageView(Image* image);
	
	void apply(Filter& filter);
private:
	Image* image;
};

