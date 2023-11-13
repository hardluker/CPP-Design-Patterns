#include <iostream>
#include <memory>
#include "Image.h"
#include "ImageView.h"
#include "CaramelFilter.h"
using namespace std;

int main() {
	auto image = make_unique<Image>();
	ImageView imageView(image.get());
	CaramelFilter caramelFilter;
	imageView.apply(caramelFilter);
	return 0;
}

// Used to adapt the interface of an object to a different form.