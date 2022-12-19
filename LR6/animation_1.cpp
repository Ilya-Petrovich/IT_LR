#include <iostream>
//#include <Windows.h>
//include <unistd.h>
using namespace std;
void ShowAnim(char anim[12][11], int height, int width) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width - 1; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void clear(char anim[][11], int t) {
	ShowAnim(anim, 12, 11);
	//Sleep(t);
	//system("cls");
}
int main() {
	const int h = 12, w = 11, t = 1000;
	char anim[h][w] = {
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
	clear(anim, t);
	for (int i = 0; i < 2; i++) {
		anim[6][1] = '-'; anim[7][1] = ' ';
		anim[6][8] = '-'; anim[7][8] = ' ';
		anim[8][0] = ' '; anim[8][9] = ' ';
		anim[7][0] = '/'; anim[7][9] = '\\';

		clear(anim, t);

		anim[6][1] = ' '; anim[7][0] = ' ';
		anim[7][9] = ' '; anim[6][9] = '-';
		anim[7][1] = '/'; anim[8][0] = '/';

		clear(anim, t);

		anim[6][9] = ' '; anim[6][1] = '-';
		anim[7][1] = ' '; anim[8][0] = ' ';
		anim[7][0] = '/'; anim[5][9] = '/';

		clear(anim, t);

		anim[6][1] = ' '; anim[7][0] = ' ';
		anim[7][1] = '/'; anim[8][0] = '/';
		anim[6][8] = ' '; anim[5][10] = ' ';
		anim[5][8] = '/'; anim[5][9] = ' ';
		anim[4][9] = '/';

		clear(anim, t);

		anim[4][9] = '*'; anim[7][1] = ' ';
		anim[8][0] = ' '; anim[6][1] = '-';
		anim[7][0] = '/';

		clear(anim, t);

		anim[4][9] = '/'; anim[7][0] = ' ';
		anim[6][0] = '-';

		clear(anim, t);

		anim[4][9] = '*'; anim[6][0] = ' ';
		anim[5][0] = '\\';

		clear(anim, t);

		anim[4][9] = '/'; anim[6][1] = ' ';
		anim[5][1] = '\\'; anim[4][0] = '\\';
		anim[5][0] = ' ';

		clear(anim, t);

		anim[4][0] = '*'; anim[4][9] = '*';

		clear(anim, t);

		anim[4][0] = ' '; anim[4][9] = ' ';
		anim[5][1] = ' '; anim[5][8] = ' ';
		anim[6][1] = '-'; anim[6][8] = '-';
		anim[5][0] = '*'; anim[5][9] = '*';

		clear(anim, t);

		anim[5][0] = ' '; anim[5][9] = ' ';
		anim[6][0] = '*'; anim[6][9] = '*';

		clear(anim, t);

		anim[6][0] = ' '; anim[6][9] = ' ';
		anim[7][0] = '*'; anim[7][9] = '*';

		clear(anim, t);

		anim[7][0] = ' '; anim[7][9] = ' ';
		anim[6][1] = ' '; anim[6][8] = ' ';
		anim[7][1] = '/'; anim[7][8] = '\\';
		anim[8][0] = '*'; anim[8][9] = '*';

		clear(anim, t);

		anim[8][0] = '/'; anim[8][9] = '\\';

		clear(anim, t);
	}
}