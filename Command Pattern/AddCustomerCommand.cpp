#include "AddCustomerCommand.h"

AddCustomerCommand::AddCustomerCommand(CustomerService& customerService) : customerService(customerService) {}

void AddCustomerCommand::execute()
{
	customerService.addCustomer(); // Executes the logic of the CustomerService class addCustomer method.
}
