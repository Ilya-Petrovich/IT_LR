#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
	int i, j, s;
	s = 0;
	char chars[12][10] = {
	{' ',' ',' ','_','[',']','_',' ',' ',' '},
	{' ',' ',' ','|','~','~','|',' ',' ',' '},
	{' ',' ',' ','|','o','q','|',' ',' ',' '},
	{' ',' ','(','|','<','>','|',')',' ',' '},
	{' ',' ',' ','\\','-','-','/',' ',' ',' '},
	{' ',' ',' ','_','>','<','_',' ',' ',' '},
	{' ',' ','-','\\','.',' ','/','-',' ',' '},
	{' ','/',' ','|','.',' ','|',' ','\\',' '},
	{'/',' ',' ','|','.',' ','|',' ',' ','\\'},
	{' ',' ',' ','|','_','_','|',' ',' ',' '},
	{' ',' ',' ',' ','|','|',' ',' ',' ',' '},
	{' ',' ',' ','_','|','|','_',' ',' ',' '}
	};
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//первая

	chars[7][0] = '/', chars[7][9] = '\\', chars[6][1] = '-', chars[6][8] = '-',
		chars[8][0] = ' ', chars[7][8] = ' ', chars[8][9] = ' ', chars[7][1] = ' ';
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//вторая

	//system("cls");


	chars[7][1] = '/', chars[8][0] = '/', chars[6][9] = '-',
		chars[6][1] = ' ', chars[7][0] = ' ', chars[7][9] = ' ';

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//третья

	//system("cls");


	chars[7][0] = '/', chars[6][1] = '-', chars[5][9] = '/',
		chars[8][0] = ' ', chars[7][1] = ' ', chars[6][9] = ' ';

	for (int i = 0; i < 12; i++)
	{

		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//четвертая

	//system("cls");

	chars[8][0] = '/', chars[7][1] = '/', chars[5][8] = '/', chars[4][9] = '/',
		chars[7][0] = ' ', chars[6][1] = ' ', chars[6][8] = ' ', chars[5][9] = ' ';

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//пятая

	//system("cls");

	chars[7][0] = '/', chars[6][1] = '-', chars[4][9] = '*',
		chars[8][0] = ' ', chars[7][1] = ' ';

	for (int i = 0; i < 12; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//шестая

	//system("cls");

	chars[6][0] = '-', chars[4][9] = '/',
		chars[7][0] = ' ';

	for (int i = 0; i < 12; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//седьмая

	//system("cls");

	chars[5][0] = '\\', chars[4][9] = '*',
		chars[6][0] = ' ';

	for (int i = 0; i < 12; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//восьмая

	//system("cls");

	chars[4][0] = '\\', chars[5][1] = '\\', chars[4][9] = '/',
		chars[6][1] = ' ', chars[5][0] = ' ';

	for (int i = 0; i < 12; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//девятая

	//system("cls");

	chars[4][0] = '*', chars[5][1] = '\\', chars[4][9] = '*';

	for (int i = 0; i < 12; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//десятая

	//system("cls");

	chars[5][0] = '*', chars[6][1] = '-', chars[5][9] = '*', chars[6][8] = '-',
		chars[4][0] = ' ', chars[4][9] = ' ', chars[5][1] = ' ', chars[5][8] = ' ';

	for (int i = 0; i < 12; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//одиннадцатая

	//system("cls");

	chars[6][0] = '*', chars[6][9] = '*',
		chars[5][0] = ' ', chars[5][9] = ' ';

	for (int i = 0; i < 12; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//двенадцатая
	//system("cls");

	chars[7][0] = '*', chars[7][9] = '*',
		chars[6][0] = ' ', chars[6][9] = ' ';

	for (int i = 0; i < 12; i++)
	{
	
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//тринадцатая

	//system("cls");

	chars[8][0] = '*', chars[8][9] = '*', chars[7][1] = '/', chars[7][8] = '\\',
		chars[7][0] = ' ', chars[7][9] = ' ', chars[6][1] = ' ', chars[6][8] = ' ';

	for (int i = 0; i < 12; i++)
	{
	
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//четырнадцатая

	//system("cls");

	chars[8][0] = '/', chars[8][9] = '\\';
	for (int i = 0; i < 12; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//первая


	//system("cls");
	chars[7][0] = '/', chars[7][9] = '\\', chars[6][1] = '-', chars[6][8] = '-',
		chars[8][0] = ' ', chars[7][8] = ' ', chars[8][9] = ' ', chars[7][1] = ' ';

	for (int i = 0; i < 12; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//вторая
	//system("cls");


	chars[7][1] = '/', chars[8][0] = '/', chars[6][9] = '-',
		chars[6][1] = ' ', chars[7][0] = ' ', chars[7][9] = ' ';

	for (int i = 0; i < 12; i++)
	{
	
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//третья

	//system("cls");


	chars[7][0] = '/', chars[6][1] = '-', chars[5][9] = '/',
		chars[8][0] = ' ', chars[7][1] = ' ', chars[6][9] = ' ';

	for (int i = 0; i < 12; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//четвертая
	//system("cls");

	chars[8][0] = '/', chars[7][1] = '/', chars[5][8] = '/', chars[4][9] = '/',
		chars[7][0] = ' ', chars[6][1] = ' ', chars[6][8] = ' ', chars[5][9] = ' ';

	for (int i = 0; i < 12; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//пятая
	//system("cls");

	chars[7][0] = '/', chars[6][1] = '-', chars[4][9] = '*',
		chars[8][0] = ' ', chars[7][1] = ' ';

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//шестая
	//system("cls");

	chars[6][0] = '-', chars[4][9] = '/',
		chars[7][0] = ' ';

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//седьмая
	//system("cls");

	chars[5][0] = '\\', chars[4][9] = '*',
		chars[6][0] = ' ';

	for (int i = 0; i < 12; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//восьмая
	//system("cls");

	chars[4][0] = '\\', chars[5][1] = '\\', chars[4][9] = '/',
		chars[6][1] = ' ', chars[5][0] = ' ';

	for (int i = 0; i < 12; i++)
	{
		

		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//девятая
	//system("cls");

	chars[4][0] = '*', chars[5][1] = '\\', chars[4][9] = '*';

	for (int i = 0; i < 12; i++)
	{
	

		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//десятая
	//system("cls");

	chars[5][0] = '*', chars[6][1] = '-', chars[5][9] = '*', chars[6][8] = '-',
		chars[4][0] = ' ', chars[4][9] = ' ', chars[5][1] = ' ', chars[5][8] = ' ';

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//одиннадцатая
	//system("cls");

	chars[6][0] = '*', chars[6][9] = '*',
		chars[5][0] = ' ', chars[5][9] = ' ';

	for (int i = 0; i < 12; i++)
	{

		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//двенадцатая
	//system("cls");
	chars[7][0] = '*', chars[7][9] = '*',
		chars[6][0] = ' ', chars[6][9] = ' ';

	for (int i = 0; i < 12; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//тринадцатая
	//system("cls");

	chars[8][0] = '*', chars[8][9] = '*', chars[7][1] = '/', chars[7][8] = '\\',
		chars[7][0] = ' ', chars[7][9] = ' ', chars[6][1] = ' ', chars[6][8] = ' ';

	for (int i = 0; i < 12; i++)
	{
	
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//четырнадцатая
	//system("cls");

	chars[8][0] = '/', chars[8][9] = '\\';
	for (int i = 0; i < 12; i++)
	{
	
		for (int j = 0; j < 10; j++)
		{
			cout << chars[i][j];
		}
		cout << endl;
	}
	//первая

	return 0;
}