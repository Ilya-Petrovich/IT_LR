#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;

int Dance();
int Run();
int Jump();
int Ball();
string Probels(int n);
string AnimDance(int n, int &nn, int i);
string AnimRun(int n, int &nn, int i);
string AnimJump(int n, int &nn, int i);
string AnimBall(int n, int &nn, int i);
int main()
{
	int n = 0;
	while (n != 5)
	{
		//system("cls");
		std::cout << "Choose animation:" << std::endl;
		std::cout << "Dance: \t\t\t1" << std::endl;
		std::cout << "Run: \t\t\t2" << std::endl;
		std::cout << "Sit down and jump: \t3" << std::endl;
		std::cout << "Throw a ball: \t\t4" << std::endl << std::endl;
		std::cout << "Enter 5 for exit." << std::endl;
		cin >> n;
		//system("cls");
		switch(n)
		{
			case 1: {Dance(); break;}
			case 2: {Run(); break;}
			case 3: {Jump(); break;}
			case 4: {Ball(); break;}
			case 5: {return 0; break;}		
		}
	}

	return 0;

}



int Dance()
{
	for (int i = 0; i < 29; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			int probel = 0;
			string line_anim = AnimDance(j, probel, i);
			if (j == 0 || j == 19)
				cout << "****************************************\n";
			else
			{
				cout << "*" << line_anim + Probels(38 - probel) << "*" << "\n";
			}			
		}
		//Sleep(800);
		//system("cls");
	}
	return 0;
}

int Run()
{
	int i = 0;
	int begin_prob = 1;
	while (begin_prob != 0 || i < 85){
		if (i % 3 == 2 && i < 85)
			begin_prob++;
		if (i % 3 == 2 && i > 85 || i == 0)
			begin_prob--;
		for (int j = 0; j < 20; j++)
		{
			string line_anim;
			int probel = 0;
			if (begin_prob == 0)
				line_anim = AnimRun(j, probel, 0);
			else
				line_anim = AnimRun(j, probel, i);
			if (j == 0 || j == 19)
				cout << "****************************************\n";
			else
			{
				cout << "*" << Probels(begin_prob) + line_anim + Probels(38 - probel - begin_prob) << "*" << "\n";
			}
		}
		//Sleep(300);
		//system("cls");
		i++;
	}
	return 0;
}

int Jump()
{
	int probel_up = 6;
	for (int i = 0; i < 14; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			int probel = 0;
			string line_anim = "";
			if (j == 0 || j == 19)
				cout << "****************************************\n";
			else
			{
				int ii = probel_up+1;
				if (j <= probel_up || j >= 19 - (6 - probel_up)
				)
				{
					line_anim = "";
					probel = line_anim.size();			
				}
				else
					line_anim = AnimJump(j-probel_up-1, probel, i);
				cout << "*" + line_anim + Probels(38-probel) + "*\n";
			}
		}
		if (probel_up > 2 && i <= 6 && i > 1)
			probel_up--;
		if (probel_up < 6 && i > 6)
			probel_up++;
		//Sleep(1000);
		//system("cls");
	}	
	return 0;
}

int Ball()
{
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			int probel = 0;
			string line_anim = AnimBall(j, probel, i);
			if (j == 0 || j == 19)
				cout << "****************************************\n";
			else
			{
				cout << "*" << line_anim + Probels(38 - probel) << "*" << "\n";
			}			
		}
		//Sleep(800);
		//system("cls");
	}
	return 0;
}

string Probels(int n)
{
	string a = "";
	for (int i = 0; i < n; i++)
	{
		a += " ";
	}
	return a;
}

string AnimDance(int n, int &nn, int i)
{
	if (i >= 14)
	{
		i -= 14;
	}
	string A[20] = {"", "", "", "", "", "", "",
		"   _[]_",
		"   |~~|",
		"   |oq|",
		"  (|<>|)",
		"   \\--/",
		"   _><_",
		"  -\\. /-",
		" / |. | \\",
		"/  |. |  \\",
		"   |__|",
		"    ||",
		"   _||_",
	};
	if (i == 1)
	{
		A[13] = " --\\. /--";
		A[14] = "/  |. |  \\";
		A[15] = "   |. |";
	}
	if (i == 2)
	{
		A[13] = "  -\\. /---";
		A[14] = " / |. |";
		A[15] = "/  |. |";
	}
	if (i == 3)
	{
		A[12] = "   _><_  /";
		A[13] = " --\\. /--";
		A[14] = "/  |. |";
		A[15] = "   |. |";
	}
	if (i == 4)
	{
		A[11] = "   \\--/  /";
		A[12] = "   _><_ /";
		A[13] = "  -\\. /-";
		A[14] = " / |. |";
		A[15] = "/  |. |";
	}
	if (i == 5)
	{
		A[11] = "   \\--/  *";
		A[12] = "   _><_ /";
		A[13] = " --\\. /-";
		A[14] = "/  |. |";
		A[15] = "   |. |";
	}
	if (i == 6)
	{
		A[11] = "   \\--/  /";
		A[12] = "   _><_ /";
		A[13] = "---\\. /-";
		A[14] = "   |. |";
		A[15] = "   |. |";
	}
	if (i == 7)
	{
		A[11] = "   \\--/  *";
		A[12] = "\\  _><_ /";
		A[13] = " --\\. /-";
		A[14] = "   |. |";
		A[15] = "   |. |";
	}
	if (i == 8)
	{
		A[11] = "\\  \\--/  /";
		A[12] = " \\ _><_ /";
		A[13] = "  -\\. /-";
		A[14] = "   |. |";
		A[15] = "   |. |";
	}
	if (i == 9)
	{
		A[11] = "*  \\--/  *";
		A[12] = " \\ _><_ /";
		A[13] = "  -\\. /-";
		A[14] = "   |. |";
		A[15] = "   |. |";
	}
	if (i == 10)
	{
		A[12] = "*  _><_  *";
		A[13] = " --\\. /--";
		A[14] = "   |. |";
		A[15] = "   |. |";
	}
	if (i == 11)
	{
		A[13] = "*--\\. /--*";
		A[14] = "   |. |";
		A[15] = "   |. |";
	}
	if (i == 12)
	{
		A[13] = " --\\. /--";
		A[14] = "*  |. |  *";
		A[15] = "   |. |";
	}
	if (i == 13)
	{
		A[13] = "  -\\. /-";
		A[14] = " / |. | \\";
		A[15] = "*  |. |  *";
	}
	nn = A[n].size();
	return A[n];
}

string AnimRun(int n, int &nn, int i)
{
	string A[20] = {"", "", "", "", "", "", "",
		"   _[]_",
		"   |~~|",
		"   |oq|",
		"  (|<>|)",
		"   \\--/",
		"   _><_",
		"  -\\. /-",
		" / |. | \\",
		"/  |. |  \\",
		"   |__|",
		"    ||",
		"   _||_",
	};
	if (i % 3 == 2)
	{
		A[17] = "   / |";
		A[18] = " _/  |_";
	}
	else
	{
		if (i % 3 != 0)
		{
			A[17] = "    | \\";
			A[18] = "   _|  \\_";
		}
	}
	
	nn = A[n].size();
	return A[n];
}

string AnimJump(int n, int &nn, int i)
{
	string A[12] = {
		"   _[]_",
		"   |~~|",
		"   |oq|",
		"  (|<>|)",
		"   \\--/",
		"   _><_",
		"  -\\. /-",
		" / |. | \\",
		"/  |. |  \\",
		"   |__|",
		"    ||",
		"   _||_"
	};
	if (i == 1 || i == 12)
	{
		A[0] = "";
		A[1] = "   _[]_";
		A[2] = "   |~~|";
		A[3] = "   |oq|";
		A[4] = "  (|<>|)";
		A[5] = "   \\--/";
		A[6] = "   _><_";
		A[7] = "  -\\. /-";
		A[8] = " / |. | \\";
		A[9] = "/  |. |  \\";
		A[10] = "   |__|";
		A[11] = "   _\\/_";
	}
	if (i > 1 && i != 12 && i != 13)
	{
		A[11] = "    ||";
	}
	
	nn = A[n].size();
	return A[n];
}

string AnimBall(int n, int &nn, int i)
{
	string A[20] = {"", "", "", "", "", "", "",
		"   _[]_",
		"   |~~|",
		"   |oq|",
		"  (|<>|)",
		"   \\--/",
		"   _><_",
		"  -\\. /-",
		" / |. | \\",
		"/  |. |  \\",
		"   |__|",
		"    ||",
		"   _||_",
	};
	if (i == 1)
	{
		A[14] = " / |. | \\o";
		A[15] = "/  |. |  -";
	}
	if (i == 2)
	{
		A[13] = "  -\\. /- o";
		A[14] = " / |. | \\-";
		A[15] = "/  |. |";
	}
	if (i == 3)
	{
		A[12] = "   _><_  o";
		A[13] = "  -\\. /---";
		A[14] = " / |. |";
		A[15] = "/  |. |";
	}
	if (i == 4)
	{
		A[11] = "   \\--/  o";
		A[13] = "  -\\. /--/";
		A[14] = " / |. |";
		A[15] = "/  |. |";
	}
	if (i == 5)
	{
		A[10] = "  (|<>|) o";
		A[13] = "  -\\. /---";
		A[14] = " / |. |";
		A[15] = "/  |. |";
	}
	if (i == 6)
	{
		A[9] = "   |oq|  o";
		A[13] = "  -\\. /--";
		A[14] = " / |. |  \\";
		A[15] = "/  |. |";
	}
	if (i == 7)
		A[8] = "   |~~|  o";
	if (i == 8)
		A[7] = "   _[]_  o";
	if (i == 9)
	    A[6] = "        o";
	if (i == 10)
		A[5] = "       o";
	if (i == 11)
		A[4] = "      o";
	if (i == 12)
		A[3] = "     o";
	if (i == 13)
		A[3] = "    o";
	if (i == 14)
		A[4] = "   o";
	if (i == 15)
		A[5] = "  o";
	if (i == 16)
		A[6] = " o";
	if (i == 17)
		A[7] = "o  _[]_";
	if (i == 18)
		A[8] = "o  |~~|";
	if (i == 19)
	{
		A[9] = "o  |oq|";
		A[13] = " --\\. /-";
		A[14] = "/  |. | \\";
		A[15] = "   |. |  \\";
	}
	if (i == 20)
	{
		A[10] = "o (|<>|)";
		A[13] = "---\\. /-";
		A[14] = "   |. | \\";
		A[15] = "   |. |  \\";
	}
	if (i == 21)
	{
		A[11] = "o  \\--/";
		A[13] = "\\--\\. /-";
		A[14] = "   |. | \\";
		A[15] = "   |. |  \\";
	}
	if (i == 22)
	{
		A[12] = "o  _><_";
		A[13] = "---\\. /-";
		A[14] = "   |. | \\";
		A[15] = "   |. |  \\";
	}
	if (i == 23)
	{
		A[13] = "o -\\. /-";
		A[14] = "-/ |. | \\";
		A[15] = "   |. |  \\";
	}
	if (i == 24)
	{
		A[13] = "  -\\. /-";
		A[14] = "o/ |. | \\";
		A[15] = "-  |. |  \\";
	}
	nn = A[n].size();
	return A[n];
}
