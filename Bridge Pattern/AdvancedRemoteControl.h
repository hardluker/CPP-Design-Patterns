#pragma once
#include"RemoteControl.h"
class AdvancedRemoteControl : public RemoteControl
{
public:
	explicit AdvancedRemoteControl(Device* device);
	virtual void setChannel(int number);

};

