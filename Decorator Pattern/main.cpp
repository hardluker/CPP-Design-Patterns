#include <iostream>
#include "CloudStream.h"
#include "EncryptedCloudStream.h"

using namespace std;

int main() {
	EncryptedCloudStream cloudStream;
	cloudStream.write("Here's some data");
}