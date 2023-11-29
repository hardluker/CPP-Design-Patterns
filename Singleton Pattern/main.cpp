#include <iostream>
#include "ConfigManager.h"
using namespace std;
int main() 
{
	ConfigManager* manager = ConfigManager::getInstance();
	Object* object = new Object;
	manager->set("Setting1", object);

	return 0;

}	