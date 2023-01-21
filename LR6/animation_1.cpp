#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono_literals;

int main()
{
	int i = 0;
	do {
		string person1 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"      \\ _ _ /   \n"
			"       |  |      \n"
			"     -|    |-    \n"
			"   /  |    |  \\  \n"
			"  /    \\  /    \\\n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person1;
		std::this_thread::sleep_for(1s);
		system("cls");
		string person2 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"      \\ _ _ /   \n"
			"       |  |      \n"
			"    --|    |--    \n"
			"   /  |    |  \\  \n"
			"       \\  /      \n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person2;
		std::this_thread::sleep_for(1s);
		system("cls");
		string person3 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"      \\ _ _ /   \n"
			"       |  |      \n"
			"     -|    |---   \n"
			"   /  |    |     \n"
			"  /    \\  /      \n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person3;
		std::this_thread::sleep_for(1s);
		system("cls");
		string person4 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"      \\ _ _ /   \n"
			"       |  |   /  \n"
			"    --|    |--   \n"
			"   /  |    |     \n"
			"       \\  /      \n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person4;
		std::this_thread::sleep_for(1s);
		system("cls");
		string person5 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"      \\ _ _ /  / \n"
			"       |  |   /  \n"
			"     -|    |-   \n"
			"   /  |    |     \n"
			"  /    \\  /      \n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person5;
		std::this_thread::sleep_for(1s);
		system("cls");
		string person6 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"      \\ _ _ /  * \n"
			"       |  |   /  \n"
			"    --|    |-   \n"
			"   /  |    |     \n"
			"       \\  /      \n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person6;
		std::this_thread::sleep_for(1s);
		system("cls");
		string person7 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"      \\ _ _ /  / \n"
			"       |  |   /  \n"
			"   ---|    |-   \n"
			"      |    |     \n"
			"       \\  /      \n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person7;
		std::this_thread::sleep_for(1s);
		system("cls");
		string person8 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"      \\ _ _ /  * \n"
			"   \\   |  |   /  \n"
			"    --|    |-   \n"
			"      |    |     \n"
			"       \\  /      \n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person8;
		std::this_thread::sleep_for(1s);
		system("cls");
		string person9 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"   \\  \\ _ _ / / \n"
			"    \\  |  |  /  \n"
			"     -|    |-   \n"
			"      |    |     \n"
			"       \\  /      \n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person9;
		std::this_thread::sleep_for(1s);
		system("cls");
		string person10 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"   *  \\ _ _ / * \n"
			"    \\  |  |  /  \n"
			"     -|    |-   \n"
			"      |    |     \n"
			"       \\  /      \n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person10;
		std::this_thread::sleep_for(1s);
		system("cls");
		string person11 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"      \\ _ _ /   \n"
			"   *   |  |   *  \n"
			"    --|    |--   \n"
			"      |    |     \n"
			"       \\  /      \n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person11;
		std::this_thread::sleep_for(1s);
		system("cls");
		string person12 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"      \\ _ _ /   \n"
			"       |  |     \n"
			"   *--|    |--*   \n"
			"      |    |     \n"
			"       \\  /      \n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person12;
		std::this_thread::sleep_for(1s);
		system("cls");
		string person13 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"      \\ _ _ /   \n"
			"       |  |     \n"
			"    --|    |--   \n"
			"   *  |    |  *   \n"
			"       \\  /      \n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person13;
		std::this_thread::sleep_for(1s);
		system("cls");
		string person14 =
			"        / \\     \n"
			"      | o o |    \n"
			"    ( | . . | )  \n"
			"      | - - |    \n"
			"      \\ _ _ /   \n"
			"       |  |      \n"
			"     -|    |-    \n"
			"   /  |    |  \\  \n"
			"  *    \\  /    *\n"
			"       /  \\     \n"
			"      |    |      \n"
			"     _|    |_      \n";
		cout << person14;
		std::this_thread::sleep_for(1s);
		system("cls");
		i++;
	}while (i < 2);
	string person1 =
		"        / \\     \n"
		"      | o o |    \n"
		"    ( | . . | )  \n"
		"      | - - |    \n"
		"      \\ _ _ /   \n"
		"       |  |      \n"
		"     -|    |-    \n"
		"   /  |    |  \\  \n"
		"  /    \\  /    \\\n"
		"       /  \\     \n"
		"      |    |      \n"
		"     _|    |_      \n";
	cout << person1;
	return 0;
}
