#include<iostream>
#include <unistd.h>
#include<string>
using namespace std;

void Clear(char anim[][11], int t);
void Menu();
void Dance(char anim[][11], int t);
void RightLeft(string r, string l);
void run();
void down(int t, int d);
void jump(int j);
void coin(int t);
void Animation(char anim[][11], int heihgt, int width);
void Animation(char anim[][11], int height, int width, int l);
void Clear(char pers[][11], int t);

int main() {
	const int h = 12, w = 11, t = 750;
	char anim[h][w]{
		{"    /\\    "},
		{"   |oo|   "},
		{"  (|..|)  "},
		{"   |--|   "},
		{"   \\__/   "},
		{"    ||    "},
		{"  -| *|-  "},
		{" / |  | \\ "},
		{"/   \\/   \\"},
		{"    /\\    "},
		{"    ||    "},
		{"   _||_   "}
	};
	Menu();
	int Choose = 0;
	while (Choose != 5) {
		cin >> Choose;
		switch (Choose) {
		case 1:
			//system("cls");
			Dance(anim, t);
			Menu();
			break;
		case 2:
			//system("cls");
			run();
			Menu();
			break;
		case 3:
			//system("cls");
			down(t, 1);
			jump(1);
			jump(2);
			down(t, 2);
			Menu();
			break;
		case 4:
			//system("cls");
			coin(750);
			Menu();
			break;
		case 5:
			break;
		}
	}
}

void Animation(char pers[][11], int height, int width) {
	cout << string(40, '*') << endl;
	for (size_t i = 0; i < 6; i++) {
		cout << "*" << string(38, ' ') << "*" << endl;
	}

	for (int i = 0; i < height; i++) {
		cout << "*";
		for (int j = 0; j < width - 1; j++) {
			cout << pers[i][j];
		}
		cout << "                            *";
		cout << endl;
	}
	cout << string(40, '*') << endl;
}

void Animation(char pers[][11], int height, int width, int l) {
	cout << string(40, '*') << endl;

	for (size_t i = 0; i < 2; i++) {
		cout << "*" << string(38, ' ') << "*" << endl;
	}

	for (int i = 0; i < height; i++) {
		cout << "*";

		for (int j = 0; j < width - 1; j++) {
			cout << pers[i][j];
		}

		cout << "                            *";
		cout << endl;
	}

	cout << string(40, '*') << endl;
}

void Dance(char anim[][11], int t) {
	int c = 0;
	Clear(anim, t);
	while (c != 2) {
		anim[6][1] = '-'; anim[7][1] = ' ';
		anim[6][8] = '-'; anim[7][8] = ' ';
		anim[8][0] = ' '; anim[8][9] = ' ';
		anim[7][0] = '/'; anim[7][9] = '\\';

		Clear(anim, t);

		anim[6][1] = ' '; anim[7][0] = ' ';
		anim[7][9] = ' '; anim[6][9] = '-';
		anim[7][1] = '/'; anim[8][0] = '/';

		Clear(anim, t);

		anim[6][9] = ' '; anim[6][1] = '-';
		anim[7][1] = ' '; anim[8][0] = ' ';
		anim[7][0] = '/'; anim[5][9] = '/';

		Clear(anim, t);

		anim[6][1] = ' '; anim[7][0] = ' ';
		anim[7][1] = '/'; anim[8][0] = '/';
		anim[6][8] = ' '; anim[5][10] = ' ';
		anim[5][8] = '/'; anim[5][9] = ' ';
		anim[4][9] = '/';

		Clear(anim, t);

		anim[4][9] = '*'; anim[7][1] = ' ';
		anim[8][0] = ' '; anim[6][1] = '-';
		anim[7][0] = '/';

		Clear(anim, t);

		anim[4][9] = '/'; anim[7][0] = ' ';
		anim[6][0] = '-';

		Clear(anim, t);

		anim[4][9] = '*'; anim[6][0] = ' ';
		anim[5][0] = '\\';

		Clear(anim, t);

		anim[4][9] = '/'; anim[6][1] = ' ';
		anim[5][1] = '\\'; anim[4][0] = '\\';
		anim[5][0] = ' ';

		Clear(anim, t);

		anim[4][0] = '*'; anim[4][9] = '*';

		Clear(anim, t);

		anim[4][0] = ' '; anim[4][9] = ' ';
		anim[5][1] = ' '; anim[5][8] = ' ';
		anim[6][1] = '-'; anim[6][8] = '-';
		anim[5][0] = '*'; anim[5][9] = '*';

		Clear(anim, t);

		anim[5][0] = ' '; anim[5][9] = ' ';
		anim[6][0] = '*'; anim[6][9] = '*';

		Clear(anim, t);

		anim[6][0] = ' '; anim[6][9] = ' ';
		anim[7][0] = '*'; anim[7][9] = '*';

		Clear(anim, t);

		anim[7][0] = ' '; anim[7][9] = ' ';
		anim[6][1] = ' '; anim[6][8] = ' ';
		anim[7][1] = '/'; anim[7][8] = '\\';
		anim[8][0] = '*'; anim[8][9] = '*';

		Clear(anim, t);

		anim[8][0] = '/'; anim[8][9] = '\\';

		Clear(anim, t);
		c++;
	}
}

void Clear(char anim[][11], int t, int c) {
	Animation(anim, 16, 11, 1);
	//Sleep(t);
	//system("cls");
}
void Clear(char anim[][11], int t) {
	Animation(anim, 12, 11);
	//Sleep(t);
	//system("cls");
}

void Menu() {
	cout << "Choose animation:" << endl;
	cout << "Dance: \t\t\t1" << endl;
	cout << "Run: \t\t\t2" << endl;
	cout << "Sit down and jump: \t3" << endl;
	cout << "Throw a ball: \t\t4" << endl << endl;
	cout << "Enter 5 for exit." << endl;
}

void run() {
	for (int i = 0, j = 28; i <= 28; i++, j--) {
		string right = string(i, ' ');
		string left = string(j, ' ');
		int k = 0;

		if (i == 0) {
			k = 1;
		}



		for (; k < 3; k++) {
			if (i == 28 and k == 2) {
				break;
			}

			RightLeft(right, left);

			switch (k) {
			case 0:
				cout << "*" << right << "   / |    " << left << "*\n";
				cout << "*" << right << " _/  |_   " << left << "*\n";
				cout << string(40, '*') << endl;
				//Sleep(100);
				//system("cls");
				break;

			case 1:
				cout << "*" << right << "    ||    " << left << "*\n";
				cout << "*" << right << "   _||_   " << left << "*\n";
				cout << string(40, '*') << endl;
				//Sleep(100);
				//system("cls");
				break;
			case 2:
				cout << "*" << right << "    | \\   " << left << "*\n";
				cout << "*" << right << "   _|  \\_ " << left << "*\n";
				cout << string(40, '*') << endl;
				//Sleep(100);
				//system("cls");
				break;
			}
		}
	}

	for (int i = 28, j = 0; j <= 28; j++, i--) {
		string right = string(i, ' ');
		string left = string(j, ' ');



		for (int k = 0; k < 3; k++) {

			if (j == 0 and !(k == 2)) {
				continue;
			}

			if (j == 28 and k == 2) {
				break;
			}

			RightLeft(right, left);

			switch (k) {
			case 2:
				cout << "*" << right << "   / |    " << left << "*\n";
				cout << "*" << right << " _/  |_   " << left << "*\n";
				cout << string(40, '*') << endl;
				//Sleep(100);
				//system("cls");
				break;

			case 1:
				cout << "*" << right << "    ||    " << left << "*\n";
				cout << "*" << right << "   _||_   " << left << "*\n";
				cout << string(40, '*') << endl;
				//Sleep(100);
				//system("cls");
				break;
			case 0:
				cout << "*" << right << "    | \\   " << left << "*\n";
				cout << "*" << right << "   _|  \\_ " << left << "*\n";
				cout << string(40, '*') << endl;
				//Sleep(100);
				//system("cls");
				break;
			}
		}
	}
}

void RightLeft(string r, string l) {
	cout << string(40, '*') << endl;
	for (size_t i = 0; i < 6; i++) {
		cout << "*" << string(38, ' ') << "*" << endl;
	}
	cout << "*" << r << "    /\\    " << l << "*" << endl;
	cout << "*" << r << "   |oo|   " << l << "*" << endl;
	cout << "*" << r << "  (|..|)  " << l << "*" << endl;
	cout << "*" << r << "   |--|   " << l << "*" << endl;
	cout << "*" << r << "   \\__/   " << l << "*" << endl;
	cout << "*" << r << "    ||    " << l << "*" << endl;
	cout << "*" << r << "  -| *|-  " << l << "*" << endl;
	cout << "*" << r << " / |  | \\ " << l << "*" << endl;
	cout << "*" << r << "/   \\/   \\" << l << "*" << endl;
	cout << "*" << r << "    /\\    " << l << "*" << endl;
}

void down(int t, int d)
{
	if (d == 1) {
		for (int i = 0; i < 2; i++) {
			cout << string(40, '*') << endl;

			for (size_t j = 0; j < 6; j++) {
				cout << "*" << string(38, ' ') << "*" << endl;
			}

			switch (i) {
			case 0:
				cout << "*" << "    /\\    " << "                            *" << endl;
				cout << "*" << "   |oo|   " << "                            *" << endl;
				cout << "*" << "  (|..|)  " << "                            *" << endl;
				cout << "*" << "   |--|   " << "                            *" << endl;
				cout << "*" << "   \\__/   " << "                            *" << endl;
				cout << "*" << "    ||    " << "                            *" << endl;
				cout << "*" << "  -| *|-  " << "                            *" << endl;
				cout << "*" << " / |  | \\ " << "                            *" << endl;
				cout << "*" << "/   \\/   \\" << "                            *" << endl;
				cout << "*" << "    /\\    " << "                            *" << endl;
				cout << "*" << "    ||    " << "                            *" << endl;
				cout << "*" << "   _||_   " << "                            *" << endl;

				break;
			case 1:
				cout << "*" << "          " << "                            *" << endl;
				cout << "*" << "    /\\    " << "                            *" << endl;
				cout << "*" << "   |oo|   " << "                            *" << endl;
				cout << "*" << "  (|..|)  " << "                            *" << endl;
				cout << "*" << "   |--|   " << "                            *" << endl;
				cout << "*" << "   \\__/   " << "                            *" << endl;
				cout << "*" << "    ||    " << "                            *" << endl;
				cout << "*" << "  -| *|-  " << "                            *" << endl;
				cout << "*" << " / |  | \\ " << "                            *" << endl;
				cout << "*" << "/   \\/   \\" << "                            *" << endl;
				cout << "*" << "    /\\    " << "                            *" << endl;
				cout << "*" << "   _\\/_   " << "                            *" << endl;

				break;
			}

			cout << string(40, '*') << endl;

			//Sleep(t);
			//system("cls");
		}
	}
	else {
		for (int i = 0; i < 2; i++) {
			cout << string(40, '*') << endl;

			for (size_t j = 0; j < 6; j++) {
				cout << "*" << string(38, ' ') << "*" << endl;
			}

			switch (i) {
			case 1:
				cout << "*" << "    /\\    " << "                            *" << endl;
				cout << "*" << "   |oo|   " << "                            *" << endl;
				cout << "*" << "  (|..|)  " << "                            *" << endl;
				cout << "*" << "   |--|   " << "                            *" << endl;
				cout << "*" << "   \\__/   " << "                            *" << endl;
				cout << "*" << "    ||    " << "                            *" << endl;
				cout << "*" << "  -| *|-  " << "                            *" << endl;
				cout << "*" << " / |  | \\ " << "                            *" << endl;
				cout << "*" << "/   \\/   \\" << "                            *" << endl;
				cout << "*" << "    /\\    " << "                            *" << endl;
				cout << "*" << "    ||    " << "                            *" << endl;
				cout << "*" << "   _||_   " << "                            *" << endl;

				break;
			case 0:
				cout << "*" << "          " << "                            *" << endl;
				cout << "*" << "    /\\    " << "                            *" << endl;
				cout << "*" << "   |oo|   " << "                            *" << endl;
				cout << "*" << "  (|..|)  " << "                            *" << endl;
				cout << "*" << "   |--|   " << "                            *" << endl;
				cout << "*" << "   \\__/   " << "                            *" << endl;
				cout << "*" << "    ||    " << "                            *" << endl;
				cout << "*" << "  -| *|-  " << "                            *" << endl;
				cout << "*" << " / |  | \\ " << "                            *" << endl;
				cout << "*" << "/   \\/   \\" << "                            *" << endl;
				cout << "*" << "    /\\    " << "                            *" << endl;
				cout << "*" << "   _\\/_   " << "                            *" << endl;

				break;
			}

			cout << string(40, '*') << endl;

			//Sleep(t);
			//system("cls");
		}
	}
}

void jump(int j) {
	if (j == 1) {
		int l = 6, ll = 0;

		for (int i = 0; i < 5; i++) {
			cout << string(40, '*') << endl;

			for (int j = 0; j < l; j++) {
				cout << "*                                      *" << endl;
			}

			cout << "*" << "    /\\    " << "                            *" << endl;
			cout << "*" << "   |oo|   " << "                            *" << endl;
			cout << "*" << "  (|..|)  " << "                            *" << endl;
			cout << "*" << "   |--|   " << "                            *" << endl;
			cout << "*" << "   \\__/   " << "                            *" << endl;
			cout << "*" << "    ||    " << "                            *" << endl;
			cout << "*" << "  -| *|-  " << "                            *" << endl;
			cout << "*" << " / |  | \\ " << "                            *" << endl;
			cout << "*" << "/   \\/   \\" << "                            *" << endl;
			cout << "*" << "    /\\    " << "                            *" << endl;
			cout << "*" << "    ||    " << "                            *" << endl;
			cout << "*" << "    ||    " << "                            *" << endl;

			for (int k = 0; k < ll; k++) {
				cout << "*                                      *" << endl;
			}

			--l;
			++ll;
			cout << string(40, '*') << endl;

			//Sleep(700);
			//system("cls");
		}
	}
	else {
		int l = 3, ll = 3;
		for (int i = 0; i < 4; i++) {
			cout << string(40, '*') << endl;

			for (int j = 0; j < l; j++) {
				cout << "*                                      *" << endl;
			}

			cout << "*" << "    /\\    " << "                            *" << endl;
			cout << "*" << "   |oo|   " << "                            *" << endl;
			cout << "*" << "  (|..|)  " << "                            *" << endl;
			cout << "*" << "   |--|   " << "                            *" << endl;
			cout << "*" << "   \\__/   " << "                            *" << endl;
			cout << "*" << "    ||    " << "                            *" << endl;
			cout << "*" << "  -| *|-  " << "                            *" << endl;
			cout << "*" << " / |  | \\ " << "                            *" << endl;
			cout << "*" << "/   \\/   \\" << "                            *" << endl;
			cout << "*" << "    /\\    " << "                            *" << endl;
			cout << "*" << "    ||    " << "                            *" << endl;
			cout << "*" << "    ||    " << "                            *" << endl;

			for (int k = 0; k < ll; k++) {
				cout << "*                                      *" << endl;
			}

			++l;
			--ll;
			cout << string(40, '*') << endl;

			//Sleep(700);
			//system("cls");
		}
	}
}

void coin(int t) {
	const int h = 16, w = 11;
	char ram1[h][w]{
		{"          "},
		{"          "},
		{"          "},
		{"          "},
		{"    /\\    "},
		{"   |oo|   "},
		{"  (|..|)  "},
		{"   |--|   "},
		{"   \\__/   "},
		{"    ||    "},
		{"  -| *|-  "},
		{" / |  | \\ "},
		{"/   \\/   \\"},
		{"    /\\    "},
		{"    ||    "},
		{"   _||_   "}
	};

	Clear(ram1, t, 1);

	ram1[12][9] = '-'; ram1[11][9] = 'o';

	Clear(ram1, t, 1);

	ram1[12][9] = ' '; ram1[11][9] = '-'; ram1[10][9] = 'o';

	Clear(ram1, t, 1);

	ram1[11][8] = ' ';	ram1[11][9] = ' ';  ram1[9][9] = 'o';
	ram1[10][8] = '-';	ram1[10][9] = '-';

	Clear(ram1, t, 1);

	ram1[10][9] = '/'; ram1[9][9] = ' '; ram1[8][9] = 'o';

	Clear(ram1, t, 1);

	ram1[10][9] = '-'; ram1[8][9] = ' '; ram1[7][9] = 'o';

	Clear(ram1, t, 1);

	ram1[10][9] = ' '; ram1[7][9] = ' '; ram1[11][9] = '\\';
	ram1[6][9] = 'o';

	Clear(ram1, t, 1);

	ram1[6][9] = ' ';  ram1[5][9] = 'o'; ram1[11][9] = ' ';
	ram1[10][8] = ' '; ram1[11][8] = '\\'; ram1[12][9] = '\\';

	Clear(ram1, t, 1);

	ram1[5][9] = ' ';  ram1[4][9] = 'o';

	Clear(ram1, t, 1);

	ram1[4][9] = ' '; ram1[3][8] = 'o';

	Clear(ram1, t, 1);

	ram1[3][8] = ' '; ram1[2][7] = 'o';

	Clear(ram1, t, 1);

	ram1[2][7] = ' '; ram1[1][6] = 'o';

	Clear(ram1, t, 1);

	ram1[1][6] = ' '; ram1[0][5] = 'o';

	Clear(ram1, t, 1);

	ram1[0][5] = ' '; ram1[0][4] = 'o';

	Clear(ram1, t, 1);

	ram1[0][4] = ' '; ram1[1][3] = 'o';

	Clear(ram1, t, 1);

	ram1[1][3] = ' '; ram1[2][2] = 'o';

	Clear(ram1, t, 1);

	ram1[2][2] = ' '; ram1[3][1] = 'o';

	Clear(ram1, t, 1);

	ram1[3][1] = ' '; ram1[4][0] = 'o';

	Clear(ram1, t, 1);

	ram1[4][0] = ' '; ram1[5][0] = 'o';

	Clear(ram1, t, 1);

	ram1[5][0] = ' '; ram1[6][0] = 'o';
	ram1[11][1] = ' '; ram1[12][0] = ' ';
	ram1[10][1] = '-'; ram1[11][0] = '/';

	Clear(ram1, t, 1);

	ram1[6][0] = ' '; ram1[7][0] = 'o';
	ram1[11][0] = ' '; ram1[10][0] = '-';

	Clear(ram1, t, 1);

	ram1[7][0] = ' '; ram1[8][0] = 'o';
	ram1[10][0] = '\\';

	Clear(ram1, t, 1);

	ram1[8][0] = ' '; ram1[9][0] = 'o';
	ram1[10][0] = '-';

	Clear(ram1, t, 1);

	ram1[9][0] = ' '; ram1[10][0] = 'o';
	ram1[11][0] = '-'; ram1[11][1] = '/';
	ram1[10][1] = ' ';

	Clear(ram1, t, 1);

	ram1[10][0] = ' '; ram1[11][0] = 'o';
	ram1[12][0] = '-';

	Clear(ram1, t, 1);

	ram1[11][0] = ' '; ram1[12][0] = '/';

	Clear(ram1, t, 1);
}