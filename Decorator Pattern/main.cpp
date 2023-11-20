#include <iostream>
#include <memory>
#include "CloudStream.h"
#include "CompressedCloudStream.h"
#include "EncryptedCloudStream.h"
using namespace std;

void storeCreditCard(Stream* stream);

int main() {
	//Creating the initial object
	auto cloudStream = make_unique<CloudStream>();
	//Decorating it with 1 decorator
	auto compressedCloudStream = make_unique<CompressedCloudStream>(cloudStream.get());
	//Decorating it with an additional decorator
	auto encryptedCloudStream = make_unique<EncryptedCloudStream>(compressedCloudStream.get());
	//Passing the decorated object through the function
	storeCreditCard(encryptedCloudStream.get());

	return 0;
}

void storeCreditCard(Stream* stream) {
	stream->write("1234-5678-1234-5678");
}

//Console Output:
//Storing !@#$%