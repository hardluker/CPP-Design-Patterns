#pragma once
#include "Filter.h"
#include "filters/Caramel.h"
class CaramelFilter : public Filter
{
public:
	void apply(Image& image) override;
private:
	Caramel caramel;
};

