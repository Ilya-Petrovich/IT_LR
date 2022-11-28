#include <iostream>
#include <string>
#include "windows.h"

using namespace std;

void dancing(string* firstEl,  int t);

int main() {
	string pers[12] = {
	"   ()()   ",
	"   ()()   ",
	"   ()()   ",
	"   |..|   ",
	"  \\|  |\/  ",
	"  \/|UU|\\  ",
	"  --\\\/--  ",
	" /  ||  \\ ",
	"/   ||   \\",
	"    /\\    ",
	"    ||    ",
	"   _||_   ",
	};

	

	string* pers0 = pers;
	dancing(pers0, 500);

	return 0;
}

void dancing(string* firstEl, int t) {
	int col = 12;
	string pers[12];
	string* ptpers = pers;
	for (int i = 0; i < col; i++, firstEl++) pers[i] = *firstEl;
	for (int i = 0; i < col; i++) cout << pers[i] << endl;

	for (int q = 0; q < 2; q++) {
		pers[6] = " ---\\\/--- ";
		pers[7] = "/   ||   \\";
		pers[8] = "    ||    ";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i]<< endl;
		}
		pers[6] = "  --\\\/----";
		pers[7] = " /  ||    ";
		pers[8] = "/   ||    ";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout<< pers[i]<< endl;
		}
		pers[5] = "  \/|UU|\\ /";
		pers[6] = " ---\\\/--- ";
		pers[7] = "/   ||    ";
		pers[8] = "    ||    ";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout<< pers[i]<< endl;
		}
		pers[4] = "  \\|  |\/ /";
		pers[5] = "  \/|UU|\\/";
		pers[6] = "  --\\\/--  ";
		pers[7] = " /  ||    ";
		pers[8] = "/   ||    ";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[4] = "  \\|  |\/ *";
		pers[5] = "  \/|UU|\\/";
		pers[6] = " ---\\\/--  ";
		pers[7] = "/   ||    ";
		pers[8] = "    ||    ";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[4] = "  \\|  |\/ /";
		pers[5] = "  \/|UU|\\/";
		pers[6] = "----\\\/--  ";
		pers[7] = "    ||    ";
		pers[8] = "    ||    ";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[4] = "  \\|  |\/ *";
		pers[5] = "\\ \/|UU|\\/";
		pers[6] = " ---\\\/--  ";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[4] = "\\ \\|  |\/ /";
		pers[5] = " \\\/|UU|\\/";
		pers[6] = "  --\\\/--  ";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[4] = "* \\|  |\/ *";
		pers[5] = " \\\/|UU|\\/";
		pers[6] = "  --\\\/--  ";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[4] = "  \\|  |\/  ";
		pers[5] = "* \/|UU|\\ *";
		pers[6] = " ---\\\/--- ";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[5] = "  \/|UU|\\  ";
		pers[6] = "*---||---*";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[6] = " ---||--- ";
		pers[7] = "*   ||   *";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[6] = "  --||--  ";
		pers[7] = " /  ||  \\ ";
		pers[8] = "*   ||   *";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[8] = "/   ||   \\";
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
	}
	system("cls");
	return;
}