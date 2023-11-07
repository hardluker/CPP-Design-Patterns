#include <iostream>
#include <memory>
#include "DataSource.h"
#include "SpreadSheet.h"
#include "Chart.h"
using namespace std;

//Using the Pull Style of the Observer Pattern.
int main() {
	DataSource dataSource;

	//Pointers needed for referencing base class container in polymorphism.
	shared_ptr<SpreadSheet> sheet1 = make_shared<SpreadSheet>(dataSource); 
	shared_ptr<SpreadSheet> sheet2 = make_shared<SpreadSheet>(dataSource);
	shared_ptr<Chart> chart = make_shared<Chart>(dataSource);

	dataSource.addObserver(sheet1);
	dataSource.addObserver(sheet2);
	dataSource.addObserver(chart);

	//Whenever the value is updated, the observers are notified.
	//At the same time the observers request for the value.
	dataSource.setValue(2);
	dataSource.setValue(3);
	return 0;
}

//Console Output:
//SpreadSheet got notified : 2
//SpreadSheet got notified : 2
//Chart got updated : 2
//SpreadSheet got notified : 3
//SpreadSheet got notified : 3
//Chart got updated : 3
