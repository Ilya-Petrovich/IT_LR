#include <iostream>
#include <unistd.h>
using namespace std;
int main() {
	const int line = 12;
	int l = 0;

	string z[line] = {
	" ()() ",
	" ()() ",
	" ()() ",
	" |..| ",
	" \\| |/ ",
	" /|UU|\\ ",
	" —\\/— ",
	" / || \\ ",
	"/ || \\",
	" /\\ ",
	" || ",
	" _||_ "
	};

	for (int i = 0; i < line; i++) {
		cout << z[i] << endl;
	}

	while (l < 2) {
		//Sleep(600);
		system("clear");
		z[6][1] = '-';
		z[6][8] = '-';
		z[7][0] = '/';
		z[7][1] = ' ';
		z[7][8] = ' ';
		z[7][9] = '\\';
		z[8][0] = ' ';
		z[8][9] = ' ';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}

		//Sleep(600);
		system("clear");
		z[6][1] = ' ';
		z[6][8] = '-';
		z[6][9] = '-';
		z[7][0] = ' ';
		z[7][1] = '/';
		z[7][8] = ' ';
		z[7][9] = ' ';
		z[8][0] = '/';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}

		//Sleep(600);
		system("clear");
		z[5][9] = '/';
		z[6][1] = '-';
		z[6][9] = ' ';
		z[6][8] = '-';
		z[7][0] = '/';
		z[7][1] = ' ';
		z[7][9] = ' ';
		z[7][8] = ' ';
		z[8][0] = ' ';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}
		//Sleep(600);
		system("clear");
		z[5][8] = '/';
		z[5][9] = ' ';
		z[4][9] = '/';
		z[6][1] = ' ';
		z[6][8] = ' ';
		z[6][9] = ' ';
		z[7][0] = ' ';
		z[7][1] = '/';
		z[8][0] = '/';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}

		//Sleep(600);
		system("clear");
		z[5][8] = '/';
		z[5][9] = ' ';
		z[4][9] = '*';
		z[6][1] = '-';
		z[7][0] = '/';
		z[7][1] = ' ';
		z[8][0] = ' ';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}

		//Sleep(600);
		system("clear")
		z[4][9] = '/';
		z[6][0] = '-';
		z[7][0] = ' ';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}

		//Sleep(600);
		system("clear");
		z[4][9] = '*';
		z[5][0] = '\\';
		z[6][0] = ' ';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}

		//Sleep(600);
		system("clear");
		z[4][9] = '/';
		z[4][0] = '\\';
		z[5][0] = ' ';
		z[5][1] = '\\';
		z[6][0] = ' ';
		z[6][1] = ' ';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}

		//Sleep(600);
		system("clear");
		z[4][9] = '*';
		z[4][0] = '*';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}

		//Sleep(600);
		system("clear");
		z[4][9] = ' ';
		z[4][0] = ' ';
		z[5][0] = '*';
		z[5][1] = ' ';
		z[5][8] = ' ';
		z[5][9] = '*';
		z[6][1] = '-';
		z[6][8] = '-';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}

		//Sleep(600);
		system("clear");
		z[5][0] = ' ';
		z[5][9] = ' ';
		z[6][0] = '*';
		z[6][9] = '*';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}

		//Sleep(600);
		system("clear");
		z[6][0] = ' ';
		z[6][9] = ' ';
		z[7][0] = '*';
		z[7][9] = '*';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}

		//Sleep(600);
		system("clear");
		z[6][1] = ' ';
		z[6][8] = ' ';
		z[7][1] = '/';
		z[7][8] = '\\';
		z[7][0] = ' ';
		z[7][9] = ' ';
		z[8][0] = '*';
		z[8][9] = '*';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}

		//Sleep(600);
		system("clear");
		z[8][0] = '/';
		z[8][9] = '\\';

		for (int i = 0; i < line; i++) {
			cout << z[i] << endl;
		}
		l++;
	}
}
