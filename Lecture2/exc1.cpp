#include <iostream>

using namespace std;

int main() {
	
	for(int i=1;i<=30;i++) {
		
		if(i%3 != 0 && i%5 != 0) {
			cout << i;
		}
		
		if(i%3 == 0) {
			cout << "Fizz";
		}
		if(i%5 == 0) {
			cout << "Buzz";
		}
		
		cout << endl;
	}
		

	return 0;
}