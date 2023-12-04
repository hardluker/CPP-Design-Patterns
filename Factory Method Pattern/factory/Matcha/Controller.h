#pragma once
#include "MatchaViewEngine.h"
#include "ViewEngine.h"
class Controller
{
public:
	void render(const string& viewName, const string& data);
protected:
	virtual ViewEngine* createViewEngine();
};

