#pragma once
#include <list>
#include <memory>
#include "Observer.h"
using namespace std;
class Subject
{
public:
	//Passing smartpointers to the memory locations of all the concrete observers.
	void addObserver(shared_ptr<Observer> observer);
	void removeObserver(shared_ptr<Observer> observer);
	void notifyObservers(); //This function iterates through the observers calling all of their methods.
private:
	list<shared_ptr<Observer>> observers; //Creating a list of pointer for base class container polymorphism.
										  // A list of all the concrete observers memory locations is created.
};

