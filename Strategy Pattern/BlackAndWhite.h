#pragma once
#include "Filter.h"
class BlackAndWhite : public Filter
{
public:

	void apply(const string& fileName) override;
};

