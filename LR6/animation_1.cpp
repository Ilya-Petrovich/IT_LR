#include<iostream>
#include<unistd.h>

using namespace std;

int main() {
	int n = 12, m = 10, k = 0;
	char character[12][10] =
	{
		' ', ' ', ' ', '_', '[', ']', '_', ' ', ' ', ' ',
		' ', ' ', ' ', '|', '~', '~', '|', ' ', ' ', ' ',
		' ', ' ', ' ', '|', '0', 'q', '|', ' ', ' ', ' ',
		' ', ' ', '(', '|', '<', '>', '|', ')', ' ', ' ',
		' ', ' ', ' ', '\\', '-', '-', '/', ' ', ' ', ' ',
		' ', ' ', ' ', '_', '>', '<', '_', ' ', ' ', ' ',
		' ', ' ', '-', '\\', '.', ' ', '/', '-', ' ', ' ',
		' ', '/', ' ', '|', '.', ' ', '|', ' ', '\\', ' ',
		'/', ' ', ' ', '|', '.', ' ', '|', ' ', ' ', '\\',
		' ', ' ', ' ', '|', '_', '_', '|', ' ', ' ', ' ',
		' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' ',
		' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' ',
	};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << character[i][j] << " ";
		cout << endl;
	};

	//Sleep(1000);

	while (k != 2) {
		//system("cls");
		character[7][1] = ' ';
		character[6][1] = '-';
		character[7][8] = ' ';
		character[6][8] = '-';
		character[8][0] = ' ';
		character[7][0] = '/';
		character[8][9] = ' ';
		character[7][9] = '\\';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);
		//system("cls");

		character[6][1] = ' ';
		character[7][1] = '/';
		character[8][0] = '/';
		character[7][0] = ' ';
		character[7][9] = ' ';
		character[6][8] = '-';
		character[6][9] = '-';
		character[7][9] = ' ';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);
		//system("cls");

		character[7][1] = ' ';
		character[6][1] = '-';
		character[8][0] = ' ';
		character[7][0] = '/';
		character[6][9] = ' ';
		character[5][9] = '/';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);
		//system("cls");

		character[5][9] = ' ';
		character[4][9] = '/';
		character[5][8] = '/';
		character[5][9] = '/';
		character[6][8] = ' ';
		character[7][1] = '/';
		character[8][0] = '/';
		character[7][0] = ' ';
		character[5][9] = ' ';
		character[6][1] = ' ';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);
		//system("cls");

		character[6][1] = '-';
		character[8][0] = ' ';
		character[7][0] = '/';
		character[7][1] = ' ';
		character[4][9] = '*';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);
		//system("cls");

		character[4][9] = '/';
		character[7][0] = ' ';
		character[6][0] = '-';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);
		//system("cls");

		character[6][0] = ' ';
		character[5][0] = '\\';
		character[4][9] = '*';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);
		//system("cls");

		character[4][9] = '/';
		character[5][0] = ' ';
		character[4][0] = '\\';
		character[6][1] = ' ';
		character[5][1] = '\\';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);
		//system("cls");

		character[4][9] = '*';
		character[4][0] = '*';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);
		//system("cls");

		character[4][9] = ' ';
		character[4][0] = ' ';
		character[5][1] = ' ';
		character[5][0] = '*';
		character[5][9] = '*';
		character[5][8] = ' ';
		character[6][1] = '-';
		character[6][8] = '-';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);
		//system("cls");

		character[5][0] = ' ';
		character[5][9] = ' ';
		character[6][0] = '*';
		character[6][9] = '*';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);
		//system("cls");

		character[6][0] = ' ';
		character[6][9] = ' ';
		character[7][0] = '*';
		character[7][9] = '*';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);
		//system("cls");

		character[7][1] = '/';
		character[7][8] = '\\';
		character[7][0] = ' ';
		character[7][9] = ' ';
		character[8][0] = '*';
		character[8][9] = '*';
		character[6][1] = ' ';
		character[6][8] = ' ';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);
		//system("cls");

		character[8][0] = '/';
		character[8][9] = '\\';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << character[i][j] << " ";
			cout << endl;
		};

		//Sleep(1000);

		k++;
	};
	return 0;
}