#pragma once
#include "Ebook.h"
#include <string>
#include <memory>
#include "RealEbook.h"
using namespace std;
class EbookProxy : public Ebook
{
public:
	EbookProxy(const string& fileName);
	void show() override;
	string getFileName() override;
private:
	string fileName;
	unique_ptr<RealEbook> ebook;
};

