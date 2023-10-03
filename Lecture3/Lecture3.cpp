//////////////////////////////////////////////////////////////////
// Lecture 3
// pointers and references, functions, dypedefs, file input and output.
//
//////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>

using namespace std;

// Function prototypes. This is used when the function is defined after the main function.
int printSomething(string);
int countChars(string s);

//Global variables. Defined outside of all functions.
int fantasy = 42;			// Jag kommer underkänna uppgiften om jag ser såna här!
const double cFantasy = 31.415;// kanske eventuellt med ordentlig övertalning är okej. :P

// Enum
typedef enum {
	monday,
	tuesday,
	wedensday,
	thursday,
	friday,
	saturday,
	sunday
} WEEKDAY;

typedef enum {
	OK = 200,
	Forbidden = 403,
	LifeUniverseEverything = 42,
	NotFound = 404,
	InternalServerError = 500
}REQUEST_RESULT;

// functions with default parameters.
void writeToFile(string s = "example.txt", string message = "this is the default text.") {
	ofstream myfile;
	myfile.open(s);
	myfile << message;
	myfile.close();
}

// Normal function.
int incrementAge() {
	static int age = 0;			// static/statisk variabel, eller "global lokal variable"
	age++;
	return age;
}


int main() {
	// Lets try some of the enums that we created.
	int response = 404;
	if (response == REQUEST_RESULT::NotFound) {
		cout << "Not found" << endl;
	}

	WEEKDAY weekday = WEEKDAY::monday;
	cout << "Monday: " << WEEKDAY::monday;

	if (weekday == WEEKDAY::friday) {
		cout << "friday" << endl;
	}
	else if (weekday == WEEKDAY::monday) {
		cout << "monday" << endl;
	}

	int a = 5;	// local variable. 
	
	// loop to test the static local variable above.
	for (int i = 0; i < 10; i++) {
		int a = incrementAge();
		cout << a << endl;
		// cout << age << endl; // doesn't work.
	}

	
	writeToFile();
	writeToFile("example2.txt");
	writeToFile("example3.txt", "this is a secret message");
	
	
	int ans = printSomething("Hello world!");

	// Pointers: slow and steady wins the race here.
	// Run the program together with when you are looking at the code and you will
	// be a Sensei in pointers in no time. :)
	int age = 37;
	cout << "Age: " << age << endl;
	cout << "Adress to age: " << &age << endl;

	int *p_age = &age;
	cout << "pointer age: " << p_age << endl;
	cout << "value of pointer age: " << *p_age << endl;

	cout << "&age: " << &age << "\n&p_age: " << &p_age;

	cout << "\n\n";

	cout << "p_age: " << p_age << endl;
	cout << "&p_age: " << &p_age << endl;
	cout << "*p_age: " << *p_age << endl;

	cout << "\n\n";

	// you can get the adress to anything in C++
	float f = 7.0;
	int i = 4;
	string s = "this is a string";
	cout << "f: " << &f << "\ni: " << &i << "\ns: " << &s << endl;

	s = "Hello world!";
	cout << s[2] << endl;

	// pointers and strings.
	char* p_s = &s[0];
	cout << "p_s: " << p_s << endl;
	cout << "*p_s: " << *p_s << endl;
	p_s++;
	cout << "*p_s: " << *p_s << endl;

	// För att jämföra två char 'a' == 'b'
	// notera enkelsnuff, inte dubbelsnuff

	
	// övning 1
	int nr = 0;
	char* stringPointer = &s[0];		// lets create a pointer to the first element in the string
	for (;;) {							// for-loop that goes on forever.
		if (*stringPointer == '\0') {	// check if the current item is the null terminator.
			break;						// break the loop.
		}
		nr++;							// increse counter of number of items.
		stringPointer++;				// increse the pointer.
	}

	
	// ett annat alternativ kan vara:
	nr = 0;
	for (char* stringPointer = &s[0]; *stringPointer != '\0'; stringPointer++, nr++);
	
	cout << "number of chars in string: " << nr << endl;

	cout << "number of cahrs: " << countChars(s) << endl;
	
}

// just a function that prints something and returns 23.
int printSomething(string something) {
	cout << something;
	return 23;
}

// exercise two.
// same as excersize one, but in function. See exc1. for details.
int countChars(string s) {

	// övning 1
	int nr = 0;
	char* stringPointer = &s[0];
	for (;;) {
		if (*stringPointer == '\0') {
			break;
		}
		nr++;
		stringPointer++;
	}

	return nr;
}