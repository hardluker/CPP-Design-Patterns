#pragma once
#include "Observer.h"
#include "DataSource.h"
class SpreadSheet : public Observer
{
public:
	SpreadSheet(DataSource& dataSource); //Setting the DataSource reference during construction
	void update() override;
private:
	DataSource& dataSource; //Aggregating a DataSource reference for pull requesting the value on demand
};

