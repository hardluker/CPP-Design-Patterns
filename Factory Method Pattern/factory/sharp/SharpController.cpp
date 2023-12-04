#include "SharpController.h"

ViewEngine* SharpController::createViewEngine()
{
	SharpViewEngine* engine = new SharpViewEngine;
	return engine;
}
