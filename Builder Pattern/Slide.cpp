#include "Slide.h"

Slide::Slide(const string& text): text(text)
{
}

string Slide::getText() const
{
	return text;
}
