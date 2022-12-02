#include<iostream>
#include<string>
#include <stdio.h>
#include <windows.h>
using namespace std;
inline void foo(string* ar);
int main()
{
	string ar[12];
	string str1 = ar[0] = "    /\\    ";
	string str2 = ar[1] = "   |oo|   ";
	string str3 = ar[2] = "  (|..|)  ";
	string str4 = ar[3] = "   |--|   ";
	string str5 = ar[4] = "   \\__/   ";
	string str6 = ar[5] = "    ||    ";
	string str7 = ar[6] = "  -| *|-  ";
	string str8 = ar[7] = " / |  | \\ ";
	string str9 = ar[8] = "/   \\/   \\";
	string str10 = ar[9] = "    /\\    ";
	string str11 = ar[10] = "    ||    ";
	string str12 = ar[11] = "   _||_   ";
	foo(&ar[0]);
	ar[6] = " --| *|-- ";
	ar[7] = "/  |  |  \\";
	ar[8] = "    \\/    ";
	foo(&ar[0]);
	ar[6] = "  -| *|---";
	ar[7] = " / |  |   ";
	ar[8] = "/   \\/    ";
	foo(&ar[0]);
	ar[5] = "    ||   /";
	ar[6] = " --| *|-- ";
	ar[7] = "/  |  |   ";
	ar[8] = "    \\/    ";
	foo(&ar[0]);
	ar[4] = "   \\__/  /";
	ar[5] = "    ||  / ";
	ar[6] = "  -| *|-  ";
	ar[7] = " / |  |   ";
	ar[8] = "/   \\/    ";
	foo(&ar[0]);
	ar[4] = "   \\__/  *";
	ar[6] = " --| *|-  ";
	ar[7] = "/  |  |   ";
	ar[8] = "    \\/    ";
	foo(&ar[0]);
	ar[4] = "   \\__/  /";
	ar[6] = "---| *|-  ";
	ar[7] = "   |  |   ";
	foo(&ar[0]);
	ar[4] = "   \\__/  *";
	ar[5] = "\\   ||  / ";
	ar[6] = " --| *|-  ";
	foo(&ar[0]);
	ar[4] = "\\  \\__/  /";
	ar[5] = " \\  ||  / ";
	ar[6] = "  -| *|-  ";
	foo(&ar[0]);
	ar[4] = "*  \\__/  *";
	foo(&ar[0]);
	ar[4] = "   \\__/   ";
	ar[5] = "*   ||   *";
	ar[6] = " --| *|-- ";
	foo(&ar[0]);
	system("cls");
	ar[5] = "    ||    ";
	ar[6] = "*--| *|--*";
	foo(&ar[0]);
	ar[6] = " --| *|-- ";
	ar[7] = "*  |  |  *";
	foo(&ar[0]);
	ar[6] = "  -| *|-  ";
	ar[7] = " / |  | \\ ";
	ar[8] = "*   \\/   *";
	foo(&ar[0]);
	ar[8] = "/   \\/   \\";
	foo(&ar[0]);
	return 0;
}
void foo(string* ar)
{
	for (int i = 0; i < 12; i++)
	{
		cout << ar[i] << endl;
	}
	Sleep(1000);
	system("cls");
}
