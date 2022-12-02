#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

const int a = 10, b = 12;

int main()
{
	//setlocale(LC_ALL, "rus");
	string s[b] = {
		"   _[]_   ",  //  0
		"   |~~|   ",  //  1
		"   |oq|   ",  //  2
		"  (|<>|)  ",  //  3
		"   \\--/   ", //  4
		"   _><_   ",  //  5
		"  -\\. /-  ", //  6
		" / |. | \\ ", //  7
		"/  |. |  \\", //  8
		"   |__|   ",  //  9
		"    ||    ",  //  10
		"   _||_   "   //  11
	};

	for (int i = 0; i < 2; i++)
	{
		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 1
		//Sleep(1000);
		//system("cls");

		s[6] = " --\\. /-- ";
		s[7] = "/  |. |  \\";
		s[8] = "   |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 2
		//Sleep(1000);
		//system("cls");

		s[6] = "  -\\. /---";
		s[7] = " / |. |   ";
		s[8] = "/  |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 3
		//Sleep(1000);
		//system("cls");

		s[5] = "   _><_  /";
		s[6] = " --\\. /-- ";
		s[7] = "/  |. |   ";
		s[8] = "   |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 4
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\--/  /";
		s[5] = "   _><_ / ";
		s[6] = "  -\\. /-  ";
		s[7] = " / |. |   ";
		s[8] = "/  |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 5
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\--/  *";
		s[5] = "   _><_ / ";
		s[6] = " --\\. /-  ";
		s[7] = "/  |. |   ";
		s[8] = "   |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 7
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\--/  /";
		s[5] = "   _><_ / ";
		s[6] = "---\\. /-  ";
		s[7] = "   |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 8
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\--/  *";
		s[5] = "\\  _><_ / ";
		s[6] = " --\\. /-  ";
		s[7] = "   |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 9
		//Sleep(1000);
		//system("cls");

		s[4] = "\\  \\--/  /";
		s[5] = " \\ _><_ / ";
		s[6] = "  -\\. /-  ";
		s[7] = "   |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 10
		//Sleep(1000);
		//system("cls");

		s[4] = "*  \\--/  *";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 11
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\--/   ";
		s[5] = "*  _><_  *";
		s[6] = " --\\. /-- ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 12
		//Sleep(1000);
		//system("cls");

		s[5] = "   _><_   ";
		s[6] = "*--\\. /--*";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 13
		//Sleep(1000);
		//system("cls");

		s[6] = " --\\. /-- ";
		s[7] = "*  |. |  *";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 14
		//Sleep(1000);
		//system("cls");

		s[6] = "  -\\. /-  ";
		s[7] = " / |. | \\ ";
		s[8] = "*  |. |  *";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; // 15
		//Sleep(1000);
		//system("cls");

		s[8] = "/  |. |  \\";
	}

	for (int i = 0; i < b; i++) cout << s[i] << "\n";
	return 0;
}