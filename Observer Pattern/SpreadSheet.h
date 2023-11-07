#pragma once
#include "Observer.h"
#include "DataSource.h"
class SpreadSheet : public Observer
{
public:
	SpreadSheet(DataSource& dataSource);
	void update() override;
private:
	DataSource& dataSource;
};

