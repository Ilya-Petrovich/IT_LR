#include <iostream>
#include <unistd.h>
using namespace std;

const int b = 12;

int main()
{
	string pers[b] = {
		"    /\\    ",
		"   |oo|   ",
		"  (|..|)  ",
		"   |--|   ",
		"   \\__/   ",
		"    ||    ",
		"  -| *|-  ",
		" / |  | \\ ",
		"/   \\/   \\",
		"    /\\    ",
		"    ||    ",
		"   _||_   "
	};

	for (int i = 0; i < 2; i++)
	{
		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");

		pers[6] = " --| *|-- ";
		pers[7] = "/  |  |  \\";
		pers[8] = "    \\/    ";

		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");

		pers[6] = "  -| *|---";
		pers[7] = " / |  |   ";
		pers[8] = "/   \\/    ";

		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");

		pers[5] = "    ||   /";
		pers[6] = " --| *|-- ";
		pers[7] = "/  |  |   ";
		pers[8] = "    \\/    ";

		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");

		pers[4] = "   \\__/  /";
		pers[5] = "    ||  / ";
		pers[6] = "  -| *|-  ";
		pers[7] = " / |  |   ";
		pers[8] = "/   \\/    ";

		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");

		pers[4] = "   \\__/  *";
		pers[5] = "    ||  / ";
		pers[6] = " --| *|-  ";
		pers[7] = "/  |  |   ";
		pers[8] = "    \\/    ";


		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");

		pers[4] = "   \\__/  /";
		pers[5] = "    ||  / ";
		pers[6] = "---| *|-  ";
		pers[7] = "   |  |   ";

		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");

		pers[4] = "   \\__/  *";
		pers[5] = "\\   ||  / ";
		pers[6] = " --| *|-  ";

		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");

		pers[4] = "\\  \\__/  /";
		pers[5] = " \\  ||  / ";
		pers[6] = "  -| *|-  ";

		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");

		pers[4] = "*  \\__/  *";
		pers[5] = " \\  ||  / ";
		pers[6] = "  -| *|-  ";

		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");

		pers[4] = "   \\__/   ";
		pers[5] = "*   ||   *";
		pers[6] = " --| *|-- ";

		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");

		pers[5] = "    ||    ";
		pers[6] = "*--| *|--*";

		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");

		pers[6] = " --| *|-- ";
		pers[7] = "*  |  |  *";

		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");

		pers[6] = "  -| *|-  ";
		pers[7] = " / |  | \\ ";
		pers[8] = "*   \\/   *";

		for (int i = 0; i < b; i++) cout << pers[i] << "\n";
		//Sleep(1000);
		//system("cls");
		pers[7] = " / |  | \\ ";
		pers[8] = "/   \\/   \\";
	}
	for (int i = 0; i < b; i++) cout << pers[i] << "\n";
	return 0;
}