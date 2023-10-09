#include <iostream>
#include <string>
#include "fib.h"		// inkluderar fib.h (inkluderar �ven fib.cpp d�)

using namespace std;

// vi tar in argument fr�n konsollen n�r vi startar programmet.
int main(int argc, char** argv) {
	int target = 100;

	// om vi har mer �n ett argument s� l�ser vi ut detta.
	// f�rsta argumentet �r alltid programmets namn.
	if (argc > 1) {
		target = stoi(argv[1]);
	}

	// anropar fib fr�n en annan fil-
	fib(target);

	return 0;
}