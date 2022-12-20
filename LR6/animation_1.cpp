#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	const int x = 12;

	string krol[x] = {
		"   ()()   ",
		"   ()()   ",
		"   ()()   ",
		"   |..|   ",
		"  \\|  |/  ",
		"  /|UU|\\  ",
		"  --\\/--  ",
		" /  ||  \\ ",
		"/   ||   \\",
		"    /\\    ",
		"    ||    ",
		"   _||_   ",
	};

	for (int i = 0; i < 2; i++) {
		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		/*Sleep(1000);
		system("cls");*/

		krol[6] = " ---\\/--- ";
		krol[7] = "/   ||   \\";
		krol[8] = "    ||    ";

		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		//Sleep(1000);
		//system("cls");

		krol[6] = "  --\\/----";
		krol[7] = " /  ||    ";
		krol[8] = "/   ||    ";

		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		//Sleep(1000);
		//system("cls");

		krol[5] = "  /|UU|\\ /";
		krol[6] = " ---\\/--- ";
		krol[7] = "/   ||    ";
		krol[8] = "    ||    ";

		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		//Sleep(1000);
		//system("cls");

		krol[4] = "  \\|  |/ /";
		krol[5] = "  /|UU|\\/ ";
		krol[6] = "  --\\/--  ";
		krol[7] = " /  ||    ";
		krol[8] = "/   ||    ";

		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		//Sleep(1000);
		//system("cls");

		krol[4] = "  \\|  |/ *";
		krol[5] = "  /|UU|\\/ ";
		krol[6] = " ---\\/--  ";
		krol[7] = "/   ||    ";
		krol[8] = "    ||    ";


		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		//Sleep(1000);
		//system("cls");

		krol[4] = "  \\|  |/ /";
		krol[5] = "  /|UU|\\/ ";
		krol[6] = "----\\/--  ";
		krol[7] = "    ||    ";
		krol[8] = "    ||    ";

		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		//Sleep(1000);
		//system("cls");

		krol[4] = "  \\|  |/ *";
		krol[5] = "\\ /|UU|\\/ ";
		krol[6] = " ---\\/--  ";

		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		//Sleep(1000);
		//system("cls");

		krol[4] = "\\ \\|  |/ /";
		krol[5] = " \\/|UU|\\/ ";
		krol[6] = "  --\\/--  ";

		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		//Sleep(1000);
		//system("cls");

		krol[4] = "* \\|  |/ *";
		krol[5] = " \\/|UU|\\/ ";
		krol[6] = "  --\\/--  ";

		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		//Sleep(1000);
		//system("cls");

		krol[4] = "  \\|  |/  ";
		krol[5] = "* /|UU|\\ *";
		krol[6] = " ---\\/--- ";

		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		//Sleep(1000);
		//system("cls");

		krol[5] = "  /|UU|\\  ";
		krol[6] = "*---\\/---*";

		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		//Sleep(1000);
		//system("cls");

		krol[6] = " ---\\/--- ";
		krol[7] = "*   ||   *";

		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		//Sleep(1000);
		//system("cls");

		krol[6] = "  --\\/--  ";
		krol[7] = " /  ||  \\ ";
		krol[8] = "*   ||   *";

		for (int i = 0; i < x; i++) {
			cout << krol[i] << "\n";
		}
		//Sleep(1000);
		//system("cls");
		krol[8] = "/   ||   \\";
	}
	for (int i = 0; i < x; i++) {
		cout << krol[i] << "\n";
	}
	return 0;
}