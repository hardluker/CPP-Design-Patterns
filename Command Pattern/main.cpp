#include <iostream>
#include "CustomerService.h"
#include "AddCustomerCommand.h"
#include "fx/Button.h"
using namespace std;

int main() {
	CustomerService service; // This is our service.
	AddCustomerCommand command(service); // This is the command type
	Button button(command); //The button passes the specific command
	
	//The abstract command and the button class are both part of the framework. Whereas,
	//The service and the specific command classes are part of the application.

	button.click();



	return 0;
}