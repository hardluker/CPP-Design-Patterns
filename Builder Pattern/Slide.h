#pragma once
#include <string>
using namespace std;
class Slide
{
public:
	Slide(const string& text);
	string getText() const;
private:
	string text;
};

