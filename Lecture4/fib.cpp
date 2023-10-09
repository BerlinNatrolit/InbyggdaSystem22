#include <iostream>
#include "fib.h"			// lets include our .h file so we can access everything in it.

using namespace std;

//Fibonacci-serie
// 1 1 2 3 5 8 
void fib(int n) {
	
	if (n > MAX_FIB_SIZE) {
		cout << "number is to big" << endl;
		return;
	}

	// fibonacci series code. :)
	int lower = 1;
	int current = lower + lower;

	cout << lower << " " << lower << " ";

	while (current <= n) {
		cout << current << " ";
		int temp = lower;
		lower = current;
		current = current + temp;
	}
}