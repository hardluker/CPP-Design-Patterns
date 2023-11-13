#include "CaramelFilter.h"

void CaramelFilter::apply(Image& image)
{
	caramel.init();
	caramel.render(image);
}
