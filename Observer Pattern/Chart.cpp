#include "Chart.h"
#include <iostream>
using namespace std;
Chart::Chart(DataSource& dataSource): dataSource(dataSource){}
void Chart::update()
{
	cout << "Chart got updated:" << dataSource.getValue() << endl; //Pulls the data when the update is notified.
}
