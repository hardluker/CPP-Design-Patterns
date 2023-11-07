#include "AddCustomerCommand.h"

AddCustomerCommand::AddCustomerCommand(const CustomerService& customerService)
{
	this->customerService = customerService;
}

void AddCustomerCommand::execute()
{
	customerService.addCustomer();
}
