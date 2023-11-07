#include "Subject.h"

void Subject::addObserver(shared_ptr<Observer> observer)
{
	observers.push_back(observer);
}

void Subject::removeObserver(shared_ptr<Observer> observer)
{
	observers.remove(observer);
}

void Subject::notifyObservers()
{
	for (shared_ptr<Observer> observer : observers)
		observer->update();
}
