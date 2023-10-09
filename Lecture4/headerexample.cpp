#include <iostream>
#include <string>
#include "fib.h"		// inkluderar fib.h (inkluderar även fib.cpp då)

using namespace std;

// vi tar in argument från konsollen när vi startar programmet.
int main(int argc, char** argv) {
	int target = 100;

	// om vi har mer än ett argument så läser vi ut detta.
	// första argumentet är alltid programmets namn.
	if (argc > 1) {
		target = stoi(argv[1]);
	}

	// anropar fib från en annan fil-
	fib(target);

	return 0;
}