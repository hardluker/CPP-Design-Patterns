#include "RemoteControl.h"

RemoteControl::RemoteControl(Device* device) : device(device)
{
}

void RemoteControl::turnOn()
{
	device->turnOn();
}

void RemoteControl::turnOff()
{
	device->turnOff();
}
