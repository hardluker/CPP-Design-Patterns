#include "SpreadSheet.h"
#include <iostream>
using namespace std;
SpreadSheet::SpreadSheet(DataSource& dataSource) : dataSource(dataSource)
{}
void SpreadSheet::update()
{
	cout << "SpreadSheet got notified:" << dataSource.getValue() << endl;
}
