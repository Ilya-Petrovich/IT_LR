#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

void dancing(string* firstEl, int t);
void run(string* firstEl, int t);
void sit(int t);
void throwBall(int t);
void menu(string* pers0);

const int hc = 20, wc = 40, h = 12, w = 11;
char cons[hc][wc]
{
	{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
};

char person[h][w]
{
	{' ',' ',' ','(',')','(',')',' ',' ',' '},
	{' ',' ',' ','(',')','(',')',' ',' ',' '},
	{' ',' ',' ','(',')','(',')',' ',' ',' '},
	{' ',' ',' ','|','.','.','|',' ',' ',' '},
	{' ',' ','\\','|',' ',' ','|','/',' ',' '},
	{' ',' ','/','|','U','U','|','\\',' ',' '},
	{' ',' ','-','-','\\','/','-','-',' ',' '},
	{' ','/',' ',' ','|','|',' ',' ','\\',' '},
	{'/',' ',' ',' ','|','|',' ',' ',' ','\\'},
	{' ',' ',' ',' ','/','\\',' ',' ',' ',' '},
	{' ',' ',' ',' ','|','|',' ',' ',' ',' '},
	{' ',' ',' ','_','|','|','_',' ',' ',' '},
};

void zeroing_console() {
	char cons_zero[hc][wc] =
	{
		{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
	};
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cons[i][j] = cons_zero[i][j];
		}
	}
}
void zeroing_pers() {
	char zero_person[h][w]
	{
		{' ',' ',' ','(',')','(',')',' ',' ',' '},
		{' ',' ',' ','(',')','(',')',' ',' ',' '},
		{' ',' ',' ','(',')','(',')',' ',' ',' '},
		{' ',' ',' ','|','.','.','|',' ',' ',' '},
		{' ',' ','\\','|',' ',' ','|','/',' ',' '},
		{' ',' ','/','|','U','U','|','\\',' ',' '},
		{' ',' ','-','-','\\','/','-','-',' ',' '},
		{' ','/',' ',' ','|','|',' ',' ','\\',' '},
		{'/',' ',' ',' ','|','|',' ',' ',' ','\\'},
		{' ',' ',' ',' ','/','\\',' ',' ',' ',' '},
		{' ',' ',' ',' ','|','|',' ',' ',' ',' '},
		{' ',' ',' ','_','|','|','_',' ',' ',' '},
	};
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			person[i][j] = zero_person[i][j];
		}
	}
}

int main() {




	string pers[20] = {
		"****************************************",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*   ()()                               *",
		"*   ()()                               *",
		"*   ()()                               *",
		"*   |..|                               *",
		"*  \\|  |/                              *",
		"*  /|UU|\\                              *",
		"*  --\\/--                              *",
		"* /  ||  \\                             *",
		"*/   ||   \\                            *",
		"*    /\\                                *",
		"*    ||                                *",
		"*   _||_                               *",
		"****************************************",
	};



	string* pers0 = pers;
	menu(pers0);

	return 0;
}

void menu(string* pers0) {
	int num;
	cout << "Choose animation:" << endl;
	cout << "Dance: \t\t\t1" << endl;
	cout << "Run: \t\t\t2" << endl;
	cout << "Sit down and jump: \t3" << endl;
	cout << "Throw a ball: \t\t4" << endl << endl;
	cout << "Enter 5 for exit." << endl;
	cin >> num;
	switch (num)
	{
	case 1: {
		dancing(pers0, 500);
		menu(pers0);
		break;
	}
	case 2: {
		run(pers0, 100);
		menu(pers0);
		break;
	}
	case 3: {
		sit(2000);
		menu(pers0);
		break;
	}
	case 4: {
		throwBall(500);
		menu(pers0);
		break;
	}
	case 5: {
		break;
	}
	default:
		cout << "Wrong number" << endl;
		menu(pers0);
	}
}

void dancing(string* firstEl, int t) {
	//system("cls");
	int col = 20;
	string pers[20];
	string* ptpers = pers;
	for (int i = 0; i < col; i++, firstEl++) pers[i] = *firstEl;
	for (int i = 0; i < col; i++) cout << pers[i] << endl;

	for (int q = 0; q < 2; q++) {
		pers[13] = "* ---\\/---                             *";

		pers[14] = "*/   ||   \\                            *";
		pers[15] = "*    ||                                *";

		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[13] = "*  --\\/----                            *";
		pers[14] = "* /  ||                                *";
		pers[15] = "*/   ||                                *";
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[12] = "*  /|UU|\\ /                            *";
		pers[13] = "* ---\\/---                             *";
		pers[14] = "*/   ||                                *";
		pers[15] = "*    ||                                *";
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*  \\|  |/ /                            *";
		pers[12] = "*  /|UU|\\/                             *";
		pers[13] = "*  --\\/--                              *";
		pers[14] = "* /  ||                                *";
		pers[15] = "*/   ||                                *";
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*  \\|  |/ *                            *";
		pers[12] = "*  /|UU|\\/                             *";
		pers[13] = "* ---\\/--                              *";
		pers[14] = "*/   ||                                *";
		pers[15] = "*    ||                                *";
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*  \\|  |/ /                            *";
		pers[12] = "*  /|UU|\\/                             *";
		pers[13] = "*----\\/--                              *";
		pers[14] = "*    ||                                *";
		pers[15] = "*    ||                                *";
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*  \\|  |/ *                            *";
		pers[12] = "*\\ /|UU|\\/                             *";
		pers[13] = "* ---\\/--                              *";
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*\\ \\|  |/ /                            *";
		pers[12] = "* \\/|UU|\\/                             *";
		pers[13] = "*  --\\/--                              *";
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "** \\|  |/ *                            *";
		pers[12] = "* \\/|UU|\\/                             *";
		pers[13] = "*  --\\/--                              *";
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*  \\|  |/                              *";
		pers[12] = "** /|UU|\\ *                            *";
		pers[13] = "* ---\\/---                             *";
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[12] = "*  /|UU|\\                              *";
		pers[13] = "**---\\/---*                            *";
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[13] = "* ---\\/---                             *";
		pers[14] = "**   ||   *                            *";
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[13] = "*  --\\/--                              *";
		pers[14] = "* /  ||  \\                             *";
		pers[15] = "**   ||   *                            *";
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[15] = "*/   ||   \\                            *";
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}

	}
	//system("cls");
	return;
}


void run_pos2() {
	person[10][5] = ' ';
	person[10][6] = '\\';
	person[11][5] = ' ';
	person[11][6] = ' ';
	person[11][7] = '\\';
	person[11][8] = '_';
}

void run_pos3() {
	person[10][3] = '/';
	person[10][4] = ' ';
	person[11][1] = '_';
	person[11][2] = '/';
	person[11][4] = ' ';
	person[11][3] = ' ';
}

void run(string* firstEl, int t) {
	zeroing_pers();
	zeroing_console();
	//system("cls");
	int col = 20;
	string pers[20];
	string* ptpers = pers;
	for (int i = 0; i < col; i++, firstEl++) pers[i] = *firstEl;
	for (int i = 0; i < col; i++) cout << pers[i] << endl;

	//Sleep(t);
	//system("cls");

	for (int k = 0; k < wc - w - 1; k++) {
		run_pos2();
		for (int i = 7; i < hc - 1; i++) {
			for (int j = 1 + k; j < w + k; j++) {
				cons[i][j] = person[i - 7][j - 1 - k];
			}
		}
		for (int i = 0; i < hc; i++) {
			for (int j = 0; j < wc; j++) {
				cout << cons[i][j];
			}
			cout << endl;
		}
		zeroing_console();
		zeroing_pers();

		run_pos3();
		//Sleep(t);
		//system("cls");
		for (int i = 7; i < hc - 1; i++) {
			for (int j = 2 + k; j < w + k + 1; j++) {
				cons[i][j] = person[i - 7][j - 2 - k];
			}
		}
		for (int i = 0; i < hc; i++) {
			for (int j = 0; j < wc; j++) {
				cout << cons[i][j];
			}
			cout << endl;
		}
		zeroing_console();
		zeroing_pers();
		//Sleep(t);
		//system("cls");

		for (int i = 7; i < hc - 1; i++) {
			for (int j = 2 + k; j < w + k + 1; j++) {
				cons[i][j] = person[i - 7][j - 2 - k];
			}
		}
		for (int i = 0; i < hc; i++) {
			for (int j = 0; j < wc; j++) {
				cout << cons[i][j];
			}
			cout << endl;
		}

		//Sleep(t);
		//system("cls");
	}




	for (int k = wc - w - 1; k > 0; k--) {
		run_pos3();
		for (int i = 7; i < hc - 1; i++) {
			for (int j = 1 + k; j < w + k; j++) {
				cons[i][j] = person[i - 7][j - 1 - k];
			}
		}
		for (int i = 0; i < hc; i++) {
			for (int j = 0; j < wc; j++) {
				cout << cons[i][j];
			}
			cout << endl;
		}
		zeroing_console();
		zeroing_pers();

		run_pos2();
		//Sleep(t);
		//system("cls");
		for (int i = 7; i < hc - 1; i++) {
			for (int j = k; j < w + k - 1; j++) {
				cons[i][j] = person[i - 7][j - k];
			}
		}
		for (int i = 0; i < hc; i++) {
			for (int j = 0; j < wc; j++) {
				cout << cons[i][j];
			}
			cout << endl;
		}
		zeroing_console();
		zeroing_pers();
		//Sleep(t);
		//system("cls");

		for (int i = 7; i < hc - 1; i++) {
			for (int j = k; j < w + k - 1; j++) {
				cons[i][j] = person[i - 7][j - k];
			}
		}
		for (int i = 0; i < hc; i++) {
			for (int j = 0; j < wc; j++) {
				cout << cons[i][j];
			}
			cout << endl;
		}

		//Sleep(t);
		//system("cls");
	}




}



void sit(int t) {
	zeroing_console();
	zeroing_pers();
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);
	for (int i = 10; i >= 0; i--)
	{
		for (int j = 0; j < w; j++)
		{
			if (i == 0) {
				person[i][j] = ' ';
			}
			else { person[i][j] = person[i - 1][j]; }



		}

	}
	person[11][4] = '\\';
	person[11][5] = '/';

	//system("cls");


	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}


	zeroing_pers();
	zeroing_console();
	person[11][3] = ' ';
	person[11][4] = '|';
	person[11][5] = '|';
	person[11][6] = ' ';


	//Sleep(t);
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}

	zeroing_console();
	//Sleep(t);
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i - 1][j] = person[i - 7][j - 1];

		}

	}

	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}

	zeroing_console();
	//Sleep(t);
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i - 2][j] = person[i - 7][j - 1];

		}

	}

	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}

	zeroing_console();
	//Sleep(t);
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i - 3][j] = person[i - 7][j - 1];

		}

	}

	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}


	zeroing_console();
	//Sleep(t);
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i - 4][j] = person[i - 7][j - 1];

		}

	}

	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}

	zeroing_console();
	//Sleep(t);
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i - 3][j] = person[i - 7][j - 1];

		}

	}

	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}

	zeroing_console();
	//Sleep(t);
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i - 2][j] = person[i - 7][j - 1];

		}

	}

	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}

	zeroing_console();
	//Sleep(t);
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i - 1][j] = person[i - 7][j - 1];

		}

	}

	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}

	zeroing_console();
	//Sleep(t);
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];

		}

	}

	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}

	for (int i = 10; i >= 0; i--)
	{
		for (int j = 0; j < w; j++)
		{
			if (i == 0) {
				person[i][j] = ' ';
			}
			else { person[i][j] = person[i - 1][j]; }



		}

	}

	person[11][3] = '_';
	person[11][4] = '\\';
	person[11][5] = '/';
	person[11][6] = '_';

	//Sleep(t);
	//system("cls");

	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}

	zeroing_pers();
	zeroing_console();
	//Sleep(t);
	//system("cls");

	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}

	//Sleep(t);
	//system("cls");

}

void throwBall(int t) {
	zeroing_console();
	zeroing_pers();
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);
	
	person[8][9] = '-';
	person[7][8] = '\\';
	person[7][9] = 'o';
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_pers();
	person[6][9] = 'o';

	person[7][9] = ' ';
	person[7][9] = '-';
	person[8][9] = ' ';
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	person[5][9] = 'o';
	person[6][8] = '-';
	person[6][9] = '-';
	person[7][8] = ' ';
	person[7][9] = ' ';
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	person[4][9] = 'o';
	person[5][9] = ' ';
	person[6][9] = '/';
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	person[3][9] = 'o';
	person[4][9] = ' ';
	person[6][9] = '-';
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);




	person[2][9] = 'o';
	person[3][9] = ' ';
	person[6][9] = ' ';
	person[7][9] = '\\';
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	person[1][9] = 'o';
	person[2][9] = ' ';
	person[6][8] = ' ';
	person[7][9] = ' ';
	person[7][8] = '\\';
	person[8][9] = '\\';

	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	person[0][9] = 'o';
	person[1][9] = ' ';

	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	person[0][9] = ' ';


	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[6][9] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[5][8] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[4][7] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[3][6] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[3][5] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[4][4] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[5][3] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");
	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[6][2] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");



	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[7][1] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");



	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[8][1] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");

	person[6][1] = '-';
	person[7][0] = '/';
	person[8][0] = ' ';
	person[7][1] = ' ';

	//person[6][0] = '\\';

	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[9][1] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");

	person[6][0] = '-';
	person[7][0] = ' ';

	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[10][1] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");

	person[6][0] = '\\';


	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[11][1] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");

	person[6][0] = '-';

	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[12][1] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);

	zeroing_console();
	//system("cls");
	person[6][1] = ' ';
	person[6][0] = ' ';
	person[7][1] = '/';
	person[7][0] = '-';

	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[13][1] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}


	zeroing_console();
	person[7][0] = ' ';
	person[8][0] = '-';

	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}
	cons[14][1] = 'o';
	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}

	zeroing_console();
	zeroing_pers();

	for (int i = 7; i < hc - 1; i++) {
		for (int j = 1; j < w; j++) {
			cons[i][j] = person[i - 7][j - 1];
		}
	}

	for (int i = 0; i < hc; i++) {
		for (int j = 0; j < wc; j++) {
			cout << cons[i][j];
		}
		cout << endl;
	}
	//Sleep(t);
	////system("cls");
}