// Lecture 2 in C++ programming
// const, operators, if-else, loop, array, strings.

#include <iostream>

using namespace std;

int main() {
	// Constants, gives errors if you try to change them afterwards.
	const int AGE = 40;
	const float WEIGHT = 39.9;
	
	// ++ -- operators
	int a = 1;
	a++;
	cout << a++;
	
	a++;			// Adderar 1 efter ni använder värdet
	++a;			// Adderar 1 innan ni använder värdet
	
	// A simple for loop.
	for(int i=0;i<5;++i) {
		cout << i << endl;
	}
	
	// Ternary operator
	// if expression is true, return the first part (true here),
	// otherwise return the second part (false here).
	a == 4 ? cout << true : cout << false;
	
	// Operator priority, important. :P
	a = 2;
	int b = 4;
	int c = b + a * a / b - a;
	cout << endl << "C: " << c << endl;
	int d = 3*(5+5);
	int e = 3*5+5;
	
	cout << "D: " << d << " E: " << e << endl;
	
	// If-else statement.
	a+=4;
	if(a==5) {
		cout << "we are in if" << endl;
	} else if(a==6) {
		cout << "we are in else if" << endl;
	} else {
		cout << "we are in else" << endl;
	}
	// if you only have one line of code in your if-statement you
	// dont need the brackets, but my personal preference is to
	// always include them.
	if (a==5)
		cout << "hello there" << endl;
	else if (a==6)
		cout << "Hi there" << endl;
	else
		cout << "ehh what?" << endl;

	// Switch statement.
	// can be an alternative to if statement in some cases,
	// but is rarely seen in code.
	a=2;
	switch(a) {
		case 0:
			cout << "a==0" << endl;
			break;
		case 1:
			cout << "a==1" << endl;
			break;
		case 2:
			cout << "a==2" << endl;
			break;
		case 3:
			cout << "a==3" << endl;
			break;
		default:
			cout << "default" << endl;
			break;
	}
	
	// LOOPS!!!
	// for loop, prints 0-9
	for(int i=0;i<10;i++) {
		cout << i << endl;
	}
	
	// while loop,
	// this while loop is using the "keep going" pattern.
	int i=0;
	bool run = true;
	while(run) {
		cout << i++;
		
		if(i > 10) {
			run = false;
		}
	}
	
	// do-while loop. Difference between while and do-while
	// is that do while will always run at least once, while
	// while loops can skip completely if the conditions are
	// met when reaching the loop.
	i=0;
	cout << endl << "Do While" << endl;
	do {
		cout << i++ << endl;;
	} while(i<10);
	
	// Arrays
	// similar to python, but small differences.
	int prices[5] = {1,2,3,4,5};
	cout << "Prices 2: " << prices[2] << endl;
	prices[2] = 5.6f;
	cout << "Prices 2: " << prices[2] << endl;
	
	int values[5];
	values[0] = 5;
	//values[1] = 2;
	//values[2] = 10;
	//values[3] = 100;
	//values[4] = 10000;
	
	cout << "Values 4: " << values[4] << endl;
	
	// Strings
	// c++ has a string class, old C has not.
	string s = "Hello world";
	string t = "Hello universe";
	cout << s << endl;
	cout << t << endl;
	string u = s+t;
	cout << u << endl;
	
	t = s;
	cout << t << endl;
	t = "Hi universe";
	cout << "t: " << t << " s: " << s << endl;
	
	cout << " s==t: " << (s == t) << endl;
	s = "hi";
	t = "hi";
	cout << " s==t: " << (s == t) << endl;
	
	
	return 0;
}
