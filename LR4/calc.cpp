#include <iostream>
int main() {
	int num_1, num_2, num_3;
	std::cout << "Type the first number: ";
	std::cin >> num_1;
	std::cout << "Type the second number: ";
	std::cin >> num_2;
	std::cout << "Type the third number: ";
	std::cin >> num_3;
    if ((num_1 > num_2) and (num_1 > 0) and (num_3 >= 0) and (num_2 > 0)){
	    std::cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << std::endl;
	    std::cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << std::endl;
	    std::cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << std::endl;
	    std::cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << std::endl;
	    std::cout << float(num_1)<<".0" << " / " << float(num_2)<<".0"  << " = " << float(num_1) / float(num_2) << std::endl;
	    std::cout << num_1 << " % " << num_2 << " = " << num_1 % num_2 << std::endl;
	    std::cout << num_1 << " + " << num_2 << " * " << num_3 << " = " << num_1 + num_2 * num_3<< std::endl;
	    std::cout << "(" << num_1 << " + " << num_2 << ") * " << num_3 << " = " << (num_1 + num_2) * num_3<< std::endl;
} else {
	std::cout << "Invalid data" << std::endl;
}

}