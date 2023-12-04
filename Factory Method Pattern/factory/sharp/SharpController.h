#pragma once
#include "../Matcha/Controller.h"
#include "SharpViewEngine.h"
class SharpController : public Controller
{
protected:
	ViewEngine* createViewEngine() override;
};

