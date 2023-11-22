#pragma once
#include<string>
#include <iostream>
#include "Ebook.h"
using namespace std;
class RealEbook : public Ebook
{
public:
	RealEbook(const string& fileName);
	void show() override;
	string getFileName() override;
private:
	string fileName;
	void load();
};

