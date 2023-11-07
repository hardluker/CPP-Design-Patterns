#pragma once
#include "fx/Command.h"
#include "CustomerService.h"
class AddCustomerCommand : public Command
{
public:
	AddCustomerCommand(const CustomerService& customerService);
	void execute() override;
private:
	CustomerService customerService;
};

