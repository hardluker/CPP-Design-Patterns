#pragma once
#include "Device.h"
class SonyTV : public Device
{
public:
	void turnOn() override;
	void turnOff() override;
	void setChannel(int number) override;
};

