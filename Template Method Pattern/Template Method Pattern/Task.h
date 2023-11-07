#pragma once
#include "AuditTrail.h"
class Task
{
public:
	Task(); // Constructor called to create an AuditTrail object.
	void execute();
protected: // Protected method can be overriden by children but not accessed directly.
	virtual void doExecute() = 0; // this is the abstract method that will contain child logic.

private:
	AuditTrail auditTrail;
};

