#pragma once
#include "ViewEngine.h"
class MatchaViewEngine : public ViewEngine
{
public:
	string render(const string& viewName, const string& data);
};

