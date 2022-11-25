#include<iostream>
#include<vector>
#include<string>
#include<windows.h>
void dance()
{
	vector<string> a = { "   ()()   ",//0
					  "   ()()   ",//1
					  "   ()()   ",//2
					  "   |..|    ",//3
					  "  \\|  |/  ",//4
					  "  /|UU|\\  ",//5
					  "  --\\/--  ",//6
					  " /  ||  \\ ",//7
					  "/   ||   \\",//8
					  "    /\\    ",//9
					  "    ||    ",//10
					  "   _||_   " };//11
	int i = 0;
	print(a);
	system("cls");
	while (i != 2)
	{
		system("cls");
		a[6] = " ---\\/--- ";
		a[7] = "/   ||   \\";
		a[8] = "    ||    ";
		print(a);
		Sleep(1000);
		system("cls");
		a[6] = "  --\\/----";
		a[7] = " /  ||    ";
		a[8] = "/   ||    ";
		print(a);
		Sleep(1000);
		system("cls");
		a[5] = "  /|UU|\\ /";
		a[6] = " ---\\/--- ";
		a[7] = "/   ||    ";
		a[8] = "    ||    ";
		print(a);
		Sleep(1000);
		system("cls");
		a[4] = "  \\|  |/ /";
		a[5] = "  /|UU|\\/ ";
		a[6] = "  --\\/--  ";
		a[7] = " /  ||    ";
		a[8] = "/   ||    ";
		print(a);
		Sleep(1000);
		system("cls");
		a[4] = "  \\|  |/ *";
		a[6] = " ---\\/--  ";
		a[7] = "/   ||    ";
		a[8] = "    ||    ";
		print(a);
		Sleep(1000);
		system("cls");
		a[4] = "  \\|  |/ /";
		a[6] = "----\\/--  ";
		a[7] = "    ||    ";
		a[8] = "    ||    ";
		print(a);
		Sleep(1000);
		system("cls");
		a[4] = "  \\|  |/ *";
		a[5] = "\\ /|UU|\\/ ";
		a[6] = " ---\\/--  ";
		print(a);
		Sleep(1000);
		system("cls");
		a[4] = "\\ \\|  |/ /";
		a[5] = " \\/|UU|\\/ ";
		a[6] = "  --\\/--  ";
		print(a);
		Sleep(1000);
		system("cls");
		a[4] = "* \\|  |/ *";
		print(a);
		Sleep(1000);
		system("cls");
		a[4] = "  \\|  |/  ";
		a[5] = "* /|UU|\\ *";
		a[6] = " ---\\/--- ";
		print(a);
		Sleep(1000);
		system("cls");
		a[5] = "  /|UU|\\  ";
		a[6] = "*---\\/---*";
		print(a);
		Sleep(1000);
		system("cls");
		a[6] = " ---\\/--- ";
		a[7] = "*   ||   *";
		print(a);
		Sleep(1000);
		system("cls");
		a[6] = "  --\\/--  ";
		a[7] = " /  ||  \\ ";
		a[8] = "*   ||   *";
		print(a);
		Sleep(1000);
		system("cls");
		a[8] = "/   ||   \\";
		print(a);
		Sleep(1000);
		i++;
	}
}
using namespace std;
void print(vector<string>a)
{
	for (auto c : a)
		cout << c << endl;
}
int main()
{
	dance()
	return 0;
}