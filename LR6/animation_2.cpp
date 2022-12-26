#include <iostream>
#include <unistd.h>
using namespace std;

char a[12][10] = { ' ' };
int game_mode = 0, delta = 1, ball = 0;

void clear() {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			a[i][j] = ' ';
		}
	}
}

void show(int x, int y) {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 40; j++) {
			if (i == 0 || i == 19 || j == 0 || j == 39) {
				cout << "*";
			}
			else {
				if (i - y >= 0 && i - y <= 11 && j - x >= 0 && j - x <= 9) {
					cout << a[i - y][j - x];
				}
				else {
					if (ball == 1 && game_mode == 4 && j == 9 && i == 6 ||
						ball == 2 && game_mode == 4 && j == 8 && i == 5 ||
						ball == 3 && game_mode == 4 && j == 7 && i == 4 ||
						ball == 4 && game_mode == 4 && j == 6 && i == 3 ||
						ball == 5 && game_mode == 4 && j == 5 && i == 3 ||
						ball == 6 && game_mode == 4 && j == 4 && i == 4 ||
						ball == 7 && game_mode == 4 && j == 3 && i == 5 ||
						ball == 8 && game_mode == 4 && j == 2 && i == 6) {
						cout << 'o';
					}
					else {
						cout << " ";
					}
				}
			}
		}
		cout << "\n";
	}
}

void change(int i) {
	switch (i) {
	case 1:
		a[6][8] = '-'; a[6][1] = '-';
		a[7][9] = '\\'; a[7][0] = '/'; a[7][1] = ' '; a[7][8] = ' ';
		a[8][9] = ' '; a[8][0] = ' ';
		break;
	case 2:
		a[6][9] = '-'; a[6][1] = ' ';
		a[7][9] = ' '; a[7][0] = ' '; a[7][1] = '/';
		a[8][0] = '/';
		break;
	case 3:
		a[6][9] = ' '; a[5][9] = '/'; a[6][1] = '-';
		a[7][1] = ' '; a[7][0] = '/';
		a[8][0] = ' ';
		break;
	case 4:
		a[6][9] = ' '; a[5][9] = ' '; a[6][1] = ' '; a[6][8] = ' '; a[5][8] = '/'; a[4][9] = '/';
		a[7][1] = '/'; a[7][0] = ' ';
		a[8][0] = '/';
		break;
	case 5:
		a[6][1] = '-'; a[6][8] = ' '; a[4][9] = '*';
		a[7][1] = ' '; a[7][0] = '/';
		a[8][0] = ' ';
		break;
	case 6:
		a[6][0] = '-'; a[4][9] = '/'; a[7][0] = ' ';
		break;
	case 7:
		a[6][0] = ' '; a[4][9] = '*'; a[5][0] = '\\';
		break;
	case 8:
		a[4][0] = '\\'; a[4][9] = '/'; a[5][0] = ' '; a[5][1] = '\\'; a[6][1] = ' ';
		break;
	case 9:
		a[4][0] = '*'; a[4][9] = '*';
		break;
	case 10:
		a[4][0] = ' '; a[4][9] = ' ';
		a[6][1] = '-'; a[6][8] = '-';
		a[5][0] = '*'; a[5][9] = '*'; a[5][1] = ' '; a[5][8] = ' ';
		break;
	case 11:
		a[6][0] = '*'; a[6][9] = '*';
		a[5][0] = ' '; a[5][9] = ' ';
		break;
	case 12:
		a[7][0] = '*'; a[7][9] = '*';
		a[6][0] = ' '; a[6][9] = ' ';
		break;
	case 13:
		a[8][0] = '*'; a[8][9] = '*'; a[6][1] = ' '; a[6][8] = ' ';
		a[7][0] = ' '; a[7][9] = ' '; a[7][1] = '/'; a[7][8] = '\\';
		break;
	case 14:
		a[11][5] = ' '; a[11][6] = '\\'; a[11][7] = '_'; a[10][5] = '\\';
		a[11][2] = ' '; a[11][3] = '_'; a[11][4] = '|'; a[10][4] = '|';
		break;
	case 15:
		a[11][5] = '|'; a[11][6] = '_'; a[11][7] = ' '; a[10][5] = '|';
		a[11][2] = '_'; a[11][3] = '/'; a[11][4] = ' '; a[10][4] = '/';
		break;
	case 16:
		a[11][2] = ' '; a[11][3] = '_'; a[11][4] = '|'; a[10][4] = '|';
		a[11][5] = '|'; a[11][6] = '_'; a[11][7] = ' '; a[10][5] = '|';
		break;
	case 17:
		a[11][3] = ' '; a[11][4] = ' '; a[11][5] = ' '; a[11][6] = ' ';
		a[10][3] = '_'; a[10][4] = '\\'; a[10][5] = '/'; a[10][6] = '_';
		break;
	case 18:
		a[11][3] = ' '; a[11][4] = '|'; a[11][5] = '|'; a[11][6] = ' ';
		a[10][3] = ' '; a[10][4] = '|'; a[10][5] = '|'; a[10][6] = ' ';
		break;
	case 19:
		a[7][9] = 'o'; a[8][9] = '-';
		break;
	case 20:
		a[7][9] = '-'; a[8][9] = ' '; a[6][9] = 'o';
		break;
	case 21:
		a[7][9] = ' '; a[6][9] = '-'; a[5][9] = 'o'; a[7][8] = ' '; a[6][8] = '-';
		break;
	case 22:
		a[6][9] = '/'; a[5][9] = ' '; a[4][9] = 'o';
		break;
	case 23:
		a[6][9] = '-'; a[3][9] = 'o'; a[4][9] = ' ';
		break;
	case 24:
		a[6][9] = ' '; a[7][9] = '\\'; a[2][9] = 'o'; a[3][9] = ' ';
		break;
	case 25:
		a[6][8] = ' '; a[7][9] = ' '; a[7][8] = '\\'; a[8][9] = '\\'; a[1][9] = 'o'; a[2][9] = ' ';
		break;
	case 26:
		a[1][9] = ' '; a[0][9] = 'o';
		break;
	case 27:
		a[0][0] = 'o';
		break;
	case 28:
		a[1][0] = 'o'; a[0][0] = ' ';
		break;
	case 29:
		a[2][0] = 'o'; a[1][0] = ' '; a[7][0] = '/'; a[8][0] = ' '; a[7][1] = ' '; a[6][1] = '-';
		break;
	case 30:
		a[3][0] = 'o'; a[2][0] = ' '; a[7][0] = ' '; a[6][0] = '-';
		break;
	case 31:
		a[4][0] = 'o'; a[3][0] = ' '; a[6][0] = '\\';
		break;
	case 32:
		a[5][0] = 'o'; a[4][0] = ' '; a[6][0] = '-';
		break;
	case 33:
		a[6][0] = 'o'; a[5][0] = ' '; a[7][0] = '-'; a[7][1] = '/'; a[6][1] = ' ';
		break;
	case 34:
		a[7][0] = 'o'; a[8][0] = '-'; a[6][0] = ' ';
		break;
	default:
		clear();
		a[0][4] = '/'; a[0][5] = '\\';
		a[1][3] = '|'; a[1][4] = 'o'; a[1][5] = 'o'; a[1][6] = '|';
		a[2][3] = '|'; a[2][4] = '.'; a[2][5] = '.'; a[2][6] = '|';
		a[3][3] = '|'; a[3][4] = '-'; a[3][5] = '-'; a[3][6] = '|'; a[3][2] = '('; a[3][7] = ')';
		a[4][3] = '\\'; a[4][4] = '_'; a[4][5] = '_'; a[4][6] = '/';
		a[5][3] = ' '; a[5][4] = '|'; a[5][5] = '|'; a[5][6] = ' ';
		a[6][3] = '|'; a[6][5] = '*'; a[6][6] = '|'; a[6][2] = '-'; a[6][7] = '-';
		a[7][3] = '|'; a[7][4] = ' '; a[7][6] = '|'; a[7][1] = '/'; a[7][8] = '\\';
		a[8][3] = ' '; a[8][4] = '\\'; a[8][5] = '/'; a[8][0] = '/'; a[8][9] = '\\';
		a[9][3] = ' '; a[9][4] = '/'; a[9][5] = '\\'; a[9][6] = ' ';
		a[10][4] = '|'; a[10][5] = '|';
		a[11][4] = '|'; a[11][5] = '|'; a[11][3] = '_'; a[11][6] = '_';
		break;
	}
}

void choose(int mode);

int main() {
	cout << "Choose animation:" << std::endl;
	cout << "Dance: \t\t\t1" << std::endl;
	cout << "Run: \t\t\t2" << std::endl;
	cout << "Sit down and jump: \t3" << std::endl;
	cout << "Throw a ball: \t\t4" << std::endl << std::endl;
	cout << "Enter 5 for exit." << std::endl;
	cin >> game_mode;
	choose(game_mode);
}

void choose(int mode) {
	if (mode == 1) {
		for (int i = 0; i < 14; i++) {
			//			system("cls");
			change(i);
			show(1, 7);
			//			Sleep(delta);
		}
		clear();
		for (int i = 0; i < 14; i++) {
			//			system("cls");
			change(i);
			show(1, 7);
			//			Sleep(delta);
		}
		//		system("cls");
		change(0);
		show(1, 7);
		//		Sleep(delta);
	}
	if (mode == 2) {
		//		system("cls");
		change(0);
		show(1, 7);
		//		Sleep(delta);
		int i = 1;
		while (i != 29) {
			//			system("cls");
			change(14);
			show(i, 7);
			//			Sleep(delta);
			//			system("cls");
			i++;
			change(15);
			show(i, 7);
			//			Sleep(delta);
			//			system("cls");
			change(16);
			show(i, 7);
			//			Sleep(delta);
			//			system("cls");
		}
		while (i != 1)
		{
			change(14);
			show(i, 7);
			//			Sleep(delta);
			//			system("cls");
			i -= 1;
			if (i != 1) {
				change(15);
				show(i, 7);
				//			Sleep(delta);
				//			system("cls");
			}
			change(16);
			show(i, 7);
			//			Sleep(delta);
			//			system("cls");
		}
	}
	if (mode == 3) {
		//		system("cls");
		change(0);
		show(1, 7);
		//		Sleep(delta);
		//		system("cls");
		change(17);
		show(1, 8);
		//		Sleep(delta);
		for (int i = 7; i > 2; i--) {
			//			system("cls");
			change(18);
			show(1, i);
			//			Sleep(delta);
		}
		for (int i = 3; i < 8; i++) {
			//			system("cls");
			change(18);
			show(1, i);
			//			Sleep(delta);
		}
		//		system("cls");
		change(0);
		change(17);
		show(1, 8);
		//		Sleep(delta);
		//		system("cls");
		change(0);
		show(1, 7);
		//		Sleep(delta);
	}
	if (mode == 4) {
		change(0);
		for (int i = 19; i < 27; i++) {
			//			system("cls");
			change(i);
			show(1, 7);
			//			Sleep(delta);
		}
		change(0);
		for (int i = 1; i < 9; i++) {
			ball = i;
			//			system("cls");
			show(1, 7);
			//			Sleep(delta);
		}
		ball = 0;
		for (int i = 27; i < 35; i++) {
			//			system("cls");
			change(i);
			show(1, 7);
			//			Sleep(delta);
		}
		//		system("cls");
		change(0);
		show(1, 7);
		//		Sleep(delta);
	}
	if (mode != 5) {
		//		system("cls");
		main();
	}
}