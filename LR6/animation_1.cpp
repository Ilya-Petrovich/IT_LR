#include<iostream>
#include <unistd.h>


using namespace std;

void ShowArray(char pers[12][11], int height, int width) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << pers[i][j];
		}

		cout << endl;
	}
}

void SSS(char pers[][11], int t) {
	ShowArray(pers, 12, 11);
	//usleep(t * 1000);
	//system("cls");
}

int main() {
	const int h = 12, w = 11, t = 750;
	char pers[h][w] {
		{' ',' ',' ','(',')','(',')',' ',' ',' ','\0'},
		{' ',' ',' ','(',')','(',')',' ',' ',' ','\0'},
		{' ',' ',' ','(',')','(',')',' ',' ',' ','\0'},
		{' ',' ',' ','|','.','.','|',' ',' ',' ','\0'},
		{' ',' ','\\','|',' ',' ','|','/',' ',' ','\0'},
		{' ',' ','/','|','U','U','|','\\',' ',' ','\0'},
		{' ',' ','-','-','\\','/','-','-',' ',' ','\0'},
		{' ','/',' ',' ','|','|',' ',' ','\\',' ','\0'},
		{'/',' ',' ',' ','|','|',' ',' ',' ','\\','\0'},
		{' ',' ',' ',' ','/','\\',' ',' ',' ',' ','\0'},
		{' ',' ',' ',' ','|','|',' ',' ',' ',' ','\0'},
		{' ',' ',' ','_','|','|','_',' ',' ',' ','\0'},

	};

	SSS(pers, t);

	for (int i = 0; i < 2; i++) {
		pers[6][1] = '-'; pers[7][1] = ' ';
		pers[6][8] = '-'; pers[7][8] = ' ';
		pers[8][0] = ' '; pers[8][9] = ' ';
		pers[7][0] = '/'; pers[7][9] = '\\';

		SSS(pers, t);

		pers[6][1] = ' '; pers[7][0] = ' ';
		pers[7][9] = ' '; pers[6][9] = '-';
		pers[7][1] = '/'; pers[8][0] = '/';

		SSS(pers, t);

		pers[6][9] = ' '; pers[6][1] = '-';
		pers[7][1] = ' '; pers[8][0] = ' ';
		pers[7][0] = '/'; pers[5][9] = '/';

		SSS(pers, t);

		pers[6][1] = ' '; pers[7][0] = ' ';
		pers[7][1] = '/'; pers[8][0] = '/';
		pers[6][8] = ' '; pers[5][10] = ' ';
		pers[5][8] = '/'; pers[5][9] = ' ';
		pers[4][9] = '/';

		SSS(pers, t);

		pers[4][9] = '*'; pers[7][1] = ' ';
		pers[8][0] = ' '; pers[6][1] = '-';
		pers[7][0] = '/';

		SSS(pers, t);

		pers[4][9] = '/'; pers[7][0] = ' ';
		pers[6][0] = '-';

		SSS(pers, t);

		pers[4][9] = '*'; pers[6][0] = ' ';
		pers[5][0] = '\\';

		SSS(pers, t);

		pers[4][9] = '/'; pers[6][1] = ' ';
		pers[5][1] = '\\'; pers[4][0] = '\\';
		pers[5][0] = ' ';

		SSS(pers, t);

		pers[4][0] = '*'; pers[4][9] = '*';

		SSS(pers, t);

		pers[4][0] = ' '; pers[4][9] = ' ';
		pers[5][1] = ' '; pers[5][8] = ' ';
		pers[6][1] = '-'; pers[6][8] = '-';
		pers[5][0] = '*'; pers[5][9] = '*';

		SSS(pers, t);

		pers[5][0] = ' '; pers[5][9] = ' ';
		pers[6][0] = '*'; pers[6][9] = '*';

		SSS(pers, t);

		pers[6][0] = ' '; pers[6][9] = ' ';
		pers[7][0] = '*'; pers[7][9] = '*';

		SSS(pers, t);

		pers[7][0] = ' '; pers[7][9] = ' ';
		pers[6][1] = ' '; pers[6][8] = ' ';
		pers[7][1] = '/'; pers[7][8] = '\\';
		pers[8][0] = '*'; pers[8][9] = '*';

		SSS(pers, t);

		pers[8][0] = '/'; pers[8][9] = '\\';

		SSS(pers, t);
	}
	
}
