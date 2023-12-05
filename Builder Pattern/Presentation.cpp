#include "Presentation.h"
#include "PdfDocument.h"
#include "Movie.h"

void Presentation::addSlide(const Slide& slide)
{
	slides.push_back(slide);
}

void Presentation::exportFile(PresentationBuilder* builder)
{
	Slide copyright("Copyright");
	builder->addSlide(copyright);
	for (Slide slide : slides) {
		builder->addSlide(slide);
	}
}