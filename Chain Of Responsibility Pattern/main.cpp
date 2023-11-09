#include <iostream>
#include <memory>
#include "Encryptor.h"
#include "Compressor.h"
#include "Logger.h"
#include "Authenticator.h"
#include "WebServer.h"
#include "HttpRequest.h"
using namespace std;

int main() {
	// Authenticator -> Logger -> Compressor


	//Creating smart pointers for automatic memory management
	auto encryptor = make_unique<Encryptor>(nullptr);
	auto compressor = make_unique<Compressor>(encryptor.get());
	auto logger = make_unique<Logger>(compressor.get());
	auto authenticator = make_unique<Authenticator>(logger.get());

	//Start the chain of command by passing the auth through the constructor
	WebServer server{ authenticator.get()};
	
	//Generating an Http Request
	//If username and password are incorrect the chain stops at the authenticator.
	HttpRequest request{ "admin", "1234" };

	//Server is handling the request
	server.handle(request);

	return 0;
}
/*
Console Output:
authenticated
Logged
Compressed
Encrypted
*/