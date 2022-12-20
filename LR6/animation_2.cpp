#include <stdio.h>
#include <iostream>
using namespace std;


int main() {
	int i, j, number;
	char chars[20][40] = {
		{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*', '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','_','[',']','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','|','~','~','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','|','o','q','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ','(','|','<','>','|',')',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','\\','-','-','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','_','>','<','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ','-','\\','.',' ','/','-',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ','/',' ','|','.',' ','|',' ','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*','/',' ',' ','|','.',' ','|',' ',' ','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','|','_','_','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ','|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','_','|','|','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*', '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}
	};
	char chars1[20][40] = {
		{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*', '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','_','[',']','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','|','~','~','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','|','o','q','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ','(','|','<','>','|',')',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','\\','-','-','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','_','>','<','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ','-','\\','.',' ','/','-',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ','/',' ','|','.',' ','|',' ','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*','/',' ',' ','|','.',' ','|',' ',' ','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','|','_','_','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*',' ',' ',' ','_','\\','/','_',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
		{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*', '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}
	};

	cout << "Choose animation:" << endl;
	cout << "Dance: \t\t\t1" << endl;
	cout << "Run: \t\t\t2" << endl;
	cout << "Sit down and jump: \t3" << endl;
	cout << "Throw a ball: \t\t4" << endl << endl;
	cout << "Enter 5 for exit." << endl;

	cin >> number;

	system("cls");

	if (number == 1) {

		for (int i = 0; i < 20; i++)
		{
			//cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//1


		//system("cls");

		chars[13][2] = '-', chars[13][9] = '-', chars[14][1] = '/', chars[14][10] = '\\',
			chars[14][2] = ' ', chars[15][1] = ' ', chars[14][9] = ' ', chars[15][10] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//2

		//system("cls");

		chars[14][2] = '/', chars[13][10] = '-', chars[15][1] = '/',
			chars[13][2] = ' ', chars[14][1] = ' ', chars[14][10] = ' ';
		for (int i = 0; i < 20; i++)
		{
			//cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//3

		//system("cls");

		chars[13][2] = '-', chars[14][1] = '/', chars[12][10] = '/',
			chars[14][2] = ' ', chars[15][1] = ' ', chars[14][9] = ' ', chars[13][10] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//4

	//	system("cls");

		chars[14][2] = '/', chars[15][1] = '/', chars[12][9] = '/', chars[11][10] = '/',
			chars[13][2] = ' ', chars[14][1] = ' ', chars[13][9] = ' ', chars[12][10] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//	cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//5

//		system("cls");

		chars[14][1] = '/', chars[13][2] = '-', chars[11][10] = '*',
			chars[14][2] = ' ', chars[15][1] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//			cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//6

//		system("cls");

		chars[13][1] = '-', chars[11][10] = '/',
			chars[14][1] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//7

//		system("cls");

		chars[12][1] = '\\', chars[11][10] = '*',
			chars[13][1] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//8

	//	system("cls");

		chars[11][1] = '\\', chars[12][2] = '\\', chars[11][10] = '/',
			chars[12][1] = ' ', chars[13][2] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//9

	//	system("cls");

		chars[11][1] = '*', chars[11][10] = '*';

		for (int i = 0; i < 20; i++)
		{
			//			cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//10

	//	system("cls");

		chars[12][1] = '*', chars[13][9] = '-', chars[12][10] = '*', chars[13][2] = '-',
			chars[11][1] = ' ', chars[12][2] = ' ', chars[11][10] = ' ', chars[12][9] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//11

	//	system("cls");

		chars[13][1] = '*', chars[13][10] = '*',
			chars[12][1] = ' ', chars[12][10] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//12

		//system("cls");

		chars[14][1] = '*', chars[14][10] = '*',
			chars[13][1] = ' ', chars[13][10] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//			cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//13
//		system("cls");

		chars[15][1] = '*', chars[15][10] = '*', chars[14][2] = '/', chars[14][9] = '\\',
			chars[14][1] = ' ', chars[14][10] = ' ', chars[13][2] = ' ', chars[13][9] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//			cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//14

	//	system("cls");

		chars[15][1] = '/', chars[15][10] = '\\';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//15


		//1

	//	system("cls");

		chars[13][2] = '-', chars[13][9] = '-', chars[14][1] = '/', chars[14][10] = '\\',
			chars[14][2] = ' ', chars[15][1] = ' ', chars[14][9] = ' ', chars[15][10] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//			cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//2

	//	system("cls");

		chars[14][2] = '/', chars[13][10] = '-', chars[15][1] = '/',
			chars[13][2] = ' ', chars[14][1] = ' ', chars[14][10] = ' ';
		for (int i = 0; i < 20; i++)
		{
			//			cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//3

//		system("cls");

		chars[13][2] = '-', chars[14][1] = '/', chars[12][10] = '/',
			chars[14][2] = ' ', chars[15][1] = ' ', chars[14][9] = ' ', chars[13][10] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//			cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//4

	//	system("cls");

		chars[14][2] = '/', chars[15][1] = '/', chars[12][9] = '/', chars[11][10] = '/',
			chars[13][2] = ' ', chars[14][1] = ' ', chars[13][9] = ' ', chars[12][10] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//5

	//	system("cls");

		chars[14][1] = '/', chars[13][2] = '-', chars[11][10] = '*',
			chars[14][2] = ' ', chars[15][1] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//6

	//	system("cls");

		chars[13][1] = '-', chars[11][10] = '/',
			chars[14][1] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//7

	//	system("cls");

		chars[12][1] = '\\', chars[11][10] = '*',
			chars[13][1] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//8

	//	system("cls");

		chars[11][1] = '\\', chars[12][2] = '\\', chars[11][10] = '/',
			chars[12][1] = ' ', chars[13][2] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//	cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//9

	//	system("cls");

		chars[11][1] = '*', chars[11][10] = '*';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//10

//system("cls");

		chars[12][1] = '*', chars[13][9] = '-', chars[12][10] = '*', chars[13][2] = '-',
			chars[11][1] = ' ', chars[12][2] = ' ', chars[11][10] = ' ', chars[12][9] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//11

	//	system("cls");

		chars[13][1] = '*', chars[13][10] = '*',
			chars[12][1] = ' ', chars[12][10] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//12

	//	system("cls");

		chars[14][1] = '*', chars[14][10] = '*',
			chars[13][1] = ' ', chars[13][10] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//13

//system("cls");

		chars[15][1] = '*', chars[15][10] = '*', chars[14][2] = '/', chars[14][9] = '\\',
			chars[14][1] = ' ', chars[14][10] = ' ', chars[13][2] = ' ', chars[13][9] = ' ';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//14

//system("cls");

		chars[15][1] = '/', chars[15][10] = '\\';

		for (int i = 0; i < 20; i++)
		{
			//		cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}

		//15

	//	system("cls");

		cout << "Choose animation:" << endl;
		cout << "Dance: \t\t\t1" << endl;
		cout << "Run: \t\t\t2" << endl;
		cout << "Sit down and jump: \t3" << endl;
		cout << "Throw a ball: \t\t4" << endl << endl;
		cout << "Enter 5 for exit." << endl;

		cin >> number;

		//system("cls");
	}

	if (number == 2) {
		for (int k = 0; k < 28; k++) {
			for (int i = 0; i < 2; i++)
			{
				//cout << " ";
				for (int j = 0; j < 40; j++)
				{
					cout << chars[i][j];
				}
				cout << endl;
			}

			//1'
			//system("cls");

			chars[17][7 + k] = '\\', chars[18][8 + k] = '\\', chars[18][9 + k] = '_',
				chars[17][6 + k] = ' ', chars[18][6 + k] = ' ', chars[18][7 + k] = ' ';

			for (int i = 0; i < 20; i++)
			{
				//cout << " ";
				for (int j = 0; j < 40; j++)
				{
					cout << chars[i][j];
				}
				cout << endl;
			}

			//2

			//system("cls");

			for (int i = 0; i < 20; i++) {

				for (int j = 0; j < 40; j++) {

					if (chars[i][j] != '*') chars[i][j] = ' ';
				}
			}

			chars[7][5 + k] = '_', chars[8][5 + k] = '|', chars[9][5 + k] = '|', chars[7][7 + k] = ']', chars[8][7 + k] = '~', chars[9][7 + k] = 'q',
				chars[7][6 + k] = '[', chars[8][6 + k] = '~', chars[9][6 + k] = 'o', chars[7][8 + k] = '_', chars[8][8 + k] = '|', chars[9][8 + k] = '|',
				chars[10][5 + k] = '|', chars[10][6 + k] = '<', chars[10][7 + k] = '>', chars[10][8 + k] = '|', chars[10][4 + k] = '(', chars[10][9 + k] = ')',
				chars[11][5 + k] = '\\', chars[11][8 + k] = '/', chars[11][6 + k] = '-', chars[11][7 + k] = '-',
				chars[12][5 + k] = '_', chars[12][6 + k] = '>', chars[12][7 + k] = '<', chars[12][8 + k] = '_',
				chars[13][4 + k] = '-', chars[13][5 + k] = '\\', chars[13][6 + k] = '.', chars[13][8 + k] = '/', chars[13][9 + k] = '-',
				chars[14][3 + k] = '/', chars[14][5 + k] = '|', chars[14][6 + k] = '.', chars[14][8 + k] = '|', chars[14][10 + k] = '\\',
				chars[15][2 + k] = '/', chars[15][5 + k] = '|', chars[15][6 + k] = '.', chars[15][6 + k] = '.', chars[15][8 + k] = '|', chars[15][11 + k] = '\\';
			chars[16][5 + k] = '|', chars[16][6 + k] = '_', chars[16][7 + k] = '_', chars[16][8 + k] = '|',
				chars[17][5 + k] = '/', chars[17][7 + k] = '|',
				chars[18][4 + k] = '/', chars[18][7 + k] = '|', chars[18][3 + k] = '_', chars[18][8 + k] = '_';
			for (int i = 0; i < 20; i++) {
				//cout << " ";

				for (int j = 0; j < 40; j++) {

					cout << chars[i][j];
				}
				cout << endl;
			}

			//3
			//system("cls");

			chars[17][6 + k] = '|', chars[17][7 + k] = '|',
				chars[18][6 + k] = '|', chars[18][7 + k] = '|', chars[18][5 + k] = '_', chars[18][8 + k] = '_',
				chars[17][5 + k] = ' ', chars[18][4 + k] = ' ', chars[18][3 + k] = ' ';


			for (int i = 0; i < 20; i++) {
				//cout << " ";

				for (int j = 0; j < 40; j++) {

					cout << chars[i][j];
				}
				cout << endl;


			}
			//system("cls");
		}

		chars[17][35] = '\\', chars[18][36] = '\\', chars[18][37] = '_', chars[18][34] = ' ', chars[17][34] = ' ', chars[18][35] = ' ';

		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;

		}
		//system("cls");
		for (int i = 0; i < 20; i++) {

			for (int j = 0; j < 40; j++) {

				if (chars[i][j] != '*') chars[i][j] = ' ';
			}
		}
		int k = 26;
		chars[7][5 + k] = '_', chars[8][5 + k] = '|', chars[9][5 + k] = '|', chars[7][7 + k] = ']', chars[8][7 + k] = '~', chars[9][7 + k] = 'q',
			chars[7][6 + k] = '[', chars[8][6 + k] = '~', chars[9][6 + k] = 'o', chars[7][8 + k] = '_', chars[8][8 + k] = '|', chars[9][8 + k] = '|',
			chars[10][5 + k] = '|', chars[10][6 + k] = '<', chars[10][7 + k] = '>', chars[10][8 + k] = '|', chars[10][4 + k] = '(', chars[10][9 + k] = ')',
			chars[11][5 + k] = '\\', chars[11][8 + k] = '/', chars[11][6 + k] = '-', chars[11][7 + k] = '-',
			chars[12][5 + k] = '_', chars[12][6 + k] = '>', chars[12][7 + k] = '<', chars[12][8 + k] = '_',
			chars[13][4 + k] = '-', chars[13][5 + k] = '\\', chars[13][6 + k] = '.', chars[13][8 + k] = '/', chars[13][9 + k] = '-',
			chars[14][3 + k] = '/', chars[14][5 + k] = '|', chars[14][6 + k] = '.', chars[14][8 + k] = '|', chars[14][10 + k] = '\\',
			chars[15][2 + k] = '/', chars[15][5 + k] = '|', chars[15][6 + k] = '.', chars[15][6 + k] = '.', chars[15][8 + k] = '|', chars[15][11 + k] = '\\';
		chars[16][5 + k] = '|', chars[16][6 + k] = '_', chars[16][7 + k] = '_', chars[16][8 + k] = '|',
			chars[17][5 + k] = '/', chars[17][7 + k] = '|',
			chars[18][4 + k] = '/', chars[18][7 + k] = '|', chars[18][3 + k] = '_', chars[18][8 + k] = '_';

		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;

		}
		//system("cls");
		chars[17][5 + k] = ' ', chars[17][7 + k] = '|', chars[17][6 + k] = '|',
			chars[18][4 + k] = ' ', chars[18][7 + k] = '|', chars[18][3 + k] = ' ', chars[18][8 + k] = '_', chars[18][5 + k] = '_', chars[18][6 + k] = '|';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;

		}
		//system("cls");
		chars[17][7 + k] = ' ', chars[17][6 + k] = '|', chars[17][8 + k] = '\\',
			chars[18][7 + k] = ' ', chars[18][8 + k] = ' ', chars[18][5 + k] = '_', chars[18][6 + k] = '|', chars[18][9 + k] = '\\', chars[18][10 + k] = '_';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;

		}
		//system("cls");

		for (int l = 0; l < 27; l++) {
			for (int i = 0; i < 20; i++) {

				for (int j = 0; j < 40; j++) {

					if (chars[i][j] != '*') chars[i][j] = ' ';
				}
			}
			chars[7][30 - l] = '_', chars[8][30 - l] = '|', chars[9][30 - l] = '|', chars[7][32 - l] = ']', chars[8][32 - l] = '~', chars[9][32 - l] = 'q',
				chars[7][31 - l] = '[', chars[8][31 - l] = '~', chars[9][31 - l] = 'o', chars[7][33 - l] = '_', chars[8][33 - l] = '|', chars[9][33 - l] = '|',
				chars[10][30 - l] = '|', chars[10][31 - l] = '<', chars[10][32 - l] = '>', chars[10][33 - l] = '|', chars[10][29 - l] = '(', chars[10][34 - l] = ')',
				chars[11][30 - l] = '\\', chars[11][33 - l] = '/', chars[11][31 - l] = '-', chars[11][32 - l] = '-',
				chars[12][30 - l] = '_', chars[12][31 - l] = '>', chars[12][32 - l] = '<', chars[12][33 - l] = '_',
				chars[13][29 - l] = '-', chars[13][30 - l] = '\\', chars[13][31 - l] = '.', chars[13][33 - l] = '/', chars[13][34 - l] = '-',
				chars[14][28 - l] = '/', chars[14][30 - l] = '|', chars[14][31 - l] = '.', chars[14][33 - l] = '|', chars[14][35 - l] = '\\',
				chars[15][27 - l] = '/', chars[15][30 - l] = '|', chars[15][31 - l] = '.', chars[15][33 - l] = '|', chars[15][36 - l] = '\\';
			chars[16][30 - l] = '|', chars[16][31 - l] = '_', chars[16][32 - l] = '_', chars[16][33 - l] = '|',
				chars[17][30 - l] = '/', chars[17][32 - l] = '|',
				chars[18][29 - l] = '/', chars[18][32 - l] = '|', chars[18][28 - l] = '_', chars[18][33 - l] = '_';
			for (int i = 0; i < 20; i++) {
				//cout << " ";

				for (int j = 0; j < 40; j++) {

					cout << chars[i][j];
				}
				cout << endl;

			}
			//system("cls");
			chars[18][28 - l] = ' ', chars[18][29 - l] = ' ', chars[17][30 - l] = ' ', chars[18][31 - l] = '|', chars[17][31 - l] = '|', chars[18][30 - l] = '_';
			for (int i = 0; i < 20; i++) {
				//cout << " ";

				for (int j = 0; j < 40; j++) {

					cout << chars[i][j];
				}
				cout << endl;
			}
			//system("cls");
			if (l != 26) {
				chars[18][32 - l] = ' ', chars[17][32 - l] = ' ', chars[18][33 - l] = ' ', chars[17][33 - l] = '\\', chars[18][34 - l] = '\\', chars[18][35 - l] = '_';
				for (int i = 0; i < 20; i++) {
					//cout << " ";

					for (int j = 0; j < 40; j++) {

						cout << chars[i][j];
					}
					cout << endl;
				}
			}
		}
		cout << "Choose animation:" << endl;
		cout << "Dance: \t\t\t1" << endl;
		cout << "Run: \t\t\t2" << endl;
		cout << "Sit down and jump: \t3" << endl;
		cout << "Throw a ball: \t\t4" << endl << endl;
		cout << "Enter 5 for exit." << endl;

		cin >> number;
	}

	if (number == 3) {

		for (int i = 0; i < 20; i++) {
			//cout << " ";
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}


		for (int i = 0; i < 20; i++) {
			//cout << " ";
			for (int j = 0; j < 40; j++) {
				cout << chars1[i][j];
			}
			cout << endl;
		}



		for (int k = 0; k < 4; k++) {
			//вверх
			for (int i = 0; i < 20; i++)
			{
				for (int j = 0; j < 40; j++)
				{
					if (chars[i][j] != '*') {
						chars[i][j] = ' ';
					}
				}
			}

			chars[7 - k][4] = '_', chars[7 - k][5] = '[', chars[7 - k][6] = ']', chars[7 - k][7] = '_',
				chars[8 - k][4] = '|', chars[8 - k][5] = '~', chars[8 - k][6] = '~', chars[8 - k][7] = '|',
				chars[9 - k][4] = '|', chars[9 - k][5] = 'o', chars[9 - k][6] = 'q', chars[9 - k][7] = '|',
				chars[10 - k][4] = '|', chars[10 - k][5] = '<', chars[10 - k][6] = '>', chars[10 - k][7] = '|', chars[10 - k][8] = ')', chars[10 - k][3] = '(',
				chars[11 - k][4] = '\\', chars[11 - k][5] = '-', chars[11 - k][6] = '-', chars[11 - k][7] = '/',
				chars[12 - k][4] = '_', chars[12 - k][5] = '>', chars[12 - k][6] = '<', chars[12 - k][7] = '_',
				chars[13 - k][4] = '\\', chars[13 - k][5] = '.', chars[13 - k][6] = ' ', chars[13 - k][7] = '/', chars[13 - k][3] = '-', chars[13 - k][8] = '-',
				chars[14 - k][2] = '/', chars[14 - k][4] = '|', chars[14 - k][7] = '|', chars[14 - k][9] = '\\', chars[14 - k][5] = '.',
				chars[15 - k][1] = '/', chars[15 - k][4] = '|', chars[15 - k][7] = '|', chars[15 - k][10] = '\\', chars[15 - k][5] = '.',
				chars[16 - k][5] = '_', chars[16 - k][6] = '_', chars[16 - k][4] = '|', chars[16 - k][7] = '|',
				chars[17 - k][5] = '|', chars[17 - k][6] = '|',
				chars[18 - k][5] = '|', chars[18 - k][6] = '|';

			for (int i = 0; i < 20; i++) {
				//cout << " ";
				for (int j = 0; j < 40; j++)
				{
					cout << chars[i][j];
				}
				cout << endl;
			}



		}

		for (int k = 0; k < 5; k++) {
			//вниз
			for (int i = 0; i < 20; i++)
			{
				for (int j = 0; j < 40; j++)
				{
					if (chars[i][j] != '*') {
						chars[i][j] = ' ';
					}
				}
			}

			chars[3 + k][4] = '_', chars[3 + k][5] = '[', chars[3 + k][6] = ']', chars[3 + k][7] = '_',
				chars[4 + k][4] = '|', chars[4 + k][5] = '~', chars[4 + k][6] = '~', chars[4 + k][7] = '|',
				chars[5 + k][4] = '|', chars[5 + k][5] = 'o', chars[5 + k][6] = 'q', chars[5 + k][7] = '|',
				chars[6 + k][4] = '|', chars[6 + k][5] = '<', chars[6 + k][6] = '>', chars[6 + k][7] = '|', chars[6 + k][3] = '(', chars[6 + k][8] = ')',
				chars[7 + k][4] = '\\', chars[7 + k][5] = '-', chars[7 + k][6] = '-', chars[7 + k][7] = '/',
				chars[8 + k][4] = '_', chars[8 + k][5] = '>', chars[8 + k][6] = '<', chars[8 + k][7] = '_',
				chars[9 + k][4] = '\\', chars[9 + k][5] = '.', chars[9 + k][6] = ' ', chars[9 + k][7] = '/', chars[9 + k][3] = '-', chars[9 + k][8] = '-',
				chars[10 + k][2] = '/', chars[10 + k][5] = '.', chars[10 + k][6] = ' ', chars[10 + k][7] = '|', chars[10 + k][4] = '|', chars[10 + k][9] = '\\',
				chars[11 + k][1] = '/', chars[11 + k][5] = '.', chars[11 + k][6] = ' ', chars[11 + k][10] = '\\', chars[11 + k][7] = '|', chars[11 + k][4] = '|',
				chars[12 + k][5] = '_', chars[12 + k][6] = '_', chars[12 + k][4] = '|', chars[12 + k][7] = '|',
				chars[13 + k][5] = '|', chars[13 + k][6] = '|',
				chars[14 + k][5] = '|', chars[14 + k][6] = '|';

			for (int i = 0; i < 20; i++) {
				//cout << " ";
				for (int j = 0; j < 40; j++)
				{
					cout << chars[i][j];
				}
				cout << endl;
			}


		}

		for (int i = 0; i < 20; i++) {

			for (int j = 0; j < 40; j++)
			{
				cout << chars1[i][j];
			}
			cout << endl;
		}




		chars[18][4] = '_', chars[18][7] = '_';
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 40; j++)
			{
				cout << chars[i][j];
			}
			cout << endl;
		}
		cout << "Choose animation:" << endl;
		cout << "Dance: \t\t\t1" << endl;
		cout << "Run: \t\t\t2" << endl;
		cout << "Sit down and jump: \t3" << endl;
		cout << "Throw a ball: \t\t4" << endl << endl;
		cout << "Enter 5 for exit." << endl;

		cin >> number;
	}
	if (number == 4) {

		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;


		}
		//system("cls");
		chars[15][10] = '-', chars[14][10] = 'o';

		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;


		}
		//system("cls");
		chars[15][10] = ' ', chars[14][10] = '-', chars[13][10] = 'o';

		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;

		}
		//system("cls");
		chars[14][9] = ' ', chars[13][10] = '-', chars[12][10] = 'o', chars[13][9] = '-', chars[14][10] = ' ';

		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;

		}
		//system("cls");
		chars[13][10] = '/', chars[11][10] = 'o', chars[12][10] = ' ';

		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;

		}
		//system("cls");
		chars[13][10] = '-', chars[10][10] = 'o', chars[11][10] = ' ';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;

		}
		//system("cls");
		chars[14][10] = '\\', chars[9][10] = 'o', chars[13][10] = ' ', chars[10][10] = ' ';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;

		}
		//system("cls");
		chars[14][9] = '\\', chars[8][10] = 'o', chars[14][10] = ' ', chars[13][9] = ' ', chars[15][10] = '\\', chars[9][10] = ' ';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;

		}
		//system("cls");
		chars[7][10] = 'o', chars[8][10] = ' ';
		for (int i = 0; i < 20; i++) {
			cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;

		}
		//system("cls");
		for (int l = 0; l < 4; l++) {

			chars[7 - l][10 - l] = ' ', chars[6 - l][9 - l] = 'o';
			for (int i = 0; i < 20; i++) {
				cout << " ";

				for (int j = 0; j < 40; j++) {

					cout << chars[i][j];
				}
				cout << endl;
			}
			//system("cls");

		}
		system("cls");
		chars[3][5] = 'o', chars[3][6] = ' ';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;


		}
		//system("cls");
		for (int l = 0; l < 4; l++) {

			chars[3 + l][5 - l] = ' ', chars[4 + l][4 - l] = 'o';
			for (int i = 0; i < 20; i++) {
				//cout << " ";

				for (int j = 0; j < 40; j++) {

					cout << chars[i][j];
				}
				cout << endl;


			}
			//system("cls");

		}

		chars[8][1] = 'o', chars[7][1] = ' ';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;
		}

		chars[9][1] = 'o', chars[8][1] = ' ', chars[15][1] = ' ', chars[14][1] = '/', chars[13][2] = '-', chars[14][2] = ' ';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;
		}

		chars[10][1] = 'o', chars[9][1] = ' ', chars[13][1] = '-', chars[14][1] = ' ';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;
		}

		chars[11][1] = 'o', chars[10][1] = ' ', chars[13][1] = '\\';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;
		}

		chars[12][1] = 'o', chars[13][1] = '-', chars[11][1] = ' ';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;
		}

		chars[13][1] = 'o', chars[14][1] = '-', chars[14][2] = '/', chars[13][2] = ' ', chars[12][1] = ' ';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;
		}

		chars[14][1] = 'o', chars[14][2] = '/', chars[13][1] = ' ', chars[15][1] = '-';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;
		}

		chars[14][1] = ' ', chars[15][1] = '/', chars[14][1] = ' ';
		for (int i = 0; i < 20; i++) {
			//cout << " ";

			for (int j = 0; j < 40; j++) {

				cout << chars[i][j];
			}
			cout << endl;
		}
		cout << "Choose animation:" << endl;
		cout << "Dance: \t\t\t1" << endl;
		cout << "Run: \t\t\t2" << endl;
		cout << "Sit down and jump: \t3" << endl;
		cout << "Throw a ball: \t\t4" << endl << endl;
		cout << "Enter 5 for exit." << endl;

		cin >> number;

	}
	if (number == 5)
	{
		return 0;
	}
}
