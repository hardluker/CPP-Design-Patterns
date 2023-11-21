#include <iostream>
#include "NotificationService.h"
using namespace std;

int main() {
	//Instantiating the "facade."
	NotificationService service;

	service.send("Hello World", "target");

	return 0;
}