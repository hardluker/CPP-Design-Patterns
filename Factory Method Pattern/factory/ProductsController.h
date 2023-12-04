#pragma once
#include "Matcha/Controller.h"
#include "sharp/SharpController.h"
class ProductsController : public SharpController
{
public:
	void listProducts();
};

