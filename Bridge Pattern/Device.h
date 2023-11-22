#pragma once
class Device
{
public:
	virtual void turnOn() = 0;
	virtual void turnOff() = 0;
	virtual void setChannel(int number) = 0;
};

