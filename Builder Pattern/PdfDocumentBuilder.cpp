#include "PdfDocumentBuilder.h"

void PdfDocumentBuilder::addSlide(const Slide& slide)
{
	document.addPage(slide.getText());
}

PdfDocument PdfDocumentBuilder::getPdfDocument()
{
	return document;
}
