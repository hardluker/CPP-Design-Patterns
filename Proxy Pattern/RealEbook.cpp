#include "RealEbook.h"

RealEbook::RealEbook(const string& fileName): fileName(fileName)
{
	load();
}

void RealEbook::show()
{
	cout << "Showing the ebook: " << fileName << endl;
}

string RealEbook::getFileName()
{
	return fileName;
}

void RealEbook::load()
{
	cout << "Loading the ebook: " << fileName << endl;
}
