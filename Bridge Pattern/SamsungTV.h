#pragma once
#include "Device.h"
class SamsungTV : public Device
{
public:
	void turnOn() override;
	void turnOff() override;
	void setChannel(int number) override;
};

