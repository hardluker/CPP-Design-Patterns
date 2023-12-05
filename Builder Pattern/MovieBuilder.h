#pragma once
#include "PresentationBuilder.h"
#include "Movie.h"
class MovieBuilder : public PresentationBuilder
{
public:
	void addSlide(const Slide& slide) override;
	Movie getMovie();
private:
	Movie movie;

};

