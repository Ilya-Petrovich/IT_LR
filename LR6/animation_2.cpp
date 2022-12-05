#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

void going(string* firstEl, int col, int t);
void dancing(string* firstEl, int col, int t);
void jump(string* firstEl, int col, int t);
void ball(string* firstEl, int col, int t);
void show(string* firstEl, int col, int t);

int main() {
	char uChoice;
	string character[20] = {
		"****************************************",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*                                      *",
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
		"****************************************"
	};
	string* character0 = character;

	while (1) {
		int amount = sizeof(character) / sizeof(character[0]);
		cout << "Choose animation:" << endl << "Dance: \t\t\t1" << endl
			<< "Run: \t\t\t2" << endl << "Sit down and jump: \t3" << endl
			<< "Throw a ball: \t\t4" << endl << endl << "Enter 5 for exit." << endl;
		cin >> uChoice;
		if (uChoice == '1') {
		//	system("cls");
			dancing(character0, amount, 200);
		}
		else if (uChoice == '2') {
		//	system("cls");
			going(character0, amount, 20);
		}
		else if (uChoice == '3') {
		//	system("cls");
			jump(character0, amount, 100);
		}
		else if (uChoice == '4') {
		//	system("cls");
			ball(character0, amount, 100);
		}
		else if (uChoice == '5') {
			return 0;
		}
		else {
			cout << "Bad input.";
			return 0;
		}
	}
}

void show(string* firstEl, int col, int t) {
	for (int i = 0; i < 20; i++, firstEl++) cout << *firstEl << endl;
	//Sleep(t);
	//system("cls");
	return;
}

void dancing(string* firstEl, int col, int t) {
	string character[20], space = "                            *", space1 = "                           *", space2 = "                          *";
	string* ptcharacter = character;
	for (int i = 0; i < 20; i++, firstEl++) ((i >= 0 && i < 7) || (i == 19)) ? character[i] = *firstEl
		: character[i] = "*" + *firstEl + space;
	for (int i = 0; i < 20; i++) ((i >= 0 && i < 7) || i == 19) ? cout << character[i] << endl :
		cout << character[i] << endl;

	for (int q = 0; q < 2; q++) {
		//1
		character[13] = "* ---\\/--- " + space;
		character[14] = "*/   ||   \\" + space;
		character[15] = "*    ||    " + space;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}
		//2
		character[13] = "*  --\\/---- " + space1;
		character[14] = "* /  ||    " + space;
		character[15] = "*/   ||    " + space;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}//3
		character[12] = "*  /|UU|\\ /  " + space2;
		character[13] = "* ---\\/---  " + space1;
		character[14] = "*/   ||    " + space;
		character[15] = "*    ||    " + space;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}
		//4
		character[11] = "*  \\|  |/ /  " + space2;
		character[12] = "*  /|UU|\\/   " + space2;
		character[13] = "*  --\\/--   " + space1;
		character[14] = "* /  ||    " + space;
		character[15] = "*/   ||    " + space;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}
		//5
		character[11] = "*  \\|  |/ *  " + space2;
		character[12] = "*  /|UU|\\/   " + space2;
		character[13] = "* ---\\/--  " + space;
		character[14] = "*/   ||    " + space;
		character[15] = "*    ||    " + space;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}
		//6
		character[11] = "*  \\|  |/ /  " + space2;
		character[12] = "*  /|UU|\\/  " + space1;
		character[13] = "*----\\/--  " + space;
		character[14] = "*    ||    " + space;
		character[15] = "*    ||    " + space;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}
		//7
		character[11] = "*  \\|  |/ *  " + space2;
		character[12] = "*\\ /|UU|\\/  " + space1;
		character[13] = "* ---\\/--  " + space;
		character[14] = "*    ||    " + space;
		character[15] = "*    ||    " + space;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}
		//8
		character[11] = "*\\ \\|  |/ /  " + space2;
		character[12] = "* \\/|UU|\\/   " + space2;
		character[13] = "*  --\\/--  " + space;
		character[14] = "*    ||    " + space;
		character[15] = "*    ||    " + space;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}
		//9
		character[11] = "** \\|  |/ *  " + space2;
		character[12] = "* \\/|UU|\\/  " + space1;
		character[13] = "*  --\\/--  " + space;
		character[14] = "*    ||    " + space;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}
		//10
		character[11] = "*  \\|  |/  " + space;
		character[12] = "** /|UU|\\ *  " + space2;
		character[13] = "* ---\\/--- " + space;
		character[14] = "*    ||    " + space;
		character[15] = "*    ||    " + space;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}
		//11
		character[11] = "*  \\|  |/  " + space;
		character[12] = "*  /|UU|\\  " + space;
		character[13] = "**---\\/---* " + space1;
		character[14] = "*    ||    " + space;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}
		//12
		character[13] = "* ---\\/--- " + space;
		character[14] = "**   ||   * " + space1;
		character[15] = "*    ||    " + space;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}
		//13
		character[13] = "*  --\\/--  " + space;
		character[14] = "* /  ||  \\  " + space1;
		character[15] = "**   ||   *  " + space2;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}
		//14
		character[14] = "* /  ||  \\   " + space2;
		character[15] = "*/   ||   \\ " + space1;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 20; i++) {
			cout << character[i] << endl;
		}
	}
	//system("cls");
	return;
}

void going(string* firstEl, int col, int t) {
	string character[20];
	for (int i = 0; i < 20; i++, firstEl++) character[i] = *firstEl;

	string spaces = "";
	for (int i = 11; i < 39; i++) {
		for (int step = 0; step < 3; step++) {
			if (step == 1) {
				character[17] = "    | \\   ";
				character[18] = "   _|  \\_ ";

				int copy_i = i - 11;
				while (copy_i != 0) {
					spaces += " ";
					copy_i--;
				}
				string spaces_right = "";
				for (int p = 40 - i - 1; p > 0; p--) {
					spaces_right += " ";
				}
				spaces_right += "*";

				for (int q = 0; q < 20; q++) {
					((q >= 0 && q < 7) || (q == 19)) ? cout << character[q] << endl :
						cout << "*" + spaces + character[q] + spaces_right << endl;
				}
				//Sleep(t);
				//system("cls");
				spaces = "";
			}
			else if (step == 0) {
				character[17] = "    ||    ";
				character[18] = "   _||_   ";

				int copy_i = i - 11;
				while (copy_i != 0) {
					spaces += " ";
					copy_i--;
				}
				string spaces_right = "";
				for (int p = 40 - i - 1; p != 0; p--) {
					spaces_right += " ";
				}
				spaces_right += "*";

				for (int q = 0; q < 20; q++) {
					((q >= 0 && q < 7) || (q == 19)) ? cout << character[q] << endl :
						cout << "*" + spaces + character[q] + spaces_right << endl;
				}
				//Sleep(t);
				//system("cls");
				//spaces = "";

			}
			else {
				int copy_i = i - 10;
				while (copy_i != 0) {
					spaces += " ";
					copy_i--;
				}
				string spaces_right = "";
				for (int p = 40 - i - 2; p != 0; p--) {
					spaces_right += " ";
				}
				spaces_right += "*";
				character[17] = "   / |    ";
				character[18] = " _/  |_   ";
				for (int q = 0; q < 20; q++) {
					((q >= 0 && q < 7) || (q == 19)) ? cout << character[q] << endl :
						cout << "*" + spaces + character[q] + spaces_right << endl;
				}
				//Sleep(t);
				//system("cls");
				spaces = "";
			}
		}
	}
	// MAKE GO BACK BY STEP
	for (int i = 38; i != 11; i--) {
		for (int step = 0; step < 3; step++) {
			if (step == 1) {
				character[17] = "    | \\   ";
				character[18] = "   _|  \\_ ";

				int copy_i = i - 11;
				while (copy_i != 0) {
					spaces += " ";
					copy_i--;
				}
				string spaces_right = "";
				for (int p = 40 - i - 1; p > 0; p--) {
					spaces_right += " ";
				}
				spaces_right += "*";
				for (int q = 0; q < 20; q++) {
					((q >= 0 && q < 7) || (q == 19)) ? cout << character[q] << endl :
						cout << "*" + spaces + character[q] + spaces_right << endl;
				}
				//Sleep(t);
				//system("cls");
				spaces = "";
			}
			else if (step == 0) {
				int copy_i = i - 11;
				while (copy_i != 0) {
					spaces += " ";
					copy_i--;
				}
				string spaces_right = "";
				for (int p = 40 - i - 1; p != 0; p--) {
					spaces_right += " ";
				}
				spaces_right += "*";
				character[17] = "    ||    ";
				character[18] = "   _||_   ";
				for (int q = 0; q < 20; q++) {
					((q >= 0 && q < 7) || (q == 19)) ? cout << character[q] << endl :
						cout << "*" + spaces + character[q] + spaces_right << endl;
				}
				//Sleep(t);
				//system("cls");
				spaces = "";

			}
			else {
				int copy_i = i - 12;
				while (copy_i != 0) {
					spaces += " ";
					copy_i--;
				}
				string spaces_right = "";
				for (int p = 40 - i; p != 0; p--) {
					spaces_right += " ";
				}
				spaces_right += "*";
				character[17] = "   / |    ";
				character[18] = " _/  |_   ";
				for (int q = 0; q < 20; q++) {
					((q >= 0 && q < 7) || (q == 19)) ? cout << character[q] << endl :
						cout << "*" + spaces + character[q] + spaces_right << endl;
				}
				//Sleep(t);
				//system("cls");
				spaces = "";
			}
		}
	}
	return;
}

void ball(string* firstEl, int col, int t) {
	string character[20], space = "                            *";
	string* ptcharacter = character;
	for (int i = 0; i < 20; i++, firstEl++) ((i >= 0 && i < 7) || (i == 19)) ?
		character[i] = *firstEl : character[i] = "*" + *firstEl + space;
	show(ptcharacter, 20, t);
	character[14] = "* /  ||  \\o" + space;
	character[15] = "*/   ||   -" + space;
	show(ptcharacter, 20, t);
	character[13] = "*  --\\/---o" + space;
	character[14] = "* /  ||  \\-" + space;
	character[15] = "*/   ||    " + space;
	show(ptcharacter, 20, t);
	character[12] = "*  /|UU|\\ o" + space;
	character[13] = "*  --\\/----" + space;
	character[14] = "* /  ||    " + space;
	character[15] = "*/   ||    " + space;
	show(ptcharacter, 20, t);
	character[11] = "*  \\|  |/ o" + space;
	character[12] = "*  /|UU|\\  " + space;
	character[13] = "*  --\\/---/" + space;
	show(ptcharacter, 20, t);
	character[10] = "*   |..|  o" + space;
	character[11] = "*  \\|  |/  " + space;
	character[12] = "*  /|UU|\\  " + space;
	character[13] = "*  --\\/----" + space;
	show(ptcharacter, 20, t);
	character[9] = "*   ()()  o" + space;
	character[10] = "*   |..|   " + space;
	character[13] = "*  --\\/--- " + space;
	character[14] = "* /  ||  \\ " + space;
	show(ptcharacter, 20, t);
	character[8] = "*   ()()  o" + space;
	character[9] = "*   ()()   " + space;
	character[13] = "*  --\\/--  " + space;
	character[15] = "*/   ||   \\" + space;
	firstEl -= 10;
	for (int i = 10; i < 20 - 1; i++, firstEl++) character[i] = "*" + *firstEl + space;
	//
	show(ptcharacter, 20, t);
	character[7] = "*   ()()  o" + space;
	character[8] = "*   ()()   " + space;
	show(ptcharacter, 20, t);
	character[6] = "*        o " + space;
	character[7] = "*   ()()   " + space;
	show(ptcharacter, 20, t);
	character[5] = "*       o  " + space;
	character[6] = "*          " + space;
	show(ptcharacter, 20, t);
	character[4] = "*      o   " + space;
	character[5] = "*          " + space;
	show(ptcharacter, 20, t);
	character[3] = "*     o    " + space;
	character[4] = "*          " + space;
	show(ptcharacter, 20, t);
	character[3] = "*    o     " + space;
	show(ptcharacter, 20, t);
	character[3] = "*          " + space;
	character[4] = "*   o      " + space;
	show(ptcharacter, 20, t);
	character[4] = "*          " + space;
	character[5] = "*  o       " + space;
	show(ptcharacter, 20, t);
	character[5] = "*          " + space;
	character[6] = "* o        " + space;
	show(ptcharacter, 20, t);
	character[6] = "*          " + space;
	character[7] = "*o  ()()   " + space;
	show(ptcharacter, 20, t);
	character[7] = "*   ()()   " + space;
	character[8] = "*o  ()()   " + space;
	show(ptcharacter, 20, t);
	character[8] = "*   ()()   " + space;
	character[9] = "*o  ()()   " + space;
	character[15] = "*    ||   \\" + space;
	character[14] = "*/   ||  \\ " + space;
	character[13] = "* ---\\/--  " + space;
	//
	show(ptcharacter, 20, t);
	character[10] = "*o  |..|   " + space;
	character[9] = "*   ()()   " + space;
	character[14] = "*    ||  \\ " + space;
	character[13] = "*----\\/--  " + space;
	//
	show(ptcharacter, 20, t);
	character[10] = "*   |..|   " + space;
	character[11] = "*o \\|  |/  " + space;
	character[13] = "*\\---\\/--  " + space;
	//
	show(ptcharacter, 20, t);
	character[11] = "*  \\|  |/  " + space;
	character[12] = "*o /|UU|\\  " + space;
	character[13] = "*----\\/--  " + space;
	show(ptcharacter, 20, t);
	character[12] = "*  /|UU|\\  " + space;
	character[13] = "*o---\\/--  " + space;
	character[14] = "*-/  ||  \\ " + space;
	character[15] = "*    ||   \\" + space;
	show(ptcharacter, 20, t);
	character[13] = "*  --\\/--  " + space;
	character[14] = "*o/  ||  \\ " + space;
	character[15] = "*-   ||   \\" + space;
	show(ptcharacter, 20, t);
	character[14] = "* /  ||  \\ " + space;
	character[15] = "*/   ||   \\" + space;
	show(ptcharacter, 20, t);
	//system("cls");
	return;
}

void jump(string* firstEl, int col, int t) {
	string character[20], space = "                            *";
	string* ptcharacter = character;
	for (int i = 0; i < 20; i++, firstEl++) ((i >= 0 && i < 7) || (i == 19)) ?
		character[i] = *firstEl : character[i] = "*" + *firstEl + space;
	firstEl -= 20;
	for (int i = 0; i < 20; i++) cout << character[i] << endl;
	string emptyStr = character[1];
	string a = character[7], b = character[8], c = character[9], d = character[10], e = character[11], f = character[12],
		g = character[13], h = character[14], ii = character[15], k = character[16], l = character[17], m = character[18];

	character[7] = emptyStr;
	character[8] = emptyStr;
	character[9] = emptyStr;
	character[10] = a;
	character[11] = b;
	character[12] = c;
	character[13] = d;
	character[14] = e;
	character[15] = f;
	character[16] = g;
	character[17] = h;
	character[18] = "*   _\\/_   " + space;
	//Sleep(t);

	for (int q = 18; q >= 14; q--) {
		//system("cls");
		for (int i = 0; i < 20; i++) cout << character[i] << endl;
		character[q - 11] = a;
		character[q - 10] = b;
		character[q - 9] = c;
		character[q - 8] = d;
		character[q - 7] = e;
		character[q - 6] = f;
		character[q - 5] = g;
		character[q - 4] = h;
		character[q - 3] = ii;
		character[q - 2] = k;
		character[q - 1] = l;
		character[q] = "*    ||    " + space;
		if (q != 18) character[q + 1] = emptyStr;
		//Sleep(t);
	}
	//system("cls");
	for (int q = 13; q <= 16; q++) {
		character[q - 11] = emptyStr;
		for (int i = 0; i < 20; i++) cout << character[i] << endl;
		character[q - 9] = a;
		character[q - 8] = b;
		character[q - 7] = c;
		character[q - 6] = d;
		character[q - 5] = e;
		character[q - 4] = f;
		character[q - 3] = g;
		character[q - 2] = h;
		character[q - 1] = ii;
		character[q] = k;
		character[q + 1] = l;
		character[q + 2] = "*    ||    " + space;
		//Sleep(t);
		//system("cls");
	}
	character[6] = emptyStr;
	character[7] = emptyStr;
	character[8] = emptyStr;
	character[9] = emptyStr;
	character[10] = a;
	character[11] = b;
	character[12] = c;
	character[13] = d;
	character[14] = e;
	character[15] = f;
	character[16] = g;
	character[17] = h;
	character[18] = "*   _\\/_   " + space;
	show(ptcharacter, 20, t);
	for (int i = 0; i < 20; i++, firstEl++) ((i >= 0 && i < 7) || (i == 19)) ?
		character[i] = *firstEl : character[i] = "*" + *firstEl + space;
	show(ptcharacter, 20, t);
	return;
}

