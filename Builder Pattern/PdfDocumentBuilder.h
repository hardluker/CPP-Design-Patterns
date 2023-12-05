#pragma once
#include "PresentationBuilder.h"
#include "PdfDocument.h"
class PdfDocumentBuilder : public PresentationBuilder
{
public:
	void addSlide(const Slide& slide) override;
	PdfDocument getPdfDocument();
private:
	PdfDocument document;
};

