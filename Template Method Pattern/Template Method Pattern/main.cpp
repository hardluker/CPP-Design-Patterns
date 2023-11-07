#include "TransferMoneyTask.h"
#include "GenerateReportTask.h"

int main() {
	//When either tasks are executed the auditTrail.record() is executed as well.
	//This is due to the method being called in the parent execute() method.
	//Finally, the executions of the child methods are nested in the abstract parent method.
	//This causes the audit to happen no matter what.

	TransferMoneyTask transfer;
	transfer.execute();

	GenerateReportTask generateReport;
	generateReport.execute();

	return 0;
}

//Console Output:
//Audit
//Transfer Money
//Audit
//Generate Report