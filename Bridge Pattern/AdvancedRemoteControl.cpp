#include "AdvancedRemoteControl.h"

AdvancedRemoteControl::AdvancedRemoteControl(Device* device) : RemoteControl(device)
{}

void AdvancedRemoteControl::setChannel(int number)
{
	device->setChannel(number);
}
