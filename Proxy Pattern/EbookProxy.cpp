#include "EbookProxy.h"
#include <iostream>
using namespace std;

EbookProxy::EbookProxy(const string& fileName) : fileName(fileName){}

void EbookProxy::show()
{

	ebook = make_unique<RealEbook>(fileName);
	ebook->show();
}

string EbookProxy::getFileName() 
{
	return fileName;
}