//This design pattern has a feature hierarchy(remoteControl) and an implementation hierarchy(device)
//This creates a flexible "bridge" for adding and removing devices and features without having to modify every associated class.

#include <memory>
#include "SonyTV.h"
#include "SamsungTV.h"
#include "RemoteControl.h"
#include "AdvancedRemoteControl.h"
using namespace std;
int main() {
	//Initializing SonyTV Pointer
	auto sonyTV = make_unique<SonyTV>();
	//Initializing Standard remote and testing its methods.
	RemoteControl remoteControl(sonyTV.get());
	remoteControl.turnOn();
	remoteControl.turnOff();

	//Initializing advanced remote and testing its methods.
	AdvancedRemoteControl advancedRemoteControl(sonyTV.get());
	advancedRemoteControl.setChannel(10);

	//Creating a samsungTV pointer to be passed.
	auto samsungTV = make_unique<SamsungTV>();
	
	//Creating an advanced remote control that passes the samsungTV object and therefore it's logic.
	AdvancedRemoteControl samsungAdvancedRemoteControl(samsungTV.get());
	samsungAdvancedRemoteControl.turnOn();
	samsungAdvancedRemoteControl.setChannel(23);
	samsungAdvancedRemoteControl.turnOff();

	return 0;
}

//Console Output
//Sony: turnOn
//Sony : turnOff
//Sony setChannel to : 10
//Samsung : turnOn
//Samsung setChannel to : 23
//Samsung : turnOff

