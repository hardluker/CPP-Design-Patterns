#include "MovieBuilder.h"

void MovieBuilder::addSlide(const Slide& slide)
{
	movie.addFrame(slide.getText(), 3);
}

Movie MovieBuilder::getMovie()
{
	return movie;
}
