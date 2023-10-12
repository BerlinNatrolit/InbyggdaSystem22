#include <iostream>

using namespace std;

// Interface, only virtual funcitons.
// Interfaces can not be used directly, only extended.
class IShape {
public:
	// (pure) virtual function
	virtual int getArea() = 0;
	virtual void setWidth(int w) = 0;
	virtual void setHeight(int h) = 0;
};

// Abstract class has at least one virtual function, but some implementation.
// Abstract classes can not be used directly, only extended.
class Shape {
public:
	// (pure) virtual function
	virtual int getArea() = 0;
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
protected:
	int width;
	int height;
};

// Rectangle extending shape.
// Now we can use it.
class Rectangle : public Shape {
public:
	int getArea() {
		return width * height;
	}
};

// Rectangle extending shape.
// Now we can use it.
class Triangle : public Shape {
public:
	int getArea() {
		return width * height /2;
	}
};


int main() {
	Rectangle rect;
	rect.setHeight(5);
	rect.setWidth(7);
	cout << rect.getArea() << endl;

	Shape shape;	// Does not work.



	return 0;
}
