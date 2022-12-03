//#include <iostream>
//#include <string>
//#include <windows.h>
#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;
const int w = 10, h = 12;
int main() {
	

	string a[h]{
						"   ()()   ",  //0
						"   ()()   ",  //1
						"   ()()   ",  //2
						"   |..|   ",  //3
						"  \\|  |/  ", //4
						"  /|UU|\\  ", //5
						"  --\\/--  ", //6
						" /  ||  \\ ", //7
						"/   ||   \\", //8
						"    /\\    ", //9
						"    ||    ",  //10
						"   _||_   "   //11
	};

	for (int i = 0; i < 2; i++) {

		for (int i = 0; i < h; i++) cout << a[i] << "\n"; //1
		//Sleep(1000);
		//system("cls");
		a[6] = " ---\\/---  ";
		a[7] = "/   ||   \\";
		a[8] = "    ||     ";


		for (int i = 0; i < h; i++) cout << a[i] << "\n"; //2
		//Sleep(1000);
		//system("cls");
		a[6] = "  --\\/----  ";
		a[7] = " /  ||       ";
		a[8] = "/   ||       ";


		for (int i = 0; i < h; i++) cout << a[i] << "\n"; //3
		//Sleep(1000);
		//system("cls");
		a[5] = "  /|UU|\\ /";
		a[6] = " ---\\/---  ";
		a[7] = "/   ||       ";
		a[8] = "    ||       ";

		for (int i = 0; i < h; i++) cout << a[i] << "\n"; //4
		//Sleep(1000);
		//system("cls");

		a[4] = "  \\|  |/ /";
		a[5] = "  /|UU|\\/";
		a[6] = "  --\\/--  ";
		a[7] = " /  ||       ";
		a[8] = "/   ||       ";

		for (int i = 0; i < h; i++) cout << a[i] << "\n"; //5
		//Sleep(1000);
		//system("cls");
		a[4] = "  \\|  |/ *";
		a[5] = "  /|UU|\\/";
		a[6] = " ---\\/--  ";
		a[7] = "/   ||       ";
		a[8] = "    ||       ";

		for (int i = 0; i < h; i++) cout << a[i] << "\n"; //6
		//Sleep(1000);
		//system("cls");
		a[4] = "  \\|  |/ /";
		a[5] = "  /|UU|\\/";
		a[6] = "----\\/--  ";
		a[7] = "    ||       ";

		for (int i = 0; i < h; i++) cout << a[i] << "\n";//7
		//Sleep(1000);
		//system("cls");
		a[4] = "  \\|  |/ *";
		a[5] = "\\ /|UU|\\/";
		a[6] = " ---\\/--  ";
		a[7] = "    ||       ";

		for (int i = 0; i < h; i++) cout << a[i] << "\n";//8
		//Sleep(1000);
		//system("cls");
		a[4] = "\\ \\|  |/ /";
		a[5] = " \\/|UU|\\/";
		a[6] = "  --\\/--  ";
		a[7] = "    ||       ";

		for (int i = 0; i < h; i++) cout << a[i] << "\n";//9
		//Sleep(1000);
		//system("cls");
		a[4] = "* \\|  |/ *";


		for (int i = 0; i < h; i++) cout << a[i] << "\n";//10
		//Sleep(1000);
		//system("cls");
		a[4] = "  \\|  |/   ";
		a[5] = "* /|UU|\\ *";
		a[6] = " ---\\/---  ";



		for (int i = 0; i < h; i++) cout << a[i] << "\n";//11
		//Sleep(1000);
		//system("cls");
		a[5] = "  /|UU|\\  ";
		a[6] = "*---\\/---* ";

		for (int i = 0; i < h; i++) cout << a[i] << "\n";//12
		//Sleep(1000);
		//system("cls");
		a[6] = " ---\\/--- ";
		a[7] = "*   ||   * ";
		a[8] = "    ||      ";

		for (int i = 0; i < h; i++) cout << a[i] << "\n";//13
		//Sleep(1000);
		//system("cls");
		a[6] = "  --\\/-- ";
		a[7] = " /  ||  \\ ";
		a[8] = "*   ||   *";



		for (int i = 0; i < h; i++) cout << a[i] << "\n";//14
		//Sleep(1000);
		//system("cls");
		a[8] = "/   ||   \\";

	}
	for (int i = 0; i < h; i++) cout << a[i] << "\n";

	return 0;
}

