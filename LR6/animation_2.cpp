#include <iostream>
#include "unistd.h"

using namespace std;

template <typename T>
void printAnim(T person);
// int Speed = 1000;			   //////remove
// void CursorToStart(int y = 0); ///////remove

class Location
{

public:
	string **BaseState = new string *[20];
	int Height = 40;
	int Width = 20;

public:
	Location()
	{
		Reload();
	}

public:
	void Reload()
	{
		for (int i = 0; i < 20; i++)
			BaseState[i] = new string[40];

		string strs[20];

		strs[0] = new char[41]{"****************************************"};
		strs[1] = new char[41]{"*                                      *"};
		strs[2] = new char[41]{"*                                      *"};
		strs[3] = new char[41]{"*                                      *"};
		strs[4] = new char[41]{"*                                      *"};
		strs[5] = new char[41]{"*                                      *"};
		strs[6] = new char[41]{"*                                      *"};
		strs[7] = new char[41]{"*                                      *"};
		strs[8] = new char[41]{"*                                      *"};
		strs[9] = new char[41]{"*                                      *"};
		strs[10] = new char[41]{"*                                      *"};
		strs[11] = new char[41]{"*                                      *"};
		strs[12] = new char[41]{"*                                      *"};
		strs[13] = new char[41]{"*                                      *"};
		strs[14] = new char[41]{"*                                      *"};
		strs[15] = new char[41]{"*                                      *"};
		strs[16] = new char[41]{"*                                      *"};
		strs[17] = new char[41]{"*                                      *"};
		strs[18] = new char[41]{"*                                      *"};
		strs[19] = new char[41]{"****************************************"};

		for (size_t i = 0; i < 20; i++)
		{
			for (size_t j = 0; j < 40; j++)
			{
				BaseState[i][j] = strs[i][j];
			}
		}
	}

	void Load(string **state, int personWidth, int personHeight, int PosX, int PosY)
	{
		for (int i = 0; i < personWidth; i++)
		{
			for (int j = 0; j < personHeight + 1; j++)
			{
				if (j == 0)
					continue;

				if (state[i][j] == "")
					BaseState[i + PosY][j + PosX] = " ";
				else
					BaseState[i + PosY][j + PosX] = state[i][j];
			}
		}
	}
	void Print()
	{
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 40; j++)
			{
				cout << BaseState[i][j];
			}
			cout << "\n";
		}
	}

	template <typename T>
	void printAnim(T player)
	{
		Reload();
		Load(player.BaseState, player.Width, player.Height + 1, player.PosX, player.PosY);
		// Sleep(Speed);
		// CursorToStart();
		Print();
	}
};

class Person
{
public:
	int AnimNum = 0;
	int CyclesCount = 0;
	int Width = 12;
	int Height = 10;

public:
	string **BaseState = new string *[12];

public:
	Person()
	{
		Reload();
	}

public:
	void Reload()
	{
		for (int i = 0; i < 12; i++)
			BaseState[i] = new string[11];

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
			for (size_t j = 0; j < 11; j++)
			{
				BaseState[i][j] = strs[i][j];
			}
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
			BaseState[7][9].swap(BaseState[7][10]);
			BaseState[8][1] = " ";
			BaseState[8][10] = " ";

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

	void RunAnimation(int anim)
	{
		switch (anim)
		{
		case 100: // right leg "\"

			BaseState[10][6] = " ";
			BaseState[10][7] = "\\";
			BaseState[11][6] = " ";
			BaseState[11][7] = " ";
			BaseState[11][8] = "\\";
			BaseState[11][9] = "_";
			break;

		case 102: // right leg "|"
			BaseState[10][5] = " ";
			BaseState[10][4] = "/";
			BaseState[11][4] = " ";
			BaseState[11][5] = " ";
			BaseState[11][3] = "/";
			BaseState[11][2] = "_";
			break;

		case 101: // left leg "/"

			BaseState[10][6] = "|";
			BaseState[11][6] = "|";
			BaseState[11][7] = "_";
			BaseState[11][8] = " ";
			BaseState[10][7] = " ";
			BaseState[11][9] = " ";
			break;

		case 103: // left leg "|"

			BaseState[10][5] = "|";
			BaseState[10][4] = " ";
			BaseState[11][5] = "|";
			BaseState[11][4] = "_";
			BaseState[11][3] = " ";
			BaseState[11][2] = " ";
			break;
		}
	}
	void SitAnimation()
	{
		switch (AnimNum)
		{
		case 0:
			BaseState[Width - 2][5] = "";
			BaseState[Width - 2][6] = "";
			BaseState[Width - 2][4] = "_";
			BaseState[Width - 2][7] = "_";
			BaseState[Width - 2][5] = "\\";
			BaseState[Width - 2][6] = "/";
			// BaseState[Width - 3][4] = "_";
			// BaseState[Width - 3][7] = "_";

			AnimNum++;
			break;

		case 1:
			Reload();
			AnimNum = 0;
			break;
		}
	}
	void JumpAnimation()
	{
		BaseState[Width - 1][4] = "";
		BaseState[Width - 1][7] = "";
	}

	void FallAnimation()
	{
		AnimNum++;
		if (AnimNum == 5)
			AnimNum = 0;
	}

	void ThrowAnimation()
	{
		switch (AnimNum)
		{
		case 0:
			BaseState[8][Height] = "-";
			AnimNum++;
			break;

		case 1:
			BaseState[7][Height] = "-";
			BaseState[8][Height] = " ";
			AnimNum++;
			break;

		case 2:
			BaseState[6][Height] = "-";
			BaseState[6][Height - 1] = "-";
			BaseState[7][Height - 1] = " ";
			BaseState[7][Height] = " ";
			AnimNum++;
			break;

		case 3:
			BaseState[6][Height] = "/";
			AnimNum++;
			break;

		case 4:
			BaseState[6][Height] = "-";
			AnimNum++;
			break;

		case 5:
			BaseState[6][Height] = " ";
			BaseState[7][Height] = "\\";
			AnimNum++;
			break;

		case 6:
			BaseState[6][Height - 1] = " ";
			BaseState[7][Height - 1] = "\\";
			BaseState[7][Height] = " ";
			BaseState[8][Height] = "\\";
			AnimNum++;
			break;

		case 7:
			AnimNum = 0;
			break;
		}
	}

	void CatchAnimation()
	{
		switch (AnimNum)
		{
		case 2:
			BaseState[6][2] = "-";
			BaseState[7][1] = "/";
			BaseState[7][2] = " ";
			BaseState[8][1] = " ";
			AnimNum++;
			break;

		case 3:
			BaseState[7][1] = " ";
			BaseState[6][1] = "-";
			AnimNum++;
			break;

		case 4:
			BaseState[6][1] = "\\";
			AnimNum++;
			break;

		case 5:
			BaseState[6][1] = "-";
			BaseState[6][2] = "-";
			AnimNum++;
			break;

		case 6:
			BaseState[6][1] = " ";
			BaseState[6][2] = " ";
			BaseState[7][1] = "-";
			BaseState[7][2] = "/";
			AnimNum++;
			break;

		case 7:
			BaseState[8][1] = "-";
			BaseState[7][1] = " ";
			AnimNum++;
			break;

		case 8:
			BaseState[8][1] = "/";
			BaseState[7][1] = " ";
			AnimNum = 0;
			break;

		default:
			AnimNum++;
			break;
		}
	}
};

class Ball
{
public:
	int PosX = 0;
	int PosY = 0;
	int AnimNum = 0;
	int Width = 1;
	int Height = 1;

public:
	string **BaseState;

public:
	Ball(string ball)
	{
		BaseState = new string *[1];
		BaseState[0] = new string[2];
		BaseState[0][0] = " ";
		BaseState[0][1] = ball;
	}
};

template <typename T>
void PrintLocation(Location location, T object, int i = 0, int j = 7)
{
	// CursorToStart();
	location.Load(object.BaseState, object.Width, object.Height, i, j);
	location.Print();
}

template <typename T, typename TT>
void PrintLocation(Location location, Person person, T object, TT object2, int i, int j)
{
	// CursorToStart();
	location.Reload();
	location.Load(person.BaseState, person.Width, person.Height, 0, 7);
	if (j != 15)
		location.Load(object.BaseState, object.Width, object.Height, i, j);
	location.Print();
	// Sleep(Speed / 2);
	// CursorToStart();
	// location.Load(object2.BaseState, object2.Width, object2.Height, i, j);
	// location.Print();
}

void PersonSit(Location location, Person person)
{
	for (int i = 0; i < 2; i++)
	{
		person.SitAnimation();
		location.Reload();
		location.Load(person.BaseState, person.Width - 1 + i, person.Height, 0, 8 - i);
		// CursorToStart();
		location.Print();
		// Sleep(Speed);
	}
}

void PersonJump(Location location, Person person)
{
	for (int i = 0; i < 5; i++)
	{
		person.JumpAnimation();
		location.Reload();
		PrintLocation(location, person, 0, 7 - i);
		// Sleep(Speed);
	}

	for (int i = 1; i < 5; i++)
	{
		person.FallAnimation();
		location.Reload();
		PrintLocation(location, person, 0, 3 + i);
		// Sleep(Speed);
	}
}

// void hideCursor(bool flag) /////remove
// {
// 	void *handle = GetStdHandle(STD_OUTPUT_HANDLE);
// 	CONSOLE_CURSOR_INFO structCursorInfo;
// 	GetConsoleCursorInfo(handle, &structCursorInfo);
// 	if (!flag)
// 		structCursorInfo.bVisible = TRUE;
// 	else
// 		structCursorInfo.bVisible = FALSE;
// 	SetConsoleCursorInfo(handle, &structCursorInfo);
// }

void ShowMenu()
{
	cout << "Choose animation:" << endl;
	cout << "Dance: \t\t\t1" << endl;
	cout << "Run: \t\t\t2" << endl;
	cout << "Sit down and jump: \t3" << endl;
	cout << "Throw a ball: \t\t4" << endl
		 << endl;
	cout << "Enter 5 for exit." << endl;
}

// void startAction(Location location, Person person, int i = 1, int j = 7)
// { /////remove
// 	PrintLocation(location, person, i, j);
// 	Sleep(Speed);
// 	hideCursor(true);
// }

// void endAction()
// { /////remove
// 	// system("cls");
// 	CursorToStart(2);
// 	ShowMenu();
// 	CursorToStart(12);
// 	cout << " ";
// 	CursorToStart(12);
// 	hideCursor(false);
// 	///
// 	system("cls");
// 	cout << "Hello\n\n";
// 	ShowMenu();
// }

// void CursorToStart(int y) /////remove
// {
// 	COORD coord;
// 	coord.X = 0;
// 	coord.Y = y;
// 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
// }

int main()
{
	Person person;
	Location location;
	Ball ball("o");
	Ball delBall(" ");
	int action;

	ShowMenu();

	while (true)
	{
		cin >> action;

		switch (action)
		{
		case 5:
			return 0;

		case 1:
			person.Reload();
			// startAction(location, person);
			PrintLocation(location, person, 0, 7); /////added
			while (person.CyclesCount < 2)
			{
				// Sleep(Speed);
				person.BasicAnimation();
				PrintLocation(location, person, 0, 7);
			}
			person.CyclesCount = 0;
			// endAction();
			ShowMenu();
			break;

		case 2:
			person.Reload();
			// startAction(location, person);
			PrintLocation(location, person, 0, 7); /////added
			for (int i = 3; i < location.Width * 4 + 7; i++)
			{
				location.Reload();
				switch (i % 3)
				{
				case 0:
					person.RunAnimation(100);
					break;
				case 1:
					person.RunAnimation(101);
					person.RunAnimation(102);
					break;
				case 2:
					person.RunAnimation(103);
					break;
				}

				location.Load(person.BaseState, person.Width, person.Height, (i - 1) / 3, 7);
				location.Print();
				// Sleep(Speed);
				// CursorToStart();
			}
			for (int i = location.Width * 4 + 4; i > 0; i--)
			{
				location.Reload();
				switch (i % 3)
				{
				case 1:
					person.RunAnimation(101);
					break;
				case 2:
					person.RunAnimation(103);
					person.RunAnimation(100);
					break;
				case 0:
					person.RunAnimation(102);
					break;
				}
				location.Load(person.BaseState, person.Width, person.Height, i / 3, 7);
				// Sleep(Speed);
				// CursorToStart();
				location.Print();
			}
			// endAction();
			ShowMenu();
			break;

		case 3:
			person.Reload();
			// startAction(location, person);
			PrintLocation(location, person, 0, 7); /////added

			for (size_t i = 0; i < 2; i++)
			{
				person.SitAnimation();
				location.Reload();
				location.Load(person.BaseState, person.Width - 1 + i, person.Height, 0, 8 - i);
				// Sleep(Speed);
				// CursorToStart();
				if (i == 0)
					location.Print();
			}

			PersonJump(location, person);
			PersonSit(location, person);
			// endAction();
			ShowMenu();
			break;

		case 4:
			person.Reload();
			// startAction(location, person);
			PrintLocation(location, person, 0, 7); /////added

			for (int i = 0; i < 8; i++)
			{
				person.ThrowAnimation();
				PrintLocation(location, person, ball, delBall, person.Height - 1, 14 - i);
			}
			for (int i = 0; i < 4; i++)
			{
				PrintLocation(location, person, ball, delBall, person.Height - 2 - i, 6 - i);
			}
			PrintLocation(location, person, ball, delBall, person.Height - 6, 3);
			for (int i = 1; i < 4; i++)
			{
				PrintLocation(location, person, ball, delBall, person.Height - 6 - i, 3 + i);
			}
			for (int i = 0; i < 9; i++)
			{
				person.CatchAnimation();
				PrintLocation(location, person, ball, delBall, person.Height - 10, 7 + i);
			}
			// endAction();
			ShowMenu();
			break;
		}
	}
}