#pragma once
#include "Ebook.h"
#include <map>
using namespace std;
class Library
{
public:
	void add(Ebook* ebook);
	void openEbook(const string& fileName);
private:
	map<string, Ebook*> ebooks;
};

