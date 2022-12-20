#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

const int a = 10, b = 12;

int main()
{
	string person[b] = {
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

	for (int i = 0; i < 2; i++)
	{
		for (int i = 0; i < b; i++) cout << person[i] << endl;

		//Sleep(300);
		//system("cls");
		person[6] = " ---\\/--- ";
		person[7] = "/   ||   \\";
		person[8] = "    ||    ";
		for (int i = 0; i < b; i++) cout << person[i] << endl;

		//Sleep(300);
		//system("cls");
		person[6] = "  --\\/----";
		person[7] = " /  ||    ";
		person[8] = "/   ||    ";
		for (int i = 0; i < b; i++) cout << person[i] << endl;

		//Sleep(300);
		//system("cls");

		person[5] = "  /|UU|\\ /";
		person[6] = " ---\\/--- ";
		person[7] = "/   ||    ";
		person[8] = "    ||    ";

		for (int i = 0; i < b; i++) cout << person[i] << endl;
		//Sleep(300);
		//system("cls");

		person[4] = "  \\|  |/ /";
		person[5] = "  /|UU|\\/ ";
		person[6] = "  --\\/--  ";
		person[7] = " /  ||    ";
		person[8] = "/   ||    ";

		for (int i = 0; i < b; i++) cout << person[i] << endl;
		//Sleep(300);
		//system("cls");

		person[4] = "  \\|  |/ *";
		person[5] = "  /|UU|\\/ ";
		person[6] = " ---\\/--  ";
		person[7] = "/   ||    ";
		person[8] = "    ||    ";

		for (int i = 0; i < b; i++) cout << person[i] << endl;
		//Sleep(300);
		//system("cls");

		person[4] = "  \\|  |/ /";
		person[5] = "  /|UU|\\/ ";
		person[6] = "----\\/--  ";
		person[7] = "    ||    ";


		for (int i = 0; i < b; i++) cout << person[i] << endl;
		//Sleep(300);
		//system("cls");

		person[4] = "  \\|  |/ *";
		person[5] = "\\ /|UU|\\/ ";
		person[6] = " ---\\/--  ";
		person[7] = "    ||    ";


		for (int i = 0; i < b; i++) cout << person[i] << endl;
		//Sleep(300);
		//system("cls");

		person[4] = "\\ \\|  |/ /";
		person[5] = " \\/|UU|\\/ ";
		person[6] = "  --\\/--  ";
		person[7] = "    ||    ";


		for (int i = 0; i < b; i++) cout << person[i] << endl;
		//Sleep(300);
		//system("cls");

		person[4] = "* \\|  |/ *";
		person[5] = " \\/|UU|\\/ ";
		person[7] = "    ||    ";


		for (int i = 0; i < b; i++) cout << person[i] << endl;
		//Sleep(300);
		//system("cls");

		person[4] = "  \\|  |/  ";
		person[5] = "* /|UU|\\ *";
		person[6] = " ---\\/--- ";
		person[7] = "    ||    ";


		for (int i = 0; i < b; i++) cout << person[i] << endl;
		//Sleep(300);
		//system("cls");

		person[5] = "  /|UU|\\  ";
		person[6] = "*---\\/---*";
		person[7] = "    ||    ";

		for (int i = 0; i < b; i++) cout << person[i] << endl;
		//Sleep(300);
		//system("cls");

		person[6] = " ---\\/--- ";
		person[7] = "*   ||   *";


		for (int i = 0; i < b; i++) cout << person[i] << endl;
		//Sleep(300);
		//system("cls");

		person[6] = "  --\\/--  ";
		person[7] = " /  ||  \\ ";
		person[8] = "*   ||   *";

		for (int i = 0; i < b; i++) cout << person[i] << endl;
		//Sleep(300);
		//system("cls");

		person[7] = " /  ||  \\ ";
		person[8] = "/   ||   \\";


	}
	for (int i = 0; i < b; i++) cout << person[i] << endl;

	return 0;
}