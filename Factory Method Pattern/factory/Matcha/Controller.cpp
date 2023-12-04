#include "Controller.h"
#include <iostream>
using namespace std;

void Controller::render(const string& viewName, const string& data)
{
	auto engine = createViewEngine();
	string html = engine->render(viewName, data);
	cout << html << endl;
}

ViewEngine* Controller::createViewEngine()
{
	//Default implementation
	MatchaViewEngine* engine = new MatchaViewEngine;
	return engine;
}
