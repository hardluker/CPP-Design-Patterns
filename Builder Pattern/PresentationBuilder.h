#pragma once
#include "Slide.h"
class PresentationBuilder
{
public:
	virtual void addSlide(const Slide& slide) = 0;
};

