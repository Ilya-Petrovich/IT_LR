#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

void dancing(string* firstNum, int t);

int main() {
	string character[12] = {
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
	string* character0 = character;
	dancing(character0, 1000);
	return 0;
}

void dancing(string* firstNum, int t) {
	string character[12];
	string* ptcharacter = character;;
	for (int i = 0; i < 12; i++, firstNum++) character[i] = *firstNum;
	for (int i = 0; i < 12; i++) cout << character[i] << endl;

	for (int q = 0; q < 2; q++) {
		//1
		character[6] = " ---\\/--- ";
		character[7] = "/   ||   \\";
		character[8] = "    ||    ";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}
		//2
		character[6] = "  --\\/----";
		character[7] = " /  ||    ";
		character[8] = "/   ||    ";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}//3
		character[5] = "  /|UU|\\ /";
		character[6] = " ---\\/--- ";
		character[7] = "/   ||    ";
		character[8] = "    ||    ";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}
		//4
		character[4] = "  \\|  |/ /";
		character[5] = "  /|UU|\\/ ";
		character[6] = "  --\\/--  ";
		character[7] = " /  ||    ";
		character[8] = "/   ||    ";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}
		//5
		character[4] = "  \\|  |/ *";
		character[5] = "  /|UU|\\/ ";
		character[6] = " ---\\/--  ";
		character[7] = "/   ||    ";
		character[8] = "    ||    ";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}
		//6
		character[4] = "  \\|  |/ /";
		character[5] = "  /|UU|\\/ ";
		character[6] = "----\\/--  ";
		character[7] = "    ||    ";
		character[8] = "    ||    ";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}
		//7
		character[4] = "  \\|  |/ *";
		character[5] = "\\ /|UU|\\/ ";
		character[6] = " ---\\/--  ";
		character[7] = "    ||    ";
		character[8] = "    ||    ";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}
		//8
		character[4] = "\\ \\|  |/ /";
		character[5] = " \\/|UU|\\/ ";
		character[6] = "  --\\/--  ";
		character[7] = "    ||    ";
		character[8] = "    ||    ";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}
		//9
		character[4] = "* \\|  |/ *";
		character[5] = " \\/|UU|\\/ ";
		character[6] = "  --\\/--  ";
		character[7] = "    ||    ";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}
		//10
		character[4] = "  \\|  |/  ";
		character[5] = "* /|UU|\\ *";
		character[6] = " ---\\/--- ";
		character[7] = "    ||    ";
		character[8] = "    ||    ";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}
		//11
		character[4] = "  \\|  |/  ";
		character[5] = "  /|UU|\\  ";
		character[6] = "*---\\/---*";
		character[7] = "    ||    ";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}
		//12
		character[6] = " ---\\/--- ";
		character[7] = "*   ||   *";
		character[8] = "    ||    ";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}
		//13
		character[6] = "  --\\/--  ";
		character[7] = " /  ||  \\ ";
		character[8] = "*   ||   *";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}
		//14
		character[7] = " /  ||  \\ ";
		character[8] = "/   ||   \\";
		//usleep(t);
		//	system("cls");

		for (int i = 0; i < 12; i++) {
			cout << character[i] << endl;
		}
	}
	//system("cls");
	return;
}
