#pragma once
#include <list>
#include "Slide.h"
#include "PresentationBuilder.h"
class Presentation
{
public:
	void addSlide(const Slide& slide);
	void exportFile(PresentationBuilder* builder);
private:
	list<Slide> slides;
};

