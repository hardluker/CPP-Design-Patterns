#include "ImageView.h"

ImageView::ImageView(Image* image)
{
	this->image = image;
}

void ImageView::apply(Filter& filter)
{
	filter.apply(*image);
}
