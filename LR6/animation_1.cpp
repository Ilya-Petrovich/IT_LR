#include <iostream>
#include "unistd.h"

using namespace std;

class Person
{
public:
	int AnimNum = 0;
	int CyclesCount = 0;

public:
	string **BaseState = new string *[12];

public:
	void Print(string substring1 = "", string substring2 = "")
	{
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				cout << BaseState[i][j];
			}
			cout << "\n";
		}
	}

	void BasicAnimation()
	{
		switch (AnimNum)
		{
		case 0:
			BaseState[6][2] = "-";
			BaseState[6][9] = "-";
			BaseState[7][2].swap(BaseState[7][1]);
			BaseState[7][10] = " ";
			BaseState[7][9].swap(BaseState[7][10]);
			BaseState[8][1] = " ";
			BaseState[8][10] = "";

			AnimNum++;
			break;

		case 1:
			BaseState[6][2] = " ";
			BaseState[6][10] = "-";
			BaseState[7][2].swap(BaseState[7][1]);
			BaseState[7][10] = " ";
			BaseState[8][1] = "/";

			AnimNum++;
			break;
		case 2:
			BaseState[5][10] = "/";
			BaseState[6][2] = "-";
			BaseState[6][9] = "-";
			BaseState[6][10] = " ";
			BaseState[7][2].swap(BaseState[7][1]);
			BaseState[8][1] = " ";

			AnimNum++;
			break;
		case 3:
			BaseState[4][10] = "/";
			BaseState[5][10].swap(BaseState[5][9]);
			BaseState[6][2] = " ";
			BaseState[6][9] = " ";
			BaseState[7][10] = " ";
			BaseState[7][2].swap(BaseState[7][1]);
			BaseState[8][1] = "/";

			AnimNum++;
			break;

		case 4:
			BaseState[4][10] = "*";
			BaseState[6][2] = "-";
			BaseState[7][2].swap(BaseState[7][1]);
			BaseState[8][1] = " ";

			AnimNum++;
			break;

		case 5:
			BaseState[4][10] = "/";
			BaseState[6][1] = "-";
			BaseState[7][1] = " ";

			AnimNum++;
			break;

		case 6:
			BaseState[4][10] = "*";
			BaseState[5][1] = "\\";
			BaseState[6][1] = " ";

			AnimNum++;
			break;

		case 7:
			BaseState[4][10] = "/";

			BaseState[4][1] = "\\";
			BaseState[6][2] = " ";
			BaseState[5][1].swap(BaseState[5][2]);

			AnimNum++;
			break;

		case 8:
			BaseState[4][1] = "*";
			BaseState[4][10] = "*";

			AnimNum++;
			break;

		case 9:
			BaseState[4][1].swap(BaseState[5][1]);
			BaseState[4][10].swap(BaseState[5][10]);
			BaseState[5][2] = " ";
			BaseState[5][9] = " ";
			BaseState[6][2] = "-"; ///// ПЛЕЧИ 2->3
			BaseState[6][9] = "-"; /////

			AnimNum++;
			break;

		case 10:
			BaseState[5][1].swap(BaseState[6][1]);
			BaseState[5][10].swap(BaseState[6][10]);

			AnimNum++;
			break;

		case 11:
			BaseState[6][1].swap(BaseState[7][1]);
			BaseState[6][10].swap(BaseState[7][10]);

			AnimNum++;
			break;

		case 12:
			BaseState[6][2] = " "; ///// ПЛЕЧИ 3->2
			BaseState[6][9] = " "; /////

			BaseState[7][2] = "/"; ///// ПЛЕЧИ 3->2
			BaseState[7][9] = "\\";

			BaseState[7][1].swap(BaseState[8][1]);
			BaseState[7][10].swap(BaseState[8][10]);
			BaseState[7][10] = " ";

			AnimNum++;
			break;

		case 13:
			BaseState[8][1] = "/";
			BaseState[8][10] = "\\";
			CyclesCount++;

			AnimNum = 0;
			break;
		}
	}
};

int main()
{
	Person person;

	for (int i = 0; i < 12; i++)
		person.BaseState[i] = new string[11];

	string strs[12];

	strs[0] = new char[12]{"    ()()   "};
	strs[1] = new char[12]{"    ()()   "};
	strs[2] = new char[12]{"    ()()   "};
	strs[3] = new char[12]{"    |..|   "};
	strs[4] = new char[12]{"   \\|  |/  "};
	strs[5] = new char[12]{"   /|UU|\\  "};
	strs[6] = new char[12]{"   --\\/--  "};
	strs[7] = new char[12]{"  /  ||  \\ "};
	strs[8] = new char[12]{" /   ||   \\"};
	strs[9] = new char[12]{"     /\\    "};
	strs[10] = new char[12]{"     ||    "};
	strs[11] = new char[12]{"    _||_   "};

	for (size_t i = 0; i < 12; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			person.BaseState[i][j] = strs[i][j];
		}
	}

	while (person.CyclesCount < 2)
	{
		person.BasicAnimation();
		person.Print();
	}
}