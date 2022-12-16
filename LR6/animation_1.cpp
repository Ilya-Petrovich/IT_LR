#include<iostream>
#include<windows.h>
using namespace std;
void concl(char pers[12][11], int h, int w);

int main() {
	const int W = 11, H = 12;
	int cnt = 0;
	char a = '/', b = ' ', c = '\\', d = '-', e = '*';
	char pers[H][W] = {
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
	concl(pers, H, W);
	//Sleep(500);
	//system("cls");

	while (cnt != 2) {
		pers[6][1] = pers[6][8] = d;
		pers[7][0] = a;
		pers[7][9] = c;
		pers[7][8] = pers[8][0] = pers[8][9] = pers[7][1] = b;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");

		pers[6][9] = d;
		pers[7][1] = pers[8][0] = a;
		pers[7][9] = pers[7][0] = pers[6][1] = b;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");

		pers[6][9] = pers[8][0] = pers[7][1] = b;
		pers[6][1] = d;
		pers[5][9] = pers[7][0] = a;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");

		pers[6][1] = pers[7][0] = pers[6][8] = pers[5][9] = b;
		pers[4][9] = pers[7][1] = pers[8][0] = pers[5][8] = a;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");

		pers[7][1] = pers[8][0] = b;
		pers[6][1] = d;
		pers[4][9] = e;
		pers[7][0] = a;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");

		pers[7][0] = b;
		pers[6][0] = d;
		pers[4][9] = a;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");

		pers[6][0] = b;
		pers[5][0] = c;
		pers[4][9] = e;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");

		pers[5][0] = pers[6][1] = b;
		pers[4][9] = a;
		pers[4][0] = pers[5][1] = c;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");

		pers[4][9] = pers[4][0] = e;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");

		pers[4][9] = pers[4][0] = pers[5][1] = pers[5][8] = b;
		pers[6][1] = pers[6][8] = d;
		pers[5][0] = pers[5][9] = e;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");

		pers[5][0] = pers[5][9] = b;
		pers[6][0] = pers[6][9] = e;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");

		pers[6][0] = pers[6][9] = b;
		pers[7][0] = pers[7][9] = e;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");

		pers[7][0] = pers[7][9] = pers[6][1] = pers[6][8] = b;
		pers[8][0] = pers[8][9] = e;
		pers[7][1] = a;
		pers[7][8] = c;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");

		pers[8][0] = a;
		pers[8][9] = c;
		concl(pers, H, W);
		//Sleep(500);
		//system("cls");
		cnt++;
	}

	return 0;
}

void concl(char pers[12][11], int h, int w) {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w - 1; j++) {
			cout << pers[i][j];
		}

		cout << endl;
	}
}
