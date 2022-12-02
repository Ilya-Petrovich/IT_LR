#include <iostream>
#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

const int a = 10, b = 12;

int main()
{
	string s[b] = {
		"   _[]_   ",  
		"   |~~|   ",  
		"   |oq|   ",  
		"  (|<>|)  ",  
		"   \\--/   ", 
		"   _><_   ",  
		"  -\\. /-  ", 
		" / |. | \\ ", 
		"/  |. |  \\", 
		"   |__|   ",  
		"    ||    ",  
		"   _||_   "   
	};

	for (int i = 0; i < 2; i++)
	{
		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[6] = " --\\. /-- ";
		s[7] = "/  |. |  \\";
		s[8] = "   |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[6] = "  -\\. /---";
		s[7] = " / |. |   ";
		s[8] = "/  |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[5] = "   _><_  /";
		s[6] = " --\\. /-- ";
		s[7] = "/  |. |   ";
		s[8] = "   |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\--/  /";
		s[5] = "   _><_ / ";
		s[6] = "  -\\. /-  ";
		s[7] = " / |. |   ";
		s[8] = "/  |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\--/  *";
		s[5] = "   _><_ / ";
		s[6] = " --\\. /-  ";
		s[7] = "/  |. |   ";
		s[8] = "   |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\--/  /";
		s[5] = "   _><_ / ";
		s[6] = "---\\. /-  ";
		s[7] = "   |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\--/  *";
		s[5] = "\\  _><_ / ";
		s[6] = " --\\. /-  ";
		s[7] = "   |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "\\  \\--/  /";
		s[5] = " \\ _><_ / ";
		s[6] = "  -\\. /-  ";
		s[7] = "   |. |   ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "*  \\--/  *";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\--/   ";
		s[5] = "*  _><_  *";
		s[6] = " --\\. /-- ";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[5] = "   _><_   ";
		s[6] = "*--\\. /--*";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[6] = " --\\. /-- ";
		s[7] = "*  |. |  *";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[6] = "  -\\. /-  ";
		s[7] = " / |. | \\ ";
		s[8] = "*  |. |  *";

		for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[8] = "/  |. |  \\";
	}
	for (int i = 0; i < b; i++) cout << s[i] << "\n";
	return 0;
}