#include "ImageStorage.h"
using namespace std;

void ImageStorage::store(const string& fileName, Compressor& compressor, Filter& filter)
{
	compressor.compress(fileName);
	filter.apply(fileName);
}
