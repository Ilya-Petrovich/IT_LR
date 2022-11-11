#include <iostream>

int main() {
	while(1) {
		int* i = new int[1]();
		std::cout << "Hello world! " << i << std::endl;
	}
	return 0;
}
