#include<iostream>
#include <windows.h>
#include<string>
#define OPEN

using namespace std;

void ShowArray(char pers[][11], int height, int width);
void Dance(char pers[][11], int time);
void SSS(char pers[][11], int time);
void Menu(char pers[][11], int time);
void sweep(string r, string l);
void run();

#ifdef OPEN
int main() {
	const int h = 12, w = 11, time = 750;
	char ram[h][w]
	{

		{"   ()()   "},
		{"   ()()   "},
		{"   ()()   "},
		{"   |..|   "},
		{"  \\|  |/  "},
		{"  /|UU|\\  "},
		{"  --\\/--  "},
		{" /  ||  \\ "},
		{"/   ||   \\"},
		{"    /\\    "},
		{"    ||    "},
		{"   _||_   "},
	};

	Menu(ram, time);




}
void ShowArray(char pers[][11], int height, int width)
{
	cout << string(40, '*') << endl;
	for (size_t i = 0; i < 6; i++) {
		cout << "*" << string(38, ' ') << "*" << endl;
	}

	for (int i = 0; i < height; i++)
	{
		cout << "*";
		for (int j = 0; j < width; j++)
		{
			cout << pers[i][j];
		}
		cout << "                            *";
		cout << endl;
	}
	cout << string(40, '*') << endl;

}

void Dance(char pers[][11], int time) {

	int l = 0;
	while (l != 2) {

		SSS(pers, time);

		pers[6][1] = '-'; pers[7][1] = ' ';
		pers[6][8] = '-'; pers[7][8] = ' ';
		pers[8][0] = ' '; pers[8][9] = ' ';
		pers[7][0] = '/'; pers[7][9] = '\\';

		SSS(pers, time);

		pers[6][1] = ' '; pers[7][0] = ' ';
		pers[7][9] = ' '; pers[6][9] = '-';
		pers[7][1] = '/'; pers[8][0] = '/';

		SSS(pers, time);

		pers[6][9] = ' '; pers[6][1] = '-';
		pers[7][1] = ' '; pers[8][0] = ' ';
		pers[7][0] = '/'; pers[5][9] = '/';

		SSS(pers, time);

		pers[6][1] = ' '; pers[7][0] = ' ';
		pers[7][1] = '/'; pers[8][0] = '/';
		pers[6][8] = ' ';
		pers[5][8] = '/'; pers[5][9] = ' ';
		pers[4][9] = '/';

		SSS(pers, time);

		pers[4][9] = '*'; pers[7][1] = ' ';
		pers[8][0] = ' '; pers[6][1] = '-';
		pers[7][0] = '/';

		SSS(pers, time);

		pers[4][9] = '/'; pers[7][0] = ' ';
		pers[6][0] = '-';

		SSS(pers, time);

		pers[4][9] = '*'; pers[6][0] = ' ';
		pers[5][0] = '\\';

		SSS(pers, time);

		pers[4][9] = '/'; pers[6][1] = ' ';
		pers[5][1] = '\\'; pers[4][0] = '\\';
		pers[5][0] = ' ';

		SSS(pers, time);

		pers[4][0] = '*'; pers[4][9] = '*';

		SSS(pers, time);

		pers[4][0] = ' '; pers[4][9] = ' ';
		pers[5][1] = ' '; pers[5][8] = ' ';
		pers[6][1] = '-'; pers[6][8] = '-';
		pers[5][0] = '*'; pers[5][9] = '*';

		SSS(pers, time);

		pers[5][0] = ' '; pers[5][9] = ' ';
		pers[6][0] = '*'; pers[6][9] = '*';

		SSS(pers, time);

		pers[6][0] = ' '; pers[6][9] = ' ';
		pers[7][0] = '*'; pers[7][9] = '*';

		SSS(pers, time);

		pers[7][0] = ' '; pers[7][9] = ' ';
		pers[6][1] = ' '; pers[6][8] = ' ';
		pers[7][1] = '/'; pers[7][8] = '\\';
		pers[8][0] = '*'; pers[8][9] = '*';

		SSS(pers, time);

		pers[8][0] = '/'; pers[8][9] = '\\';
		l += 1;
	}
}

void SSS(char pers[][11], int time) {
	ShowArray(pers, 12, 11);
	Sleep(time);
	system("cls");
}

void Menu(char pers[][11], int time) {
	cout << "Choose animation:";
	cout << "\nDance:\t\t\t1";
	cout << "\nRun:\t\t\t2";
	cout << "\nSit down and jump:\t3";
	cout << "\nThrow a ball:\t\t4";
	int a;
	cout << "\n\nEnter 5 for exit.\n";
	cin >> a;
	switch (a) {
	case 1:
		system("cls");
		Sleep(500);
		Dance(pers, time);
		Menu(pers, time);
		break;
	case 2:
		run();
		Menu(pers, time);
		break;
	case 3:
		cout << "No\n";
		Menu(pers, time);
		break;
	case 4:
		cout << "No\n";
		Menu(pers, time);
		break;
	case 5:
		break;
	default:
		cout << "Are you stupid?\n";
	}
}

void run() {
	for (int i = 0, j = 28; i <= 28; i++, j--) {
		string right = string(i, ' ');
		string left = string(j, ' ');

		for (int k = 0; k < 3; k++) {
			sweep(right, left);

			switch (k) {
			case 0:
				cout << "*" << right << "   / |    " << left << "*\n";
				cout << "*" << right << " _/  |_   " << left << "*\n";
				cout << string(40, '*') << endl;
				Sleep(100); system("cls");
				break;

			case 1:
				cout << "*" << right << "    ||    " << left << "*\n";
				cout << "*" << right << "   _||_   " << left << "*\n";
				cout << string(40, '*') << endl;
				Sleep(100); system("cls");
				break;
			case 2:
				cout << "*" << right << "    | \\   " << left << "*\n";
				cout << "*" << right << "   _|  \\_ " << left << "*\n";
				cout << string(40, '*') << endl;
				Sleep(100); system("cls");
				break;
			}
		}
	}

	for (int i = 28, j = 0; j <= 28; j++, i--) {
		string right = string(i, ' ');
		string left = string(j, ' ');

		for (int k = 0; k < 3; k++) {
			sweep(right, left);

			switch (k) {
			case 2:
				cout << "*" << right << "   / |    " << left << "*\n";
				cout << "*" << right << " _/  |_   " << left << "*\n";
				cout << string(40, '*') << endl;
				Sleep(100); system("cls");
				break;

			case 1:
				cout << "*" << right << "    ||    " << left << "*\n";
				cout << "*" << right << "   _||_   " << left << "*\n";
				cout << string(40, '*') << endl;
				Sleep(100); system("cls");
				break;
			case 0:
				cout << "*" << right << "    | \\   " << left << "*\n";
				cout << "*" << right << "   _|  \\_ " << left << "*\n";
				cout << string(40, '*') << endl;
				Sleep(100); system("cls");
				break;
			}
		}
	}
}

void sweep(string r, string l) {
	cout << string(40, '*') << endl;
	for (size_t i = 0; i < 6; i++) {
		cout << "*" << string(38, ' ') << "*" << endl;
	}
	cout << "*" << r << "   ()()   " << l << "*" << endl;
	cout << "*" << r << "   ()()   " << l << "*" << endl;
	cout << "*" << r << "   ()()   " << l << "*" << endl;
	cout << "*" << r << "   |..|   " << l << "*" << endl;
	cout << "*" << r << "  \\|  |/  " << l << "*" << endl;
	cout << "*" << r << "  /|UU|\\  " << l << "*" << endl;
	cout << "*" << r << "  --\\/--  " << l << "*" << endl;
	cout << "*" << r << " /  ||  \\ " << l << "*" << endl;
	cout << "*" << r << "/   ||   \\" << l << "*" << endl;
	cout << "*" << r << "    /\\    " << l << "*" << endl;
}
#endif
