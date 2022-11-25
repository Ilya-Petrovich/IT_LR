#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

const int w = 10, h = 12;

int main()
{
	//setlocale(LC_ALL, "rus");
	string p[h] = {
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
	
	for(int i = 0; i < 2; i++)
	{
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 1
		//Sleep(1000);
		//system("cls");
		
		p[6] = " --\\. /-- ";
		p[7] = "/  |. |  \\";
		p[8] = "   |. |   ";
		
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 2
		//Sleep(1000);
		//system("cls");
		
		p[6] = "  -\\. /---";
		p[7] = " / |. |   ";
		p[8] = "/  |. |   ";
		
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 3
		//Sleep(1000);
		//system("cls");
		
		p[5] = "   _><_  /";
		p[6] = " --\\. /-- ";
		p[7] = "/  |. |   ";
		p[8] = "   |. |   ";
		
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 4
		//Sleep(1000);
		//system("cls");
		
		p[4] = "   \\--/  /";
		p[5] = "   _><_ / ";
		p[6] = "  -\\. /-  ";
		p[7] = " / |. |   ";
		p[8] = "/  |. |   ";
		
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 5
		//Sleep(1000);
		//system("cls");
		
		p[4] = "   \\--/  *";
		p[5] = "   _><_ / ";
		p[6] = " --\\. /-  ";
		p[7] = "/  |. |   ";
		p[8] = "   |. |   ";
		
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 7
		//Sleep(1000);
		//system("cls");
		
		p[4] = "   \\--/  /";
		p[5] = "   _><_ / ";
		p[6] = "---\\. /-  ";
		p[7] = "   |. |   ";
		
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 8
		//Sleep(1000);
		//system("cls");
		
		p[4] = "   \\--/  *";
		p[5] = "\\  _><_ / ";
		p[6] = " --\\. /-  ";
		p[7] = "   |. |   ";
		
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 9
		//Sleep(1000);
		//system("cls");
		
		p[4] = "\\  \\--/  /";
		p[5] = " \\ _><_ / ";
		p[6] = "  -\\. /-  ";
		p[7] = "   |. |   ";
		
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 10
		//Sleep(1000);
		//system("cls");
		
		p[4] = "*  \\--/  *";
		
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 11
		//Sleep(1000);
		//system("cls");
		
		p[4] = "   \\--/   ";
		p[5] = "*  _><_  *";
		p[6] = " --\\. /-- ";
		
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 12
		//Sleep(1000);
		//system("cls");
		
		p[5] = "   _><_   ";
		p[6] = "*--\\. /--*";
		
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 13
		//Sleep(1000);
		//system("cls");
		
		p[6] = " --\\. /-- ";
		p[7] = "*  |. |  *";
		
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 14
		//Sleep(1000);
		//system("cls");
		
		p[6] = "  -\\. /-  ";
		p[7] = " / |. | \\ ";
		p[8] = "*  |. |  *";
		
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 15
		//Sleep(1000);
		//system("cls");
		
		p[8] = "/  |. |  \\";
	}
	
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	return 0;
}