
#include <iostream>
#include <string>

using namespace std;

// A 2D-vector
class Vector2 {
public:
	// x and y size.
	int x;
	int y;

	Vector2() {}						// default constructor
	Vector2(int x, int y) {				// overloaded constructor
		this->x = x;
		this->y = y;
	}
	
	Vector2 operator+(Vector2 v) {		// Lets create a behaviour for the operator + when adding two Vector2D:S
		Vector2 vector;
		vector.x = this->x + v.x;
		vector.y = this->y + v.y;
		return vector;
	}

	int operator*(Vector2 v) {			// Overloading operator *
		int ans = this->x * v.x + this->y * v.y;
		return ans;
	}

	bool operator==(Vector2 v) {		// Overloading equal.
		bool ans = this->x == v.x && this->y == v.y;
		return ans;
	}
	
	string ToString() {
		return "(X:Y) = (" + to_string(x) + ":" + to_string(y) + ")";
	}
};


int main() {
start:
	Vector2 v1(5, 7);
	Vector2 v2(3, 6);
	Vector2 v3;
	
	// now we are tryig the operators.
	v3 = v1 + v2;			
	int prod = v1 * v2;
	bool euqal = v1 == v2;

	cout << v3.ToString() << endl;

	///////////////////////////////////////////////////////
	// ANVÄND ALDRIG GOTO!!!!
	///////////////////////////////////////////////////////

	std::cout << "statement1" << std::endl;
	goto skip;
	std::cout << "statement2" << std::endl;
	std::cout << "statement3" << std::endl;


	goto afterStart;
	goto start;
afterStart:
	std::cout << "statement4" << std::endl;
skip:
	std::cout << "statement20" << std::endl;
skip1:
	std::cout << "statement21" << std::endl;





	return 0;
}
