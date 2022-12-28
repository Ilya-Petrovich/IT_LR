#include<iostream>
//#include <windows.h>
#include<string>
#define OPEN

using namespace std;

void ShowArray(char pers[][11], int height, int width);
void ShowArray(char pers[][11], int height, int width, int l);
void Dance(char pers[][11], int time);
void SSS(char pers[][11], int time);
void Menu();
void sweep(string r, string l);
void run();
void down(int time, int l);
void fly(int p);
void monetka(int time);

#ifdef OPEN
int main() {
	const int h = 12, w = 11, time = 500;
	char pers[h][w] {
		{"   _[]_   "},
		{"   |~~|   "},
		{"   |oq|   "},
		{"  (|<>|)  "},
		{"   \\--/   "},
		{"   _><_   "},
		{"  -\\. /-  "},
		{" / |. | \\ "},
		{"/  |. |  \\"},
		{"   |__|   "},
		{"    ||    "},
		{"   _||_   "}
	};

	Menu();
	int a = 0;
	while (a != 5) {
		cin >> a;
		switch (a) {
		case 1:
			//system("cls");
			Dance(pers, time);
			Menu();
			break;
		case 2:
			//system("cls");
			run();
			Menu();
			break;
		case 3:
			//system("cls");
			down(time, 1);
			fly(1);
			fly(2);
			down(time, 2);
			Menu();
			break;
		case 4:
			//system("cls");
			monetka(750);
			Menu();
			break;
		case 5:
			break;
		}
	}
}



void ShowArray(char pers[][11], int height, int width) {
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

void ShowArray(char pers[][11], int height, int width, int l) {
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

void Dance(char pers[][11], int time) {

	int l = 0;

	SSS(pers, time);

	while (l != 2) {

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

		SSS(pers, time);
		l += 1;
	}
}

void SSS(char pers[][11], int time, int l) {
	ShowArray(pers, 16, 11, 1);
	//Sleep(time);
	//system("cls");
}

void SSS(char pers[][11], int time) {
	ShowArray(pers, 12, 11);
	//Sleep(time);
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

//int c = 0;

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

			sweep(right, left);

			switch (k) {
			case 0:
				cout << "*" << right << "   / |    " << left << "*\n";
				cout << "*" << right << " _/  |_   " << left << "*\n";
				cout << string(40, '*') << endl;
				//Sleep(100); system("cls");
				break;

			case 1:
				cout << "*" << right << "    ||    " << left << "*\n";
				cout << "*" << right << "   _||_   " << left << "*\n";
				cout << string(40, '*') << endl;
				//Sleep(100); system("cls");
				break;
			case 2:
				cout << "*" << right << "    | \\   " << left << "*\n";
				cout << "*" << right << "   _|  \\_ " << left << "*\n";
				cout << string(40, '*') << endl;
				//Sleep(100); system("cls");
				break;
			}
		}
	}

	for (int i = 28, j = 0; j <= 28; j++, i--) {
		string right = string(i, ' ');
		string left = string(j, ' ');



		for (int k = 0; k < 3; k++) {
			//c++;
			if (j == 0 and !(k == 2)) {
				continue;
			}

			if (j==28 and k == 2) {
				break;
			}

			sweep(right, left);

			switch (k) {
			case 2:
				cout << "*" << right << "   / |    " << left << "*\n";
				cout << "*" << right << " _/  |_   " << left << "*\n";
				cout << string(40, '*') << endl;
				//Sleep(100); system("cls");
				break;

			case 1:
				cout << "*" << right << "    ||    " << left << "*\n";
				cout << "*" << right << "   _||_   " << left << "*\n";
				cout << string(40, '*') << endl;
				//Sleep(100); system("cls");
				break;
			case 0:
				cout << "*" << right << "    | \\   " << left << "*\n";
				cout << "*" << right << "   _|  \\_ " << left << "*\n";
				cout << string(40, '*') << endl;
				//Sleep(100); system("cls");
				break;
			}
		}

		/*sweep(string(0, ' '), string(28, ' '));
		cout << "*" << "    ||    " << string(28, ' ') << "*\n";
		cout << "*" << "   _||_   " << string(28, ' ') << "*\n";
		cout << string(40, '*') << endl;*/
		//cout << c + 1 << endl;
	}
}

void sweep(string r, string l) {
	cout << string(40, '*') << endl;
	for (size_t i = 0; i < 6; i++) {
		cout << "*" << string(38, ' ') << "*" << endl;
	}
	cout << "*" << r << "   _[]_   " << l << "*" << endl;
	cout << "*" << r << "   |~~|   " << l << "*" << endl;
	cout << "*" << r << "   |oq|   " << l << "*" << endl;
	cout << "*" << r << "  (|<>|)  " << l << "*" << endl;
	cout << "*" << r << "   \\--/   " << l << "*" << endl;
	cout << "*" << r << "   _><_   " << l << "*" << endl;
	cout << "*" << r << "  -\\. /-  " << l << "*" << endl;
	cout << "*" << r << " / |. | \\ " << l << "*" << endl;
	cout << "*" << r << "/  |. |  \\" << l << "*" << endl;
	cout << "*" << r << "   |__|   " << l << "*" << endl;
}

void down(int time, int l)
{
	if (l == 1) {
		for (int i = 0; i < 2; i++) {
			cout << string(40, '*') << endl;

			for (size_t j = 0; j < 6; j++) {
				cout << "*" << string(38, ' ') << "*" << endl;
			}

			switch (i) {
			case 0:
				cout << "*" << "   _[]_   " << "                            *" << endl;
				cout << "*" << "   |~~|   " << "                            *" << endl;
				cout << "*" << "   |oq|   " << "                            *" << endl;
				cout << "*" << "  (|<>|)  " << "                            *" << endl;
				cout << "*" << "   \\--/   " << "                            *" << endl;
				cout << "*" << "   _><_   " << "                            *" << endl;
				cout << "*" << "  -\\. /-  " << "                            *" << endl;
				cout << "*" << " / |. | \\ " << "                            *" << endl;
				cout << "*" << "/  |. |  \\" << "                            *" << endl;
				cout << "*" << "   |__|   " << "                            *" << endl;
				cout << "*" << "    ||    " << "                            *" << endl;
				cout << "*" << "   _||_   " << "                            *" << endl;

				break;
			case 1:
				cout << "*" << "          " << "                            *" << endl;
				cout << "*" << "   _[]_   " << "                            *" << endl;
				cout << "*" << "   |~~|   " << "                            *" << endl;
				cout << "*" << "   |oq|   " << "                            *" << endl;
				cout << "*" << "  (|<>|)  " << "                            *" << endl;
				cout << "*" << "   \\--/   " << "                            *" << endl;
				cout << "*" << "   _><_   " << "                            *" << endl;
				cout << "*" << "  -\\. /-  " << "                            *" << endl;
				cout << "*" << " / |. | \\ " << "                            *" << endl;
				cout << "*" << "/  |. |  \\" << "                            *" << endl;
				cout << "*" << "   |__|   " << "                            *" << endl;
				cout << "*" << "   _\\/_   " << "                            *" << endl;

				break;
			}

			cout << string(40, '*') << endl;

			//Sleep(time);
			//system("cls");
		}
	} else {
		for (int i = 0; i < 2; i++) {
			cout << string(40, '*') << endl;

			for (size_t j = 0; j < 6; j++) {
				cout << "*" << string(38, ' ') << "*" << endl;
			}

			switch (i) {
			case 1:
				cout << "*" << "   _[]_   " << "                            *" << endl;
				cout << "*" << "   |~~|   " << "                            *" << endl;
				cout << "*" << "   |oq|   " << "                            *" << endl;
				cout << "*" << "  (|<>|)  " << "                            *" << endl;
				cout << "*" << "   \\--/   " << "                            *" << endl;
				cout << "*" << "   _><_   " << "                            *" << endl;
				cout << "*" << "  -\\. /-  " << "                            *" << endl;
				cout << "*" << " / |. | \\ " << "                            *" << endl;
				cout << "*" << "/  |. |  \\" << "                            *" << endl;
				cout << "*" << "   |__|   " << "                            *" << endl;
				cout << "*" << "    ||    " << "                            *" << endl;
				cout << "*" << "   _||_   " << "                            *" << endl;

				break;
			case 0:
				cout << "*" << "          " << "                            *" << endl;
				cout << "*" << "   _[]_   " << "                            *" << endl;
				cout << "*" << "   |~~|   " << "                            *" << endl;
				cout << "*" << "   |oq|   " << "                            *" << endl;
				cout << "*" << "  (|<>|)  " << "                            *" << endl;
				cout << "*" << "   \\--/   " << "                            *" << endl;
				cout << "*" << "   _><_   " << "                            *" << endl;
				cout << "*" << "  -\\. /-  " << "                            *" << endl;
				cout << "*" << " / |. | \\ " << "                            *" << endl;
				cout << "*" << "/  |. |  \\" << "                            *" << endl;
				cout << "*" << "   |__|   " << "                            *" << endl;
				cout << "*" << "   _\\/_   " << "                            *" << endl;

				break;
			}

			cout << string(40, '*') << endl;

			//Sleep(time);
			//system("cls");
		}
	}
}

void fly(int p) {
	if (p == 1) {
		int l = 6, ll = 0;

		for (int i = 0; i < 5; i++) {
			cout << string(40, '*') << endl;

			for (int j = 0; j < l; j++) {
				cout << "*                                      *" << endl;
			}

			cout << "*" << "   _[]_   " << "                            *" << endl;
			cout << "*" << "   |~~|   " << "                            *" << endl;
			cout << "*" << "   |oq|   " << "                            *" << endl;
			cout << "*" << "  (|<>|)  " << "                            *" << endl;
			cout << "*" << "   \\--/   " << "                            *" << endl;
			cout << "*" << "   _><_   " << "                            *" << endl;
			cout << "*" << "  -\\. /-  " << "                            *" << endl;
			cout << "*" << " / |. | \\ " << "                            *" << endl;
			cout << "*" << "/  |. |  \\" << "                            *" << endl;
			cout << "*" << "   |__|   " << "                            *" << endl;
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
	} else {
		int l = 3, ll = 3;
		for (int i = 0; i < 4; i++) {
			cout << string(40, '*') << endl;

			for (int j = 0; j < l; j++) {
				cout << "*                                      *" << endl;
			}

			cout << "*" << "   _[]_   " << "                            *" << endl;
			cout << "*" << "   |~~|   " << "                            *" << endl;
			cout << "*" << "   |oq|   " << "                            *" << endl;
			cout << "*" << "  (|<>|)  " << "                            *" << endl;
			cout << "*" << "   \\--/   " << "                            *" << endl;
			cout << "*" << "   _><_   " << "                            *" << endl;
			cout << "*" << "  -\\. /-  " << "                            *" << endl;
			cout << "*" << " / |. | \\ " << "                            *" << endl;
			cout << "*" << "/  |. |  \\" << "                            *" << endl;
			cout << "*" << "   |__|   " << "                            *" << endl;
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

void monetka(int time) {
	const int h = 16, w = 11;
	char ram1[h][w] {
		{"          "},
		{"          "},
		{"          "},
		{"          "},
		{"   _[]_   "},
		{"   |~~|   "},
		{"   |oq|   "},
		{"  (|<>|)  "},
		{"   \\--/   "},
		{"   _><_   "},
		{"  -\\. /-  "},
		{" / |. | \\ "},
		{"/  |. |  \\"},
		{"   |__|   "},
		{"    ||    "},
		{"   _||_   "}
	};

	SSS(ram1, time, 1);

	ram1[12][9] = '-'; ram1[11][9] = 'o';

	SSS(ram1, time, 1);

	ram1[12][9] = ' '; ram1[11][9] = '-'; ram1[10][9] = 'o';

	SSS(ram1, time, 1);

	ram1[11][8] = ' ';	ram1[11][9] = ' ';  ram1[9][9] = 'o';
	ram1[10][8] = '-';	ram1[10][9] = '-';

	SSS(ram1, time, 1);

	ram1[10][9] = '/'; ram1[9][9] = ' '; ram1[8][9] = 'o';

	SSS(ram1, time, 1);

	ram1[10][9] = '-'; ram1[8][9] = ' '; ram1[7][9] = 'o';

	SSS(ram1, time, 1);

	ram1[10][9] = ' '; ram1[7][9] = ' '; ram1[11][9] = '\\';
	ram1[6][9] = 'o';

	SSS(ram1, time, 1);

	ram1[6][9] = ' ';  ram1[5][9] = 'o'; ram1[11][9] = ' ';
	ram1[10][8] = ' '; ram1[11][8] = '\\'; ram1[12][9] = '\\';

	SSS(ram1, time, 1);

	ram1[5][9] = ' ';  ram1[4][9] = 'o';

	SSS(ram1, time, 1);

	ram1[4][9] = ' '; ram1[3][8] = 'o';

	SSS(ram1, time, 1);

	ram1[3][8] = ' '; ram1[2][7] = 'o';

	SSS(ram1, time, 1);

	ram1[2][7] = ' '; ram1[1][6] = 'o';

	SSS(ram1, time, 1);

	ram1[1][6] = ' '; ram1[0][5] = 'o';

	SSS(ram1, time, 1);

	ram1[0][5] = ' '; ram1[0][4] = 'o';

	SSS(ram1, time, 1);

	ram1[0][4] = ' '; ram1[1][3] = 'o';

	SSS(ram1, time, 1);

	ram1[1][3] = ' '; ram1[2][2] = 'o';

	SSS(ram1, time, 1);

	ram1[2][2] = ' '; ram1[3][1] = 'o';

	SSS(ram1, time, 1);

	ram1[3][1] = ' '; ram1[4][0] = 'o';

	SSS(ram1, time, 1);

	ram1[4][0] = ' '; ram1[5][0] = 'o'; 

	SSS(ram1, time, 1);

	ram1[5][0] = ' '; ram1[6][0] = 'o';
	ram1[11][1] = ' '; ram1[12][0] = ' ';
	ram1[10][1] = '-'; ram1[11][0] = '/';

	SSS(ram1, time, 1);

	ram1[6][0] = ' '; ram1[7][0] = 'o';
	ram1[11][0] = ' '; ram1[10][0] = '-';

	SSS(ram1, time, 1);

	ram1[7][0] = ' '; ram1[8][0] = 'o';
	ram1[10][0] = '\\';

	SSS(ram1, time, 1);

	ram1[8][0] = ' '; ram1[9][0] = 'o';
	ram1[10][0] = '-';

	SSS(ram1, time, 1);

	ram1[9][0] = ' '; ram1[10][0] = 'o';
	ram1[11][0] = '-'; ram1[11][1] = '/';
	ram1[10][1] = ' '; 

	SSS(ram1, time, 1);

	ram1[10][0] = ' '; ram1[11][0] = 'o';
	ram1[12][0] = '-';

	SSS(ram1, time, 1);

	ram1[11][0] = ' '; ram1[12][0] = '/';

	SSS(ram1, time, 1);
}