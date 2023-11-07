#pragma once
#include "Observer.h"
#include "DataSource.h"
class Chart : public Observer
{
public:
	Chart(DataSource& dataSource);
	void update() override;
private:
	DataSource& dataSource;
};

