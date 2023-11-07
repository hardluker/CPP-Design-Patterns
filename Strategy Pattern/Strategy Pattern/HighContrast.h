#pragma once
#include "Filter.h"
class HighContrast : public Filter
{
public:
	void apply(const string& fileName) override;
};

