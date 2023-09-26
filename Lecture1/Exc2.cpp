// Övning 2

#include <iostream>
#include <cmath>

void rectangle() {
	int x = 0;
	int y = 0;
	
	std::cout << "Please give dimension of rectangle." << std::endl;
	std::cout << "X: ";
	std::cin >> x;
	std::cout << "Y: ";
	std::cin >> y;
	
	int area = x*y;
	std::cout << "Area: " << x*y << std::endl;
}

void triangle() {
	int base = 0;
	int height = 0;
	
	std::cout << "Please give dimension of triangle." << std::endl;
	std::cout << "Base: ";
	std::cin >> base;
	std::cout << "Base: ";
	std::cin >> height;
	
	float area = base*height/2;
	float perimeter = sqrt(base*base+height*height)+base+height;
	std::cout << "Area: " << area << std::endl;
	std::cout << "Perimeter: " << perimeter << std::endl;
}

int main() {
	rectangle();
	triangle();
	
	return 0;
}