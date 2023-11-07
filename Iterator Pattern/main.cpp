#include <iostream>
#include <memory>
#include "BrowseHistory.h"
using namespace std;
int main() {

	BrowseHistory history;
	history.push("http://www.google.com");
	history.push("http://www.youtube.com");
	history.push("http://www.stackoverflow.com");

	
	// This code works no matter what data structure you use.
	unique_ptr<Iterator> iterator = history.createIterator(); 
	while (iterator->hasNext()) {
		auto url = iterator->current();
		cout << url << endl;
		iterator->next();
	}

	return 0;
}

/// Test Test Test