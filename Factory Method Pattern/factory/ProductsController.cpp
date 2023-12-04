#include "ProductsController.h"

void ProductsController::listProducts()
{
	//Get products from a database
	string data;
	render("products.html", data);
}
