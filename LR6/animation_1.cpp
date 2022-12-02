#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

int Dance();
string AnimDance(int n, int &nn, int i);
string Probels(int n);

int main()
{
	Dance();
	return 0;
}

int Dance()
{
	for (int i = 0; i < 29; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			int probel = 0;
			string line_anim = AnimDance(j, probel, i);
			cout << line_anim + Probels(10 - probel) << "\n";
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
	string A[13] = {
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
		A[6] = " --\\. /--";
		A[7] = "/  |. |  \\";
		A[8] = "   |. |";
	}
	if (i == 2)
	{
		A[6] = "  -\\. /---";
		A[7] = " / |. |";
		A[8] = "/  |. |";
	}
	if (i == 3)
	{
		A[5] = "   _><_  /";
		A[6] = " --\\. /--";
		A[7] = "/  |. |";
		A[8] = "   |. |";
	}
	if (i == 4)
	{
		A[4] = "   \\--/  /";
		A[5] = "   _><_ /";
		A[6] = "  -\\. /-";
		A[7] = " / |. |";
		A[8] = "/  |. |";
	}
	if (i == 5)
	{
		A[4] = "   \\--/  *";
		A[5] = "   _><_ /";
		A[6] = " --\\. /-";
		A[7] = "/  |. |";
		A[8] = "   |. |";
	}
	if (i == 6)
	{
		A[4] = "   \\--/  /";
		A[5] = "   _><_ /";
		A[6] = "---\\. /-";
		A[7] = "   |. |";
		A[8] = "   |. |";
	}
	if (i == 7)
	{
		A[4] = "   \\--/  *";
		A[5] = "\\  _><_ /";
		A[6] = " --\\. /-";
		A[7] = "   |. |";
		A[8] = "   |. |";
	}
	if (i == 8)
	{
		A[4] = "\\  \\--/  /";
		A[5] = " \\ _><_ /";
		A[6] = "  -\\. /-";
		A[7] = "   |. |";
		A[8] = "   |. |";
	}
	if (i == 9)
	{
		A[4] = "*  \\--/  *";
		A[5] = " \\ _><_ /";
		A[6] = "  -\\. /-";
		A[7] = "   |. |";
		A[8] = "   |. |";
	}
	if (i == 10)
	{
		A[5] = "*  _><_  *";
		A[6] = " --\\. /--";
		A[7] = "   |. |";
		A[8] = "   |. |";
	}
	if (i == 11)
	{
		A[6] = "*--\\. /--*";
		A[7] = "   |. |";
		A[8] = "   |. |";
	}
	if (i == 12)
	{
		A[6] = " --\\. /--";
		A[7] = "*  |. |  *";
		A[8] = "   |. |";
	}
	if (i == 13)
	{
		A[6] = "  -\\. /-";
		A[7] = " / |. | \\";
		A[8] = "*  |. |  *";
	}
	nn = A[n].size();
	return A[n];
}
