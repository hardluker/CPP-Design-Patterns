#include "Library.h"
#include <iostream>
using namespace std;
void Library::add(Ebook* ebook)
{
	this->ebooks.insert({ ebook->getFileName(), ebook });
}

void Library::openEbook(const string& fileName)
{
	map<string, Ebook*>::iterator iterator = ebooks.find(fileName);

	if (iterator != ebooks.end()) {
		// The element with the key 1 was found.
		iterator->second->show();
	}
	else {
		cout << "A book with the title:  " << fileName << " was not found!" << endl;
	}
}
