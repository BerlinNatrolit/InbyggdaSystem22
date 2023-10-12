#include <iostream>

using namespace std;

class Rectangle {
public:
	int width = 0;
	int height = 0;

	Rectangle(int width, int height) {
		this->width = width;
		this->height = height;
	}
};


inline void modify(Rectangle& rect) {
	rect.width = 3;
	rect.height = 12;
}

int main() {
	
	// Bitwise operators.
	int a = 45;		//0010 1101
	int b = 72;		//0100 1000

	cout << "A | B: " << (a | b) << endl;		// Bitwise or
	//   0010 1101
	//  |0100 1000
	// -----------
	//   0110 1101
	cout << "A || B: " << (a || b) << endl;		// Or

	cout << "A & B: " << (a & b) << endl;		// Bitwise and
	//   0010 1101
	//  &0100 1000
	// -----------
	//   0000 1000 
	cout << "A && B: " << (a && b) << endl;		// And

	// Lets define some buttons emulating the NES controller
	const int UP = 1;
	const int DOWN = 2;
	const int LEFT = 4;
	const int RIGHT = 8;
	const int SELECT = 16;
	const int START = 32;
	const int A = 64;
	const int B = 128;

	// Lets pretend we are pressing Down, right, select and B at the same time, how does the int look?
	int ControllerA = DOWN | RIGHT | SELECT | B;	// Skapar en kontroller som har knapparna ner, höger, select och B nedtryckta.
	//   0000 0010		// BIT2
	//   0000 1000		// BIT4
	//   0001 0000		// BIT5
	// | 1000 0000      // BIT8
	// -----------
	//   1001 1010
	cout << "Test: " << ControllerA << endl;

	cout << "Is bit5 set? " << ((ControllerA & SELECT) > 0) << endl;
	//   1001 1010
	//  &0001 0000
	// -----------
	//   0001 0000

	cout << "Is bit6 set? " << ((ControllerA & START) > 0) << endl;
	//   1001 1010
	//  &0010 0000
	// -----------
	//   0000 0000

	cout << "~A: " << ~a << endl;
	//  ~0010 1101
	//  ----------
	//   1101 0010
	

	cout << "a >> 1: " << (a >> 1) << endl;
	//A: 0010 1101
	//s: 0001 0110
	cout << "a << 1: " << (a << 1) << endl;
	//A: 00101101
	//s: 01011010

	

	Rectangle rect(5, 6);
	cout << "(Width:height) = (" << rect.width << ":" << rect.height << ")" << endl;

	// if the function we are calling have Rectangle& as argument it is copy by reference
	// otherwise if it only says Rectangle it is copy by value. (C++ has default copy by value)
	modify(rect);
	cout << "(Width:height) = (" << rect.width << ":" << rect.height << ")" << endl	;
	
	return 0;
}