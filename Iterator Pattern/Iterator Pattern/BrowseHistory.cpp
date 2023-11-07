#include "BrowseHistory.h"



void BrowseHistory::push(const string& url)
{
	//urls.push_back(url);              //This is the List Iterator Implementation
	
	urls[count] = url;                  //This is the ArrayIterator Implementation
	count++;
}

string BrowseHistory::pop()
{
	/*                                  //These are the ListIterator Implementations
	if (!urls.empty()) {
		string lastUrl = urls.back();
		urls.pop_back();
		return lastUrl;
	}
	return "";
	*/

	if (count > 0) {                   //These are the ArrayIterator Implementations
		count--;
		return urls[count];
	}
	return "";
}

unique_ptr<Iterator> BrowseHistory::createIterator() const
{
	//auto listIterator = make_unique<ListIterator>(*this); //Creating smart pointer to prevent splicing and memory leaks in polymorphic operation.
	//return move(listIterator);                            //List Iterator Implementation here

	auto arrayIterator = make_unique<ArrayIterator>(*this); //ArrayIterator Implementation here
	return move(arrayIterator);
}

/*
BrowseHistory::ListIterator::ListIterator(BrowseHistory history)            //These are the ListIterator Constructor and methods.
{
	this->history = history;
}

bool BrowseHistory::ListIterator::hasNext()
{
	return (index < history.urls.size());
}

string BrowseHistory::ListIterator::current()
{
	return history.urls[index];
}

void BrowseHistory::ListIterator::next()
{
	index++;
}
*/

BrowseHistory::ArrayIterator::ArrayIterator(BrowseHistory history)        //These are the ArrayIterator Constructor and methods
{
	this->history = history;
	this->index = 0;
}

bool BrowseHistory::ArrayIterator::hasNext()
{
	return (index < history.count);
}

string BrowseHistory::ArrayIterator::current()
{
	return history.urls[index];
}

void BrowseHistory::ArrayIterator::next()
{
	index++;
}
