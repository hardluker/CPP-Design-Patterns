#pragma once
#include "fx/Command.h"
#include "CustomerService.h"
class AddCustomerCommand : public Command
{
public:
	AddCustomerCommand(CustomerService& customerService);
	void execute() override;
private:
	CustomerService& customerService; // contains CustomerService reference
};

