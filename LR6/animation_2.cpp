#include <iostream>
//#include <windows.h>
#include <unistd.h>

using namespace std;

void vivod(string a[]);
void dance(string a[]);
string probel(int i);
void run(string a[]);
void rocket(string a[]);
void ball(string a[]);
int menu(int &a);

int main()
{
	string a[20] = {
		"****************************************",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*   ()()                               *",
		"*   ()()                               *",
		"*   ()()                               *",
		"*   |..|                               *",
		"*  \\|  |/                              *",
		"*  /|UU|\\                              *",
		"*  --\\/--                              *",
		"* /  ||  \\                             *",
		"*/   ||   \\                            *",
		"*    /\\                                *",
		"*    ||                                *",
		"*   _||_                               *",
		"****************************************"
	};

	int c = 0;
	while (c != 5) {
		menu(c);
		switch (c) {
		case 1: dance(a); break;
		case 2: run(a); break;
		case 3: rocket(a); break;
		case 4: ball(a); break;
		}
	}

	return 0;
}

void vivod(string a[]) {
	for (int i = 0; i < 20; i++) {
		cout << a[i] << '\n';
	}
	//Sleep(500);
	//system("cls");
}

void dance(string a[]) {

	vivod(a);
	//      "*                                      *"
	a[13] = "* ---\\/---                             *";
	a[14] = "*/   ||   \\                            *";
	a[15] = "*    ||                                *";

	vivod(a);

	a[13] = "*  --\\/----                            *";
	a[14] = "* /  ||                                *";
	a[15] = "*/   ||                                *";

	vivod(a);

	a[12] = "*  /|UU|\\ /                            *";
	a[13] = "* ---\\/---                             *";
	a[14] = "*/   ||                                *";
	a[15] = "*    ||                                *";

	vivod(a);

	a[11] = "*  \\|  |/ /                            *";
	a[12] = "*  /|UU|\\/                             *";
	a[13] = "*  --\\/--                              *";
	a[14] = "* /  ||                                *";
	a[15] = "*/   ||                                *";

	vivod(a);

	a[11] = "*  \\|  |/ *                            *";
	a[12] = "*  /|UU|\\/                             *";
	a[13] = "* ---\\/--                              *";
	a[14] = "*/   ||                                *";
	a[15] = "*    ||                                *";

	vivod(a);

	a[11] = "*  \\|  |/ /                            *";
	a[12] = "*  /|UU|\\/                             *";
	a[13] = "*----\\/--                              *";
	a[14] = "*    ||                                *";

	vivod(a);

	a[11] = "*  \\|  |/ *                            *";
	a[12] = "*\\ /|UU|\\/                             *";
	a[13] = "* ---\\/--                              *";
	a[14] = "*    ||                                *";

	vivod(a);

	a[11] = "*\\ \\|  |/ /                            *";
	a[12] = "* \\/|UU|\\/                             *";
	a[13] = "*  --\\/--                              *";
	a[14] = "*    ||                                *";

	vivod(a);

	a[11] = "** \\|  |/ *                            *";

	vivod(a);

	a[11] = "*  \\|  |/                              *";
	a[12] = "** /|UU|\\ *                            *";
	a[13] = "* ---\\/---                             *";

	vivod(a);

	a[12] = "*  /|UU|\\                              *";
	a[13] = "**---\\/---*                            *";

	vivod(a);

	a[13] = "* ---\\/---                             *";
	a[14] = "**   ||   *                            *";

	vivod(a);

	a[13] = "*  --\\/--                              *";
	a[14] = "* /  ||  \\                             *";
	a[15] = "**   ||   *                            *";

	vivod(a);

	a[13] = "*  --\\/--                              *";
	a[14] = "* /  ||  \\                             *";
	a[15] = "*/   ||   \\                            *";

	vivod(a);
	//      "*                                      *"
	a[13] = "* ---\\/---                             *";
	a[14] = "*/   ||   \\                            *";
	a[15] = "*    ||                                *";

	vivod(a);

	a[13] = "*  --\\/----                            *";
	a[14] = "* /  ||                                *";
	a[15] = "*/   ||                                *";

	vivod(a);

	a[12] = "*  /|UU|\\ /                            *";
	a[13] = "* ---\\/---                             *";
	a[14] = "*/   ||                                *";
	a[15] = "*    ||                                *";

	vivod(a);

	a[11] = "*  \\|  |/ /                            *";
	a[12] = "*  /|UU|\\/                             *";
	a[13] = "*  --\\/--                              *";
	a[14] = "* /  ||                                *";
	a[15] = "*/   ||                                *";

	vivod(a);

	a[11] = "*  \\|  |/ *                            *";
	a[12] = "*  /|UU|\\/                             *";
	a[13] = "* ---\\/--                              *";
	a[14] = "*/   ||                                *";
	a[15] = "*    ||                                *";

	vivod(a);

	a[11] = "*  \\|  |/ /                            *";
	a[12] = "*  /|UU|\\/                             *";
	a[13] = "*----\\/--                              *";
	a[14] = "*    ||                                *";

	vivod(a);

	a[11] = "*  \\|  |/ *                            *";
	a[12] = "*\\ /|UU|\\/                             *";
	a[13] = "* ---\\/--                              *";
	a[14] = "*    ||                                *";

	vivod(a);

	a[11] = "*\\ \\|  |/ /                            *";
	a[12] = "* \\/|UU|\\/                             *";
	a[13] = "*  --\\/--                              *";
	a[14] = "*    ||                                *";

	vivod(a);

	a[11] = "** \\|  |/ *                            *";

	vivod(a);

	a[11] = "*  \\|  |/                              *";
	a[12] = "** /|UU|\\ *                            *";
	a[13] = "* ---\\/---                             *";

	vivod(a);

	a[12] = "*  /|UU|\\                              *";
	a[13] = "**---\\/---*                            *";

	vivod(a);

	a[13] = "* ---\\/---                             *";
	a[14] = "**   ||   *                            *";

	vivod(a);

	a[13] = "*  --\\/--                              *";
	a[14] = "* /  ||  \\                             *";
	a[15] = "**   ||   *                            *";

	vivod(a);

	a[13] = "*  --\\/--                              *";
	a[14] = "* /  ||  \\                             *";
	a[15] = "*/   ||   \\                            *";

}

void run(string a[]) {
	string k, k1;

	vivod(a);

	for (int i = 0; i < 28; i++) {

		k = probel(i);
		k1 = probel(28 - i);

		a[7] = "*" + k + "   ()()   " + k1 + "*";
		a[8] = "*" + k + "   ()()   " + k1 + "*";
		a[9] = "*" + k + "   ()()   " + k1 + "*";
		a[10] = "*" + k + "   |..|   " + k1 + "*";
		a[11] = "*" + k + "  \\|  |/  " + k1 + "*";
		a[12] = "*" + k + "  /|UU|\\  " + k1 + "*";
		a[13] = "*" + k + "  --\\/--  " + k1 + "*";
		a[14] = "*" + k + " /  ||  \\ " + k1 + "*";
		a[15] = "*" + k + "/   ||   \\" + k1 + "*";
		a[16] = "*" + k + "    /\\    " + k1 + "*";
		a[17] = "*" + k + "    |\\    " + k1 + "*";
		a[18] = "*" + k + "   _| \\_  " + k1 + "*";

		vivod(a);

		k = probel(i+1);
		k1 = probel(28 - i-1);

		a[7] = "*" + k + "   ()()   " + k1 + "*";
		a[8] = "*" + k + "   ()()   " + k1 + "*";
		a[9] = "*" + k + "   ()()   " + k1 + "*";
		a[10] = "*" + k + "   |..|   " + k1 + "*";
		a[11] = "*" + k + "  \\|  |/  " + k1 + "*";
		a[12] = "*" + k + "  /|UU|\\  " + k1 + "*";
		a[13] = "*" + k + "  --\\/--  " + k1 + "*";
		a[14] = "*" + k + " /  ||  \\ " + k1 + "*";
		a[15] = "*" + k + "/   ||   \\" + k1 + "*";
		a[16] = "*" + k + "    /\\    " + k1 + "*";
		a[17] = "*" + k + "    /|    " + k1 + "*";
		a[18] = "*" + k + "  _/ |_   " + k1 + "*";

		vivod(a);

		a[7] = "*" + k + "   ()()   " + k1 + "*";
		a[8] = "*" + k + "   ()()   " + k1 + "*";
		a[9] = "*" + k + "   ()()   " + k1 + "*";
		a[10] = "*" + k + "   |..|   " + k1 + "*";
		a[11] = "*" + k + "  \\|  |/  " + k1 + "*";
		a[12] = "*" + k + "  /|UU|\\  " + k1 + "*";
		a[13] = "*" + k + "  --\\/--  " + k1 + "*";
		a[14] = "*" + k + " /  ||  \\ " + k1 + "*";
		a[15] = "*" + k + "/   ||   \\" + k1 + "*";
		a[16] = "*" + k + "    /\\    " + k1 + "*";
		a[17] = "*" + k + "    ||    " + k1 + "*";
		a[18] = "*" + k + "   _||_   " + k1 + "*";

		vivod(a);

		a[7] = "*" + k + "   ()()   " + k1 + "*";
		a[8] = "*" + k + "   ()()   " + k1 + "*";
		a[9] = "*" + k + "   ()()   " + k1 + "*";
		a[10] = "*" + k + "   |..|   " + k1 + "*";
		a[11] = "*" + k + "  \\|  |/  " + k1 + "*";
		a[12] = "*" + k + "  /|UU|\\  " + k1 + "*";
		a[13] = "*" + k + "  --\\/--  " + k1 + "*";
		a[14] = "*" + k + " /  ||  \\ " + k1 + "*";
		a[15] = "*" + k + "/   ||   \\" + k1 + "*";
		a[16] = "*" + k + "    /\\    " + k1 + "*";
		a[17] = "*" + k + "    |\\    " + k1 + "*";
		a[18] = "*" + k + "   _| \\_  " + k1 + "*";

		vivod(a);

	}

	k = probel(27);
	k1 = probel(1);
	a[7] = "*" + k + "   ()()   " + k1 + "*";
	a[8] = "*" + k + "   ()()   " + k1 + "*";
	a[9] = "*" + k + "   ()()   " + k1 + "*";
	a[10] = "*" + k + "   |..|   " + k1 + "*";
	a[11] = "*" + k + "  \\|  |/  " + k1 + "*";
	a[12] = "*" + k + "  /|UU|\\  " + k1 + "*";
	a[13] = "*" + k + "  --\\/--  " + k1 + "*";
	a[14] = "*" + k + " /  ||  \\ " + k1 + "*";
	a[15] = "*" + k + "/   ||   \\" + k1 + "*";
	a[16] = "*" + k + "    /\\    " + k1 + "*";
	a[17] = "*" + k + "    /|    " + k1 + "*";
	a[18] = "*" + k + "  _/ |_   " + k1 + "*";

	vivod(a);

	a[7] = "*" + k + "   ()()   " + k1 + "*";
	a[8] = "*" + k + "   ()()   " + k1 + "*";
	a[9] = "*" + k + "   ()()   " + k1 + "*";
	a[10] = "*" + k + "   |..|   " + k1 + "*";
	a[11] = "*" + k + "  \\|  |/  " + k1 + "*";
	a[12] = "*" + k + "  /|UU|\\  " + k1 + "*";
	a[13] = "*" + k + "  --\\/--  " + k1 + "*";
	a[14] = "*" + k + " /  ||  \\ " + k1 + "*";
	a[15] = "*" + k + "/   ||   \\" + k1 + "*";
	a[16] = "*" + k + "    /\\    " + k1 + "*";
	a[17] = "*" + k + "    ||    " + k1 + "*";
	a[18] = "*" + k + "   _||_   " + k1 + "*";

	vivod(a);

	for (int i = 26; i > 0; i--) {

		k = probel(i);
		k1 = probel(28 - i);

		a[7] = "*" + k + "   ()()   " + k1 + "*";
		a[8] = "*" + k + "   ()()   " + k1 + "*";
		a[9] = "*" + k + "   ()()   " + k1 + "*";
		a[10] = "*" + k + "   |..|   " + k1 + "*";
		a[11] = "*" + k + "  \\|  |/  " + k1 + "*";
		a[12] = "*" + k + "  /|UU|\\  " + k1 + "*";
		a[13] = "*" + k + "  --\\/--  " + k1 + "*";
		a[14] = "*" + k + " /  ||  \\ " + k1 + "*";
		a[15] = "*" + k + "/   ||   \\" + k1 + "*";
		a[16] = "*" + k + "    /\\    " + k1 + "*";
		a[17] = "*" + k + "    |\\    " + k1 + "*";
		a[18] = "*" + k + "   _| \\_  " + k1 + "*";

		vivod(a);

		k = probel(i - 1);
		k1 = probel(28 - i + 1);

		a[7] = "*" + k + "   ()()   " + k1 + "*";
		a[8] = "*" + k + "   ()()   " + k1 + "*";
		a[9] = "*" + k + "   ()()   " + k1 + "*";
		a[10] = "*" + k + "   |..|   " + k1 + "*";
		a[11] = "*" + k + "  \\|  |/  " + k1 + "*";
		a[12] = "*" + k + "  /|UU|\\  " + k1 + "*";
		a[13] = "*" + k + "  --\\/--  " + k1 + "*";
		a[14] = "*" + k + " /  ||  \\ " + k1 + "*";
		a[15] = "*" + k + "/   ||   \\" + k1 + "*";
		a[16] = "*" + k + "    /\\    " + k1 + "*";
		a[17] = "*" + k + "    /|    " + k1 + "*";
		a[18] = "*" + k + "  _/ |_   " + k1 + "*";

		vivod(a);

		a[7] = "*" + k + "   ()()   " + k1 + "*";
		a[8] = "*" + k + "   ()()   " + k1 + "*";
		a[9] = "*" + k + "   ()()   " + k1 + "*";
		a[10] = "*" + k + "   |..|   " + k1 + "*";
		a[11] = "*" + k + "  \\|  |/  " + k1 + "*";
		a[12] = "*" + k + "  /|UU|\\  " + k1 + "*";
		a[13] = "*" + k + "  --\\/--  " + k1 + "*";
		a[14] = "*" + k + " /  ||  \\ " + k1 + "*";
		a[15] = "*" + k + "/   ||   \\" + k1 + "*";
		a[16] = "*" + k + "    /\\    " + k1 + "*";
		a[17] = "*" + k + "    ||    " + k1 + "*";
		a[18] = "*" + k + "   _||_   " + k1 + "*";

		vivod(a);
	}

}

void rocket(string a[]) {

	vivod(a);

	for (int i = 17; i >= 7; i--) {
		a[i] = a[i - 1];
	}
	a[18] = "*   _\\/_                               *";

	vivod(a);

	for (int i = 7; i < 17; i++) {
		a[i] = a[i + 1];
	}
	a[17] = "*    ||                                *";
	a[18] = "*    ||                                *";

	vivod(a);

	int i = 0;

	for (i = 6; i < 18; i++) {
		a[i] = a[i + 1];
	}
	a[i] = "*                                      *";

	vivod(a);

	for (i = 5; i < 17; i++) {
		a[i] = a[i + 1];
	}
	a[i] = "*                                      *";

	vivod(a);

	for (i = 4; i < 16; i++) {
		a[i] = a[i + 1];
	}
	a[i] = "*                                      *";

	vivod(a);

	for (i = 3; i < 15; i++) {
		a[i] = a[i + 1];
	}
	a[i] = "*                                      *";

	vivod(a);

	for (i = 15; i > 3; i--) {
		a[i] = a[i - 1];
	}
	a[i] = "*                                      *";

	vivod(a);

	for (i = 16; i > 4; i--) {
		a[i] = a[i - 1];
	}
	a[i] = "*                                      *";

	vivod(a);

	for (i = 17; i > 5; i--) {
		a[i] = a[i - 1];
	}
	a[i] = "*                                      *";

	vivod(a);

	for (i = 18; i > 6; i--) {
		a[i] = a[i - 1];
	}
	a[6] = "*                                      *";
	a[i] = "*                                      *";

	vivod(a);

	for (int i = 18; i > 7; i--) {
		a[i] = a[i - 1];
	}
	a[7] = "*                                      *";
	a[18] = "*   _\\/_                               *";

	vivod(a);

	for (int i = 7; i < 17; i++) {
		a[i] = a[i + 1];
	}
	a[6] = "*                                      *";
	a[17] = "*    ||                                *";
	a[18] = "*   _||_                               *";

	vivod(a);
}

void ball(string a[]) {

	a[15][10] = '-';
	a[14][10] = 'o';

	vivod(a);

	a[15][10] = ' ';
	a[14][10] = '-';
	a[13][10] = 'o';

	vivod(a);

	a[14][10] = ' ';
	a[14][9] = ' ';
	a[13][10] = '-';
	a[13][9] = '-';
	a[12][10] = 'o';

	vivod(a);

	a[13][10] = '/';
	a[12][10] = ' ';
	a[11][10] = 'o';

	vivod(a);

	a[13][10] = '-';
	a[11][10] = ' ';
	a[10][10] = 'o';

	vivod(a);

	a[14][10] = '\\';
	a[13][10] = ' ';
	a[10][10] = ' ';
	a[9][10] = 'o';

	vivod(a);

	a[14][10] = ' ';
	a[14][9] = ' ';
	a[9][10] = ' ';
	a[13][9] = ' ';
	a[8][10] = 'o';
	a[15][10] = '\\';
	a[14][9] = '\\';

	vivod(a);

	a[8][10] = ' ';
	a[7][10] = 'o';

	vivod(a);

	a[6][9] = 'o';
	a[7][10] = ' ';

	vivod(a);

	a[5][8] = 'o';
	a[6][9] = ' ';

	vivod(a);

	a[5][8] = ' ';
	a[4][7] = 'o';

	vivod(a);

	a[4][7] = ' ';
	a[3][6] = 'o';

	vivod(a);

	a[3][5] = 'o';
	a[3][6] = ' ';

	vivod(a);

	a[3][5] = ' ';
	a[4][4] = 'o';

	vivod(a);

	a[5][3] = 'o';
	a[4][4] = ' ';

	vivod(a);

	a[6][2] = 'o';
	a[5][3] = ' ';

	vivod(a);

	a[7][1] = 'o';
	a[6][2] = ' ';

	vivod(a);

	a[8][1] = 'o';
	a[7][1] = ' ';

	vivod(a);

	a[9][1] = 'o';
	a[8][1] = ' ';
	a[15][1] = ' ';
	a[14][2] = ' ';
	a[13][2] = '-';
	a[14][1] = '/';

	vivod(a);

	a[10][1] = 'o';
	a[9][1] = ' ';
	a[14][1] = ' ';
	a[13][1] = '-';

	vivod(a);

	a[11][1] = 'o';
	a[10][1] = ' ';
	a[13][1] = '\\';

	vivod(a);

	a[12][1] = 'o';
	a[11][1] = ' ';
	a[13][1] = '-';

	vivod(a);

	a[13][1] = 'o';
	a[12][1] = ' ';
	a[13][2] = ' ';
	a[14][1] = '-';
	a[14][2] = '/';

	vivod(a);

	a[14][1] = 'o';
	a[13][1] = ' ';
	a[15][1] = '-';

	vivod(a);

	a[14][1] = ' ';
	a[15][1] = '/';

	vivod(a);
}

string probel(int i) {
	string d = "";
	for (int j = 0; j < i; j++) {
		d += " ";
	}
	return d;
}

int menu(int &a) {
	cout << "Choose animation:" << '\n';
	cout << "Dance: \t\t\t1" << '\n';
	cout << "Run: \t\t\t2" << '\n';
	cout << "Sit down and jump: \t3" << '\n';
	cout << "Throw a ball: \t\t4" << '\n' << '\n';
	cout << "Enter 5 for exit." << '\n';
	cin >> a;
	system("cls");
	return a;
}