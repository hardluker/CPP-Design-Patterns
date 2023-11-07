#include "AddCustomerCommand.h"

AddCustomerCommand::AddCustomerCommand(CustomerService& customerService) : customerService(customerService) {}

void AddCustomerCommand::execute()
{
	customerService.addCustomer();
}
