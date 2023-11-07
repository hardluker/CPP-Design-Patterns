#pragma once
#include <list>
#include <memory>
#include "Observer.h"
using namespace std;
class Subject
{
public:
	void addObserver(shared_ptr<Observer> observer);
	void removeObserver(shared_ptr<Observer> observer);
	void notifyObservers();
private:
	list<shared_ptr<Observer>> observers;
};

