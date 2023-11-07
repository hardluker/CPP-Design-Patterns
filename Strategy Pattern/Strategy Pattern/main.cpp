#include <iostream>
#include <memory>
#include "ImageStorage.h"
#include "JpegCompressor.h"
#include "PngCompressor.h"
#include "BlackAndWhite.h"
#include "HighContrast.h"
using namespace std;

int main() {
	ImageStorage imageStorage;

	JpegCompressor jpegCompressor;
	BlackAndWhite blackAndWhite;
	imageStorage.store("file1", jpegCompressor,blackAndWhite);

	PngCompressor pngCompressor;
	HighContrast highContrast;
	imageStorage.store("file2", pngCompressor, highContrast);

	return 0;
}