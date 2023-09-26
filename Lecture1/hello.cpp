/*
This entire section is a multiline comment
due to the weird signs.
*/

#include <iostream>		// Used for cout, cin, cerr
#include <limits.h>		// Used for min and max

// When we import iostream, the functions we want to use are under namespace std.
using namespace std;

int main() {
	int myAge = 39;			// Define integer
	float myWeight = 92.2;	// float
	myAge = myWeight;		// Will truncate the decimals as you are storing float in int.
		
	string name;	// used for input from console in this example.
	
	// Some input and output to the terminal.
	// cout standard out.
	// cin read input from user
	// cerr is an error message.
	cout << "Hello world!" << endl;
	cout << "What is your name? ";
	cin >> name;
	cout << "Hi " << name << "!" << endl;
	cout << "Third line";
	cout << "My age: " << myAge << endl;
	cerr << "Error: Something went terribly wrong" << endl;
	
	// unsigned char is 0 to 255, (signed) char is -128 to 127
	char c = 0;
	unsigned char uc = 0;
	cout << "Size of char: " << sizeof(c) << endl;
	cout << "Size of unsigned char: " << sizeof(uc) << endl;

	// A quick for loop just ot show overflow of variable.
	for(int i=0;i<260;i++) {
		cout << "c:  " << (int)c++ << "   uc: " << (int)uc++ << endl;
	}
		
	// Min and Max of different types.
	cout << "Int min: " << INT_MIN << endl;
	cout << "Int max: " << INT_MAX << endl;
	
	cout << "Long long min: " << LLONG_MIN << endl;
	cout << "Long long max: " << LLONG_MAX << endl;

	// And since the program terminated gracefully we return 0.
	return 0;
}