#pragma once
#include "Device.h"
class RemoteControl
{
public:
	RemoteControl(Device* device);
	virtual void turnOn();
	virtual void turnOff();
protected:
	Device* device;
};

