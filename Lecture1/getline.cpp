// This file shows how you can read all words during input.

#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;
	getline(cin, s);		// This is the magic thing.
	cout << s;
	return 0;
}