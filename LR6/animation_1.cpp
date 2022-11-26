#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
	const int rows = 12;
	int l = 0;

	string m[rows] = { "    /\\    ",
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
	
	for (int i = 0; i < rows; i++) {
		cout << m[i] << endl;
	}

	while (l < 2) {
		//Sleep(700);
		//system("cls");
		m[6][1] = '-';
		m[6][8] = '-';
		m[7][0] = '/';
		m[7][1] = ' ';
		m[7][8] = ' ';
		m[7][9] = '\\';
		m[8][0] = ' ';
		m[8][9] = ' ';

		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}

		Sleep(700);
		system("cls");
		m[6][1] = ' ';
		m[6][8] = '-';
		m[6][9] = '-';
		m[7][0] = ' ';
		m[7][1] = '/';
		m[7][8] = ' ';
		m[7][9] = ' ';
		m[8][0] = '/';
		
		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}

		Sleep(700);
		system("cls");
		m[5][9] = '/';
		m[6][1] = '-';
		m[6][9] = ' ';
		m[6][8] = '-';
		m[7][0] = '/';
		m[7][1] = ' ';
		m[7][9] = ' ';
		m[7][8] = ' ';
		m[8][0] = ' ';
		
		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}
		Sleep(700);
		system("cls");
		m[5][8] = '/';
		m[5][9] = ' ';
		m[4][9] = '/';
		m[6][1] = ' ';
		m[6][8] = ' ';
		m[6][9] = ' ';
		m[7][0] = ' ';
		m[7][1] = '/';
		m[8][0] = '/';
		
		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}

		Sleep(700);
		system("cls");
		m[5][8] = '/';
		m[5][9] = ' ';
		m[4][9] = '*';
		m[6][1] = '-';
		m[7][0] = '/';
		m[7][1] = ' ';
		m[8][0] = ' ';
		
		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}

		Sleep(700);
		system("cls");
		m[4][9] = '/';
		m[6][0] = '-';
		m[7][0] = ' ';
		
		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}

		Sleep(700);
		system("cls");
		m[4][9] = '*';
		m[5][0] = '\\';
		m[6][0] = ' ';
		
		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}

		Sleep(700);
		system("cls");
		m[4][9] = '/';
		m[4][0] = '\\';
		m[5][0] = ' ';
		m[5][1] = '\\';
		m[6][0] = ' ';
		m[6][1] = ' ';
		
		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}

		Sleep(700);
		system("cls");
		m[4][9] = '*';
		m[4][0] = '*';
		
		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}

		Sleep(700);
		system("cls");
		m[4][9] = ' ';
		m[4][0] = ' ';
		m[5][0] = '*';
		m[5][1] = ' ';
		m[5][8] = ' ';
		m[5][9] = '*';
		m[6][1] = '-';
		m[6][8] = '-';

		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}

		Sleep(700);
		system("cls");
		m[5][0] = ' ';
		m[5][9] = ' ';
		m[6][0] = '*';
		m[6][9] = '*';

		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}

		Sleep(700);
		system("cls");
		m[6][0] = ' ';
		m[6][9] = ' ';
		m[7][0] = '*';
		m[7][9] = '*';

		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}

		Sleep(700);
		system("cls");
		m[6][1] = ' ';
		m[6][8] = ' ';
		m[7][1] = '/';
		m[7][8] = '\\';
		m[7][0] = ' ';
		m[7][9] = ' ';
		m[8][0] = '*';
		m[8][9] = '*';

		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}

		Sleep(700);
		system("cls");
		m[8][0] = '/';
		m[8][9] = '\\';

		for (int i = 0; i < rows; i++) {
			cout << m[i] << endl;
		}
		l++;
	}
}

