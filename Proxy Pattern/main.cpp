#include <iostream>
#include "Library.h"
#include "EbookProxy.h"
#include "RealEbook.h"
#include <string>
#include <vector>
using namespace std;

int main() {
	Library library;
	//This is to simulate a database to access with different titles.
	string fileNames[] = { "title1","title2","title3" };

	//This is a vector to hold smart pointers outside of the for loop to have within scope utilization
	//after the for loop has terminated.
	vector<unique_ptr<EbookProxy>> ebooks;

	//Adding all the proxies to the library
	for (string& fileName : fileNames) {
		ebooks.push_back(make_unique<EbookProxy>(fileName));
		library.add(ebooks.back().get());	
	}
	//Only when a title is accessed are the RealEbooks instantiated and loaded.
	library.openEbook("title1");
	library.openEbook("title2");
	
}