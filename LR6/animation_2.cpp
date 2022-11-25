#include<iostream>
#include<vector>
#include<string>
#include<windows.h>
using namespace std;
void print(vector<string>a)
{
	for (auto c : a)
		cout << c << endl;
}
void ball()
{
	vector<string> a = { string(40,'*'),
					  "*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
					  "*   ()()   " + string(28,' ') + "*",//0
					  "*   ()()   " + string(28,' ') + "*",//1
					  "*   ()()   " + string(28,' ') + "*",//2
					  "*   |..|   " + string(28,' ') + "*",//3
					  "*  \\|  |/  " + string(28,' ') + "*",//4
					  "*  /|UU|\\  " + string(28,' ') + "*",//5
					  "*  --\\/--  " + string(28,' ') + "*",//6
					  "* /  ||  \\ " + string(28,' ') + "*",//7
					  "*/   ||   \\" + string(28,' ') + "*",//8
					  "*    /\\    " + string(28,' ') + "*",//9
					  "*    ||    " + string(28,' ') + "*",//10
					  "*   _||_   " + string(28,' ') + "*",
	string(40,'*') };//11
	print(a);
	Sleep(1000);
	system("cls");
	a[14] = "* /  ||  \\o" + string(28, ' ') + "*";
	a[15] = "*/   ||   -" + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[13] = "*  --\\/-- o" + string(28, ' ') + "*";
	a[14] = "* /  ||  \\-" + string(28, ' ') + "*";
	a[15] = "*/   ||    " + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[12] = "*  /|UU|\\ o" + string(28, ' ') + "*";
	a[13] = "*  --\\/----" + string(28, ' ') + "*";
	a[14] = "* /  ||    " + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[11] = "*  \\|  |/ o" + string(28, ' ') + "*";
	a[12] = "*  /|UU|\\  " + string(28, ' ') + "*";
	a[13] = "*  --\\/---/" + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[10] = "*   |..|  o" + string(28, ' ') + "*";
	a[11] = "*  \\|  |/  " + string(28, ' ') + "*";
	a[13] = "*  --\\/----" + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[9] = "*   ()()  o" + string(28, ' ') + "*";
	a[10] = "*   |..|   " + string(28, ' ') + "*";
	a[13] = "*  --\\/--- " + string(28, ' ') + "*";
	a[14] = "* /  ||   \\" + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[13] = "*  --\\/--  " + string(28, ' ') + "*";
	a[14] = "* /  ||  \\ " + string(28, ' ') + "*";
	a[15] = "*/   ||   \\" + string(28, ' ') + "*";
	a[9]= "*   ()()   " + string(28, ' ') + "*";
	a[8] = "*   ()()  o" + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[8] = "*   ()()   " + string(28, ' ') + "*";
	a[7] = "*   ()()  o" + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[7] = "*   ()()   " + string(28, ' ') + "*";
	a[6] = "*" + string(8, ' ') + "o" + string(29, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[5] = "*" + string(7, ' ') + "o" + string(30, ' ') + "*";
	a[6] = "*" + string(38, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[4] = "*" + string(6, ' ') + "o" + string(31, ' ') + "*";
	a[5] = "*" + string(38, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[3] = "*" + string(5, ' ') + "o" + string(32, ' ') + "*";
	a[4]="*"+string(38,' ')+"*";
	print(a);
	Sleep(1000);
	system("cls");
	a[3]="*"+string(4,' ')+"o"+string(33,' ')+"*";
	print(a);
	Sleep(1000);
	system("cls");
	a[3] = "*" + string(38, ' ') + "*";
	a[4] = "*" + string(3, ' ') + "o" + string(34, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[4] = "*" + string(38, ' ') + "*";
	a[5] = "*  o" + string(35, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[5]="*"+string(38,' ')+"*";
	a[6]="* o"+string(36,' ')+"*";
	print(a);
	Sleep(1000);
	system("cls");
	a[6] = "*" + string(38, ' ') + "*";
	a[7] = "*o  ()()   " + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[7] = "*   ()()   " + string(28, ' ') + "*";
	a[8] = "*o  ()()   " + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[8] = "*   ()()   " + string(28, ' ') + "*";
	a[9] = "*o  ()()   " + string(28, ' ') + "*";
	a[13] = "* ---\\/--  " + string(28, ' ') + "*";
	a[14] = "*/   ||  \\ " + string(28, ' ') + "*";
	a[15] = "*    ||   \\" + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[9] = "*   ()()   " + string(28, ' ') + "*";
	a[10] = "*o  |..|   " + string(28, ' ') + "*";
	a[13] = "*----\\/--  " + string(28, ' ') + "*";
	a[14] = "*    ||  \\ " + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[10] = "*   |..|   " + string(28, ' ') + "*";
	a[11] = "*o \\|  |/  " + string(28, ' ') + "*";
	a[13] = "*\\---\\/--  " + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[11] = "*  \\|  |/  " + string(28, ' ') + "*";
	a[13]= "*----\\/--  " + string(28, ' ') + "*";
	a[12] = "*o /|UU|\\  " + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[12] = "*  /|UU|\\  " + string(28, ' ') + "*";
	a[13] = "*o --\\/--  " + string(28, ' ') + "*";
	a[14] = "*-/  ||  \\ " + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[13] = "*  --\\/--  " + string(28, ' ') + "*";
	a[14] = "*o/  ||  \\ " + string(28, ' ') + "*";
	a[15] = "*-   ||   \\" + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	a[14] = "* /  ||  \\ " + string(28, ' ') + "*";
	a[15] = "*/   ||   \\" + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
}
void sid()
{
	vector<string> a = { string(40,'*'),
					  "*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
					  "*   ()()   " + string(28,' ') + "*",//0
					  "*   ()()   " + string(28,' ') + "*",//1
					  "*   ()()   " + string(28,' ') + "*",//2
					  "*   |..|   " + string(28,' ') + "*",//3
					  "*  \\|  |/  " + string(28,' ') + "*",//4
					  "*  /|UU|\\  " + string(28,' ') + "*",//5
					  "*  --\\/--  " + string(28,' ') + "*",//6
					  "* /  ||  \\ " + string(28,' ') + "*",//7
					  "*/   ||   \\" + string(28,' ') + "*",//8
					  "*    /\\    " + string(28,' ') + "*",//9
					  "*    ||    " + string(28,' ') + "*",//10
					  "*   _||_   " + string(28,' ') + "*",
	string(40,'*') };//11
	auto iter = a.cbegin();
	a.erase(iter + 17);
	a[17] = "*   _\\/_   " + string(28, ' ') + "*";
	auto ite = a.cbegin();
	a.emplace(ite + 2, "*" + string(38, ' ') + "*");
	print(a);
	Sleep(1000);
	system("cls");
}
void jump()
{
	vector<string> a = { string(40,'*'),
					  "*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
					  "*   ()()   " + string(28,' ') + "*",//0
					  "*   ()()   " + string(28,' ') + "*",//1
					  "*   ()()   " + string(28,' ') + "*",//2
					  "*   |..|   " + string(28,' ') + "*",//3
					  "*  \\|  |/  " + string(28,' ') + "*",//4
					  "*  /|UU|\\  " + string(28,' ') + "*",//5
					  "*  --\\/--  " + string(28,' ') + "*",//6
					  "* /  ||  \\ " + string(28,' ') + "*",//7
					  "*/   ||   \\" + string(28,' ') + "*",//8
					  "*    /\\    " + string(28,' ') + "*",//9
					  "*    ||    " + string(28,' ') + "*",//10
					  "*   _||_   " + string(28,' ') + "*",
	string(40,'*') };//11
	print(a);
	Sleep(1000);
	system("cls");
	sid();
	a[18] = "*    ||    " + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
	int k = 0;
	while (k < 4)
	{
		auto iter = a.cbegin();
		a.erase(iter + 2);
		auto ite = a.cbegin();
		a.emplace(ite + 18, "*" + string(38, ' ') + "*");
		print(a);
		Sleep(1000);
		system("cls");
		k++;
	}
	while (k > 0)
	{
		auto iter = a.cbegin();
		a.erase(iter + 18);
		auto ite = a.cbegin();
		a.emplace(ite + 2, "*" + string(38, ' ') + "*");
		print(a);
		Sleep(1000);
		system("cls");
		k--;
	}
	sid();
	a[18] = "*   _||_   " + string(28, ' ') + "*";
	print(a);
	Sleep(1000);
	system("cls");
}

void run()
{
	vector<string> a = { string(40,'*'),
					  "*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
					  "*   ()()   " + string(28,' ') + "*",//0
					  "*   ()()   " + string(28,' ') + "*",//1
					  "*   ()()   " + string(28,' ') + "*",//2
					  "*   |..|   " + string(28,' ') + "*",//3
					  "*  \\|  |/  " + string(28,' ') + "*",//4
					  "*  /|UU|\\  " + string(28,' ') + "*",//5
					  "*  --\\/--  " + string(28,' ') + "*",//6
					  "* /  ||  \\ " + string(28,' ') + "*",//7
					  "*/   ||   \\" + string(28,' ') + "*",//8
					  "*    /\\    " + string(28,' ') + "*",//9
					  "*    ||    " + string(28,' ') + "*",//10
					  "*   _||_   " + string(28,' ') + "*",
	string(40,'*') };//11
	print(a);
	Sleep(1000);
	system("cls");
	int k = 0;
	while (k < 28)
	{
		a[7] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[8] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[9] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[10] = "*" + string(k, ' ') + "   |..|   " + string(28 - k, ' ') + "*";
		a[11] = "*" + string(k, ' ') + "  \\|  |/  " + string(28 - k, ' ') + "*";
		a[12] = "*" + string(k, ' ') + "  /|UU|\\  " + string(28 - k, ' ') + "*";
		a[13] = "*" + string(k, ' ') + "  --\\/--  " + string(28 - k, ' ') + "*";
		a[14] = "*" + string(k, ' ') + " /  ||  \\ " + string(28 - k, ' ') + "*";
		a[15] = "*" + string(k, ' ') + "/   ||   \\" + string(28 - k, ' ') + "*";
		a[16] = "*" + string(k, ' ') + "    /\\    " + string(28 - k, ' ') + "*";
		a[17] = "*" + string(k, ' ') + "    |\\    " + string(28 - k, ' ') + "*";
		a[18] = "*" + string(k, ' ') + "   _| \\_  " + string(28 - k, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		k += 1;
		a[7] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[8] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[9] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[10] = "*" + string(k, ' ') + "   |..|   " + string(28 - k, ' ') + "*";
		a[11] = "*" + string(k, ' ') + "  \\|  |/  " + string(28 - k, ' ') + "*";
		a[12] = "*" + string(k, ' ') + "  /|UU|\\  " + string(28 - k, ' ') + "*";
		a[13] = "*" + string(k, ' ') + "  --\\/--  " + string(28 - k, ' ') + "*";
		a[14] = "*" + string(k, ' ') + " /  ||  \\ " + string(28 - k, ' ') + "*";
		a[15] = "*" + string(k, ' ') + "/   ||   \\" + string(28 - k, ' ') + "*";
		a[16] = "*" + string(k, ' ') + "    /\\    " + string(28 - k, ' ') + "*";
		a[17] = "*" + string(k, ' ') + "    /|    " + string(28 - k, ' ') + "*";
		a[18] = "*" + string(k, ' ') + "  _/ |_   " + string(28 - k, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[7] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[8] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[9] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[10] = "*" + string(k, ' ') + "   |..|   " + string(28 - k, ' ') + "*";
		a[11] = "*" + string(k, ' ') + "  \\|  |/  " + string(28 - k, ' ') + "*";
		a[12] = "*" + string(k, ' ') + "  /|UU|\\  " + string(28 - k, ' ') + "*";
		a[13] = "*" + string(k, ' ') + "  --\\/--  " + string(28 - k, ' ') + "*";
		a[14] = "*" + string(k, ' ') + " /  ||  \\ " + string(28 - k, ' ') + "*";
		a[15] = "*" + string(k, ' ') + "/   ||   \\" + string(28 - k, ' ') + "*";
		a[16] = "*" + string(k, ' ') + "    /\\    " + string(28 - k, ' ') + "*";
		a[17] = "*" + string(k, ' ') + "    ||    " + string(28 - k, ' ') + "*";
		a[18] = "*" + string(k, ' ') + "   _||_   " + string(28 - k, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
	}
	while (k > 0)
	{
		a[7] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[8] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[9] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[10] = "*" + string(k, ' ') + "   |..|   " + string(28 - k, ' ') + "*";
		a[11] = "*" + string(k, ' ') + "  \\|  |/  " + string(28 - k, ' ') + "*";
		a[12] = "*" + string(k, ' ') + "  /|UU|\\  " + string(28 - k, ' ') + "*";
		a[13] = "*" + string(k, ' ') + "  --\\/--  " + string(28 - k, ' ') + "*";
		a[14] = "*" + string(k, ' ') + " /  ||  \\ " + string(28 - k, ' ') + "*";
		a[15] = "*" + string(k, ' ') + "/   ||   \\" + string(28 - k, ' ') + "*";
		a[16] = "*" + string(k, ' ') + "    /\\    " + string(28 - k, ' ') + "*";
		a[17] = "*" + string(k, ' ') + "    |\\    " + string(28 - k, ' ') + "*";
		a[18] = "*" + string(k, ' ') + "   _| \\_  " + string(28 - k, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		k -= 1;
		a[7] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[8] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[9] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[10] = "*" + string(k, ' ') + "   |..|   " + string(28 - k, ' ') + "*";
		a[11] = "*" + string(k, ' ') + "  \\|  |/  " + string(28 - k, ' ') + "*";
		a[12] = "*" + string(k, ' ') + "  /|UU|\\  " + string(28 - k, ' ') + "*";
		a[13] = "*" + string(k, ' ') + "  --\\/--  " + string(28 - k, ' ') + "*";
		a[14] = "*" + string(k, ' ') + " /  ||  \\ " + string(28 - k, ' ') + "*";
		a[15] = "*" + string(k, ' ') + "/   ||   \\" + string(28 - k, ' ') + "*";
		a[16] = "*" + string(k, ' ') + "    /\\    " + string(28 - k, ' ') + "*";
		a[17] = "*" + string(k, ' ') + "    /|    " + string(28 - k, ' ') + "*";
		a[18] = "*" + string(k, ' ') + "  _/ |_   " + string(28 - k, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[7] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[8] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[9] = "*" + string(k, ' ') + "   ()()   " + string(28 - k, ' ') + "*";
		a[10] = "*" + string(k, ' ') + "   |..|   " + string(28 - k, ' ') + "*";
		a[11] = "*" + string(k, ' ') + "  \\|  |/  " + string(28 - k, ' ') + "*";
		a[12] = "*" + string(k, ' ') + "  /|UU|\\  " + string(28 - k, ' ') + "*";
		a[13] = "*" + string(k, ' ') + "  --\\/--  " + string(28 - k, ' ') + "*";
		a[14] = "*" + string(k, ' ') + " /  ||  \\ " + string(28 - k, ' ') + "*";
		a[15] = "*" + string(k, ' ') + "/   ||   \\" + string(28 - k, ' ') + "*";
		a[16] = "*" + string(k, ' ') + "    /\\    " + string(28 - k, ' ') + "*";
		a[17] = "*" + string(k, ' ') + "    ||    " + string(28 - k, ' ') + "*";
		a[18] = "*" + string(k, ' ') + "   _||_   " + string(28 - k, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
	}
}
void dance()
{
	vector<string> a = { string(40,'*'),
					  "*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
		"*" + string(38,' ') + "*",
					  "*   ()()   " + string(28,' ') + "*",//0
					  "*   ()()   " + string(28,' ') + "*",//1
					  "*   ()()   " + string(28,' ') + "*",//2
					  "*   |..|   " + string(28,' ') + "*",//3
					  "*  \\|  |/  " + string(28,' ') + "*",//4
					  "*  /|UU|\\  " + string(28,' ') + "*",//5
					  "*  --\\/--  " + string(28,' ') + "*",//6
					  "* /  ||  \\ " + string(28,' ') + "*",//7
					  "*/   ||   \\" + string(28,' ') + "*",//8
					  "*    /\\    " + string(28,' ') + "*",//9
					  "*    ||    " + string(28,' ') + "*",//10
					  "*   _||_   " + string(28,' ') + "*",
	string(40,'*') };//11
	int i = 0;
	print(a);
	system("cls");
	while (i != 2)
	{
		system("cls");
		a[13] = "* ---\\/--- " + string(28, ' ') + "*";
		a[14] = "*/   ||   \\" + string(28, ' ') + "*";
		a[15] = "*    ||    " + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[13] = "*  --\\/----" + string(28, ' ') + "*";
		a[14] = "* /  ||    " + string(28, ' ') + "*";
		a[15] = "*/   ||    " + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[12] = "*  /|UU|\\ /" + string(28, ' ') + "*";
		a[13] = "* ---\\/--- " + string(28, ' ') + "*";
		a[14] = "*/   ||    " + string(28, ' ') + "*";
		a[15] = "*    ||    " + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[11] = "*  \\|  |/ /" + string(28, ' ') + "*";
		a[12] = "*  /|UU|\\/ " + string(28, ' ') + "*";
		a[13] = "*  --\\/--  " + string(28, ' ') + "*";
		a[14] = "* /  ||    " + string(28, ' ') + "*";
		a[15] = "*/   ||    " + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[11] = "*  \\|  |/ *" + string(28, ' ') + "*";
		a[13] = "* ---\\/--  " + string(28, ' ') + "*";
		a[14] = "*/   ||    " + string(28, ' ') + "*";
		a[15] = "*    ||    " + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[11] = "*  \\|  |/ /" + string(28, ' ') + "*";
		a[13] = "*----\\/--  " + string(28, ' ') + "*";
		a[14] = "*    ||    " + string(28, ' ') + "*";
		a[15] = "*    ||    " + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[11] = "*  \\|  |/ *" + string(28, ' ') + "*";
		a[12] = "*\\ /|UU|\\/ " + string(28, ' ') + "*";
		a[13] = "* ---\\/--  " + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[11] = "*\\ \\|  |/ /" + string(28, ' ') + "*";
		a[12] = "* \\/|UU|\\/ " + string(28, ' ') + "*";
		a[13] = "*  --\\/--  " + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[11] = "** \\|  |/ *" + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[11] = "*  \\|  |/  " + string(28, ' ') + "*";
		a[12] = "** /|UU|\\ *" + string(28, ' ') + "*";
		a[13] = "* ---\\/--- " + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[12] = "*  /|UU|\\  " + string(28, ' ') + "*";
		a[13] = "**---\\/---*" + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[13] = "* ---\\/--- " + string(28, ' ') + "*";
		a[14] = "**   ||   *" + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[13] = "*  --\\/--  " + string(28, ' ') + "*";
		a[14] = "* /  ||  \\ " + string(28, ' ') + "*";
		a[15] = "**   ||   *" + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		system("cls");
		a[15] = "*/   ||   \\" + string(28, ' ') + "*";
		print(a);
		Sleep(1000);
		i++;
	}
}

int main()
{
L1:int t;
	cout << "Choose animation:" << "\nDance:\t1" << "\nRun:\t2" << "\nSit down and jump:\t3" << "\nThrow a ball:\t4" << endl;
	cout << "\nEnter 5 for exit." << endl;
	cin >> t;
	system("cls");
	switch (t)
	{
	case 1: {dance();	goto L1; }
	case 2: {run();	goto L1; }
	case 3: {jump();	goto L1; }
	case 4: {ball(); 	goto L1; }
	case 5: {return 0; }
	}
}