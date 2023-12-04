#pragma once
#include "../Matcha/ViewEngine.h"
class SharpViewEngine : public ViewEngine
{
public:
	string render(const string& viewName, const string& data) override;

};

