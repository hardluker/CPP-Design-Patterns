#pragma once
#include <vector>
#include <string>
#include <memory>
#include "Iterator.h"
using namespace std;

class BrowseHistory
{
public:
	void push(const string& url);
	string pop();

	unique_ptr<Iterator> createIterator() const; //Passing a unique_ptr to prevent splicing and memory leaks.

	class ListIterator;
	class ArrayIterator;
private:
	//vector<string> urls;  //This is for the ListIterator

	string urls[10];        //Thes are for the ArrayIterator
	int count = 0;
};

/*
class BrowseHistory::ListIterator : public Iterator {    //Nested Class ListIterator Data structure implementation.
public:                                                  //The classes are nested to provide access to the BrowseHistory members.
	ListIterator(BrowseHistory history);

	bool hasNext() override;
	string current() override;
	void next() override;

private:
	BrowseHistory history;
	int index;
};

*/

class BrowseHistory::ArrayIterator : public Iterator {  //Nested Class ArrayIterator Data structure implementation.
public:
	ArrayIterator(BrowseHistory history);

	bool hasNext() override;
	string current() override;
	void next() override;

private:
	BrowseHistory history;
	int index;
};
