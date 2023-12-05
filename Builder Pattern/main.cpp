#include <iostream>
#include "Presentation.h"
#include "PdfDocumentBuilder.h"
#include "main.h"
#include "MovieBuilder.h"
using namespace std;

int main() {
	//Creating the Presentation
	Presentation presentation;
	//Adding the slides
	Slide slide1("slide 1");
	presentation.addSlide(slide1);
	Slide slide2("slide 2");
	presentation.addSlide(slide2);
	//Using a PdfBuilder to export the file
	PdfDocumentBuilder* PdfBuilder = new PdfDocumentBuilder;
	presentation.exportFile(PdfBuilder);
	auto pdf = PdfBuilder->getPdfDocument();

	//Using a MovieBuilder to export the file
	MovieBuilder* movieBuilder = new MovieBuilder;
	presentation.exportFile(movieBuilder);
	auto movie = movieBuilder->getMovie();

	//Deleting the raw pointers
	delete PdfBuilder;
	delete movieBuilder;

	return 0;

}