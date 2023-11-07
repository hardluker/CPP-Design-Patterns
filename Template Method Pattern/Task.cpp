#include "Task.h"

Task::Task() //Constructor called to create and auditTrail object.
{
	AuditTrail auditTrail;
}

// This is the public method that incorporates the required method alongside the abstract child method.
void Task::execute() 
{
	auditTrail.record();
	doExecute();
}
